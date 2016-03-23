#include <iostream>

using namespace std;

template <typename T>
class testClass {
public:
	const static int _datai = 3;
	const static long _datal = 3L;
	const static char _datac = 'c';
};


int main()
{
	cout << testClass<int>::_datai << endl;
	cout << testClass<int>::_datal << endl;
	cout << testClass<int>::_datac << endl;

	return 0;
}