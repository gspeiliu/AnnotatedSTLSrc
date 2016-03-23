/********
__STL_LIMITED_DEFAULT_TEMPLATES
********/
#include <iostream>
#include <cstddef>

using namespace std;

class alloc {

};

template <class T, class Alloc = alloc, size_t BufSiz = 0>
class deque {
public:
	deque() {cout << "deque" << endl;}
};

//default argument is deque<T> which defined before.
template <class T, class Sequence = deque<T> >
class stack {
public:
	stack() {cout << "stack" << endl;}
private:
	Sequence c;
};

int main()
{
	stack<int> x;

	return 0;
}