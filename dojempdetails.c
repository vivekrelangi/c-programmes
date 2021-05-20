#include<stdio.h>
void main()
{
	struct employee
	{
		int eid;
		char ename[30];
		struct doj
		{
			int day;
			int month;
			int year;
		}d1;
	}e1;
	e1.eid=502;
	e1.enamen="ram";
	e1.d1.day=01;
	e1.d1.month=01;
	e1.d1.year=21;
	printf("%d\n",e1.eid);
	print("%s\n",e1.ename);
	printf("%d\n",e1.d1.day);
	printf("%d\n",e1.d1.month);
	printf("%d",e1.d1.year);
}
