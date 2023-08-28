#include<stdio.h>
void  main()
{
	int i,j;
	
	int a[3][3],b[3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("ENter the number in matrix:");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3/2;j++)
		{
			int temp=b[i][j];
			b[i][j]=b[i][3-j-1];
			b[i][3-j-1]=temp;
			
		}
	}
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d",b[i][j]);
		}
		printf("\n");
	}
}
