#include<stdio.h>

int main()
{
int i,j,n,d,m,k,s;
printf("enter the number of rows \n");
scanf("%d",&n);
s=n/2-1;
for(k=1;k<n/2;k++)
	{
		for(i=1;i<s;i++)
		printf(" ");
	s--;
		for(j=1;j<=2*k-1;j++)
		{
		printf("*");
		}
	printf("\n");

	}

s=n/2-1;
for(i=0;i<2;i++)
	{
		for(j=1;j<=2*s-1;j++)
		{
		printf("*");
		}
	printf("\n");
	}


s=1;
	for(k=n/2-1;k>=1;k--)
	{
		for(i=1;i<s;i++)
		printf(" ");
	s++;
		for(j=2*k-1;j>0;j--)
		{
		printf("*");
		}
		printf("\n");
	}
}
