#include<stdio.h>
struct bookinfo
{
	char bname[20];
	int pages;
	int price;
}book[3];
int main()
{
	int i;
	for(i=0;i<3;i++)
	{
		printf("\n enter the name of book:");
		scanf("%s",&book[i].bname);
		printf("\n enter the number of pages:");
		scanf("%d",&book[i].pages);
	    printf("\n enter the price of book:");
	    scanf("%d",&book[i].price);
	}
	for(i=0;i<3;i++)	
	{
	printf("\n name of the book:%s",book[i].bname);
	printf("\n number of the pages:%d",book[i].pages);
	printf("\n price of the book:%d",book[i].price);
    }
}
