#include <iostream>
#include<limits>

using namespace std;

template <typename T>
class info {
	T a;
	string name;
	int size;
public:
	info(T& a) {
		this->a = a;
		this->size = sizeof(a);
		this->name = typeid(a).name();
	}
	void print() {
		cout << size << endl << name << endl << numeric_limits<T>::min() << endl << numeric_limits<T>::max() << endl;
	}
};

int main() {
	float a = 1.2;
	info<float> i(a);
	i.print();

}