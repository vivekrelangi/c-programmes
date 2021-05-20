#include<stdio.h>
int v3=40;/*global variable*/
void main()
{
	int v1=20;/*local variable*/
	printf("%d\t%d\n",v1,v3);
	{
		int v2=20;/*local variable*/
		v1=50;
		printf("%d\t%d\t%d\n",v1,v2,v3);
	}
	printf("%d\t%d",v1,v3);
}
