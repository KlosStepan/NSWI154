#include <iostream>
//using namespace std;
int factorial(int n)
{
        if (n<0)
        {
                return (-1);
        }
	if (n==0)
	{
		return(1);
	}
        else
        {
                return (n*factorial(n-1));
        }
}
int main()
{
	for(int i = 1; i<=10; ++i)
	{
		int j = factorial(i);
		std::cout<<i<<"! = "<<j<<std::endl;
	}
	return 0;
}
