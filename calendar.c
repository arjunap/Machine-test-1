#include<stdio.h>
 #include <string.h>
int main()
{
int a[5][7], i,j,count,k,cmp,e=1;
char b[14]="s\tm\tt\tw\tt\tf\ts";
char c[10];
char d[10];

printf(" enter the day \n");
gets(c);
if(strcmp(c,"sunday")==0)
k=1;
else if(strcmp(c,"monday")==0)
k=2;
else if(strcmp(c,"tuesday")==0)
k=3;
else if(strcmp(c,"wednesday")==0)
k=4;
else if(strcmp(c,"thursday")==0)
k=5;
else if(strcmp(c,"friday")==0)
k=6;
else if(strcmp(c,"saturday")==0)
k=7;
else
printf(" wrong day is entered....\n");

printf(" enter the month \n");
gets(d);
if (strcmp(d,"january")==0 || strcmp(d,"march")==0 ||strcmp(d,"may")==0 || strcmp(d,"july")==0 || strcmp(d,"august")==0 || strcmp(d,"october")==0 || strcmp(d,"december")==0)
count=31; 
else if (strcmp(d,"april")==0 || strcmp(d,"june")==0 ||strcmp(d,"september")==0 || strcmp(d,"november")==0)
count=30; 
else if (strcmp(d,"february")==0)
count=28;
else
printf(" wrong month is entered....\n");
printf("%s \n",b);



for(i=1;i<2;i++)
for(j=1;j<=7;j++)
	{
	if(j<k)
	printf(" \t");
	else
	{
	printf("%d\t",e);
	e++;
	}
	}
printf("\n");	
for(i=1;i<=5;i++)
{
	for(j=1;j<=7;j++)
	{
	if(e<=count)
	{
	printf("%d\t",e);
	e++;
	}
	else
	printf(" \t");
	}
printf("\n");
}




return 0;

}
