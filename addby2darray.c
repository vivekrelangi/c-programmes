#include<stdio.h>
void main()
{
	int i,j;
	int a[2][2],b[2][2],c[2][2];
	printf("Read input for matrix a");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
	    {
	    	scanf("%d",&a[i][j]);
		}
	}
	printf("Read input for matrix b");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Addition of two matrices\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("The sum of two matrices\n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		printf("%d \n",c[i][j]);
    }
}
