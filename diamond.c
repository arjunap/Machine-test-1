#include<stdio.h>

int main()
{
int i,j,n,d,m,k,s;
printf("enter the number of rows \n");
scanf("%d",&n);
s=n;
for(k=1;k<=n;k++)
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
for(j=1;j<=2*s-3;j++)
{
printf("*");
}
s=1;
	for(k=n;k>=1;k--)
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
