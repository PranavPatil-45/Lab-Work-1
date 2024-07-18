#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	
	printf("Enter a number:");
	scanf("%d",&x);
	
	if(x==0)
	{
		printf("The number is neutral");
	}
	else if(x>0)
	
	{
		printf("The number is Positive");
	}
	else if(x<0)
	{
		printf("The number is negative");
	}
}
