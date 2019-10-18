// filib.h
#ifndef FI_LIB_H
#define FI_LIB_H

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
void print_squares()
{
	for(int i=1;i<=10;++i)
	{
		int _sq = i*i;
		std::cout<<i<<" sq.:"<<_sq<<" ";
	}
}
#endif /* FI_LIB_H */
