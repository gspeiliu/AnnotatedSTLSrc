/*******
The compiler doesn't hold the attribute

__STL_STATIC_TEMPLATE_MEMBER_BUG
*************/


#include <iostream>

#include <vector>

using namespace std;

template <typename T>
class testClass {
public:
	int _data;
};

//initialize the static variable

// int testClass<int>::_data = 1;
// int testClass<char>::_data = 2;

int main()
{

	#ifdef __STL_STATIC_TEMPLATE_MEMBER_BUG
	std::cout << "__STL_STATIC_TEMPLATE_MEMBER_BUG defined" << std::endl;
	#else
	std::cout << "__STL_STATIC_TEMPLATE_MEMBER_BUG undefined" << std::endl;
	#endif

	#ifdef __STL_FUNCTION_TMPL_PARTIAL_ORDER
	std::cout << "__STL_FUNCTION_TMPL_PARTIAL_ORDER defined" << std::endl;
	#else
	std::cout << "__STL_FUNCTION_TMPL_PARTIAL_ORDER undefined" << std::endl;
	#endif
	// std::cout << testClass<int>::_data << std::endl;
	// std::cout << testClass<char>::_data << std::endl;

	//define other objects
	testClass<int> obji1, obji2;
	testClass<char> objc1, objc2;

	std::cout << obji1._data << std::endl;
	std::cout << obji2._data << std::endl;
	std::cout << objc1._data << std::endl;
	std::cout << objc2._data << std::endl;

	obji1._data = 3;
	objc1._data = 4;

	std::cout << obji1._data << std::endl;
	std::cout << obji2._data << std::endl;
	std::cout << objc1._data << std::endl;
	std::cout << objc2._data << std::endl;

	return 0;
}