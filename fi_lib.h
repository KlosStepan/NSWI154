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
#endif /* FI_LIB_H */
