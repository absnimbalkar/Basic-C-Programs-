#include<stdio.h>
int prime_or_not(int, int);
int main()
{
    int num, prime;
    num= 456456;
    prime = prime_or_not(num, num/2);
    if(prime % 2 == 0)
    {
		printf("\n%d is not a prime number\n", num);
    }
    else
    {
    
	  printf("\n%d is a prime number\n", num);
    }
    return 0;
}
int prime_or_not(int n, int i)
{
    if(i == 1)
       return 1;  
    else
    {
       if(n%i == 0)
           return 0;
       else
           prime_or_not(n, i-1);    
    }
}