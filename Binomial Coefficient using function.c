#include<stdio.h>
int fact(int a)
{
	int i,s;
	s=1;
	for(i=1;i<=a;i++)
	{
		s=s*i;
	}
	return s;
}

int main()
{
	int n,r,b,c,d,q,t,z;
	printf("enter n and r: \n");
	scanf("%d%d",&n,&r);
	z=n-r;
	b=fact(n);
	c=fact(z);
	d=fact(r);
	q=c*d;
	t=b/q;
	printf("binomial coefficient : %d",t);
	return 0;
	
}
