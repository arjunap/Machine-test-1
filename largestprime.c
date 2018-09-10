#include<math.h>
#include<stdio.h>

int main(void)
{
long long int n,i,m,p,j,flag=1;
printf("enter the number\n");
scanf("%lld",&n);

p=n;
long long maxPrime = 1; 
while (n % 2 == 0)
	{ 
		maxPrime = 2; 
   		n=n/2;
	      
	}
for (int i = 3; i <= n/2; i += 2) { 
        while (n % i == 0) { 
            maxPrime = i; 
            n = n / i; 
        } 
    } 
if (n > 2) 
	{
		maxPrime = n;
	}

printf("%lld is the largest prime factor of %lld\n",maxPrime,p);
return 0;
}
