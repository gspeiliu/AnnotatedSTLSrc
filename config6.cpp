/**********
__STL_FUNCTION_TMPL_PARTIAL_ORDER
***********/

#include <iostream>
using namespace std;

class alloc {

};

template <class T, class Alloc = alloc>
class vector {
public:
	void swap(vector<T, Alloc>& x) { 
		cout << "swap()" << endl;
	}
};

int main()
{
	vector<int> x, y;
	x.swap(y);

	return 0;
}