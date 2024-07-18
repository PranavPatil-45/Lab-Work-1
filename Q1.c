#include<stdio.h>
#include<conio.h>

void main()
{
	
	int x,y;
	printf("Enter the value of x :");
	scanf("%d",&x);
	
	printf("Enter the value of y :");
	scanf("%d",&y);
	
	if(x>y)
	{
		printf("y is minimum",y);
	}
	else
	{
		printf("x is minimum", x);
	}
}
