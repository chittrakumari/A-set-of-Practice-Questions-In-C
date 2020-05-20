#include<stdio.h>
void sum(int* a,int* n,int* r)
{
	int s,i,t;
	float q;
	s=1;
	for(i=1;i<=*n;i++)
	{
		s=s*(*r);
	}
	q=(*a)*(s-1);
	t=q/(*r-1);
	printf("sum of first %d terms of GP %d",*n,t);
}
void main()
{
	int a,n,r;
	printf("enter space separated a,n,r \n");
	scanf("%d %d %d",&a,&n,&r);
	void (*p)(int*,int*,int*)=sum;
	(*p)(&a,&n,&r);
}
