#include<stdio.h>
void main()
{
	struct emploee
	{
		int eid;
		char ename[20];
		int salary;
	}e1,e2;
	printf("Enter the employee details");
	scanf("%d %d %s",&e1.eid,&e1.salary,&e1.ename);
	e2={502,"king",99999};
	printf("%d\n",e1.eid);
	printf("%d\n",e1.salary);
	printf("%s\n",e1.ename);
	printf("%d %d %s",e2.eid,e2.salary,e2.ename);
}
