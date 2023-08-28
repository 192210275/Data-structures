#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number:");
	scanf("%d",&a);
	printf("Enter the number number :");
	scanf("%d",&b);
	printf("The before swapping of %d and %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("The after swapping of %d and %d",a,b);
	
}
