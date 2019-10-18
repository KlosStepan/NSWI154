#include <iostream>
#include "fi_lib.h"
//using namespace std;

int main()
{
	for(int i = 1; i<=10; ++i)
	{
		int j = factorial(i);
		std::cout<<i<<"! = "<<j<< " ";
	}

	return 0;
}
