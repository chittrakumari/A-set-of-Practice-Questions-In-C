#include<stdio.h>
void main()
{
	int a,s,i;
	scanf("%d",&a);
	s=1;
	int* d,* t;
	d=&a;
	t=&s;
	
	for(i=1;i<=*d;i++)
	{
		*t=*t*i;
	}
	printf("factorial :%d",*t);
}
