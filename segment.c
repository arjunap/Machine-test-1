#include<stdio.h>

int seg(int n,int pos)
{
int s,t,u,v,i,m,k;

	s=n%10;
	n=n/10;
	t=n%10;
	n=n/10;
	u=n%10;
	n=n/10;
	v=n%10;
	n=n/10;
m=s*1000+t*100+u*10+v;
	for(i=0;i<4;i++)
	{
	k=m%10;
	switch (k)
	{
	    case 1:if(pos==1)
		    printf("   ");
		    if(pos==2)
		    printf("|  ");
		    if(pos==3)
		    printf("|  ");
		break;
	    case 2:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf(" _|");
		    if(pos==3)
		    printf("|_ ");
		break;
	    case 3:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf(" _|");
		    if(pos==3)
		    printf(" _|"); 
		break;
	    case 4:if(pos==1)
		    printf("   ");
		    if(pos==2)
		    printf("|_|");
		    if(pos==3)
		    printf("  |"); 
		break;
	    case 5:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf("|_ ");
		    if(pos==3)
		    printf(" _|"); 
		break;
	    case 6:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf("|_ ");
		    if(pos==3)
		    printf("|_|"); 
		break;
	    case 7:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf("| |");
		    if(pos==3)
		    printf("  |"); 
		break;
	    case 8:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf("|_|");
		    if(pos==3)
		    printf("|_|"); 
		break;
	    case 9:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf("|_|");
		    if(pos==3)
		    printf(" _|"); 
		break;
	    case 0:if(pos==1)
		    printf(" _ ");
		    if(pos==2)
		    printf("| |");
		    if(pos==3)
		    printf("|_|"); 
		break;
	    
	    
	}
	m=m/10;
        
	}
return 0;
}

int main()
{
int n,i;
printf("enter the number \n");
scanf("%d",&n);
for(i=1;i<=3;i++)
{
int s=seg(n,i);
printf("\n");
}

return 0;
}
