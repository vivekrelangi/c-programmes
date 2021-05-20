#include<stdio.h>
void main()
{
struct doj
{
	int day;
	int month;
	int year;
};
struct employee
{
	int eid;
	int ename[30];
	struct doj d1;
}e1;
e1.eid=501;
e1.ename[30]="siva";
e1.d1.day=01;
e1.d1.month=01;
e1.d1.year=2021;
printf("%d\n",e1.eid);
printf("%s\n",e1.ename);
printf("%d\n",e1.d1.day);
printf("%d\n",e1.d1.month);
printf("%d\n",e1.d1.year);
}
