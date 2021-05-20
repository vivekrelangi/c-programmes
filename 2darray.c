#include<stdio.h>
void main()
{
	int a[2][2],i,j;
	printf("Enter the input for 2x2 matrix:\n");
	for(i=0;i<2;i++)//row count
	{
		for(j=0;j<2;j++)
		scanf("%d",&a[i][j]);
	}
	printf("Display the 2x2 matrix\n");
	for(i=0;i<2;i++)//row count
	{
		for(j=0;j<2;j++)
		printf("%d \t",a[i][j]);
	}
	printf("This is a 2x2 matrix");
}
