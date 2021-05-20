#include<stdio.h>
int main()
{
	int i;
	char ch_arr[3][10]={"Sriram","King","Shiva"};
	printf("******The array of strings are******");
	for(i=0;i<3;i++)
	{
		printf("the output string is=%s \n",ch_arr+i);
		//printf("the memory address is=%u \n",ch_arr+i);
	}
	return 0;
}
