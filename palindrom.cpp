#include<stdio.h>
int main()
{
	int n,m,i,temp;
	printf("Enter the number :");
	scanf("%d%d",&n,&m);
	for(i=n;i<m;i++)
	{
		temp=n;
		n=m;
		m=temp;	
		printf("THe number palindrom number is %d",temp);
	}
}
