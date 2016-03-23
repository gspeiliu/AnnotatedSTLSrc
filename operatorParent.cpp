#include <iostream>

using namespace std;

template <typename T>
struct Plus {
	T operator() (const T& x, const T& y) const {
		return x + y;
	}
};

template <class T>
struct Minus {
	T operator() (const T& x, const T& y) const {
		return x - y;
	}
};

int main()
{
	Plus<int> plusObj;
	Minus<int> minusObj;

	std::cout << plusObj(3, 5) << std::endl;
	std::cout << minusObj(3, 5) << std::endl;

	std::cout << Plus<int>()(43, 50) << std::endl;
	std::cout << Minus<int>() (43, 50) << std::endl;

	return 0;
}