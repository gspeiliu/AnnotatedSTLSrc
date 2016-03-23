#include <iostream>
using namespace std;

class testA {
public:
	testA() {cout << "testA" << endl;}
private:
	int i;
	std::string str;
};

class testB {
public:
	testB() {cout << "testB" << endl;}
	int i;
	int j;
private:
	testA a;
};

int main()
{
	testB b;
	cout << b.i << ", " << b.j << endl;

	return 0;
}