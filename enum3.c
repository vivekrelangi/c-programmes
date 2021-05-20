#include<stdio.h>
#include<conio.h>
enum threshold{low=40,normal=60,high=100};
void main()
{
	enum threshold status;
	status=low;
	printf("\n You are at %d state work hard to improve!!",status);
}
