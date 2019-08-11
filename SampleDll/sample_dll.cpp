#include <iostream>

#ifdef _MSC_VER
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

extern "C" {
	DLL_EXPORT DLL_EXPORT int Add(int n1, int n2);
}

DLL_EXPORT int Add(int n1, int n2)
{
	std::cout << n1 << "," << n2 << std::endl;
	return n1 + n2;
}