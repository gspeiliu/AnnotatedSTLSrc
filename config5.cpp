/*****
__STL_CLASS_PARTIAL_SPECIALIZATION
**********/

#include <iostream>

using namespace std;

template <class I, class O>
struct testClass {
	testClass() {std::cout << "I, O" << std::endl;}
};

template <class T>
struct testClass<T*, T*>
{
	testClass() {std::cout << "T*, T*" << std::endl;}
};

template <class T>
struct testClass<const T*, T*>
{
	testClass() {std::cout << "const T*, T*" << std::endl;}
};

int main()
{
	testClass<int, char> obj1;
	testClass<int*, int*> obj2;
	testClass<const int*, int*> obj3;
}