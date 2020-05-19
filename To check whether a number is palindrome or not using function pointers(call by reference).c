#include<stdio.h>
void palindrome(int* a)
{
	int d,rev,s;
	rev=0;
	s=*a;
	while(s>0)
	{
		d=s%10;
		rev=rev*10+d;
		s=s/10;
	}
	*a=rev;
}
void main()
{
	int n,t;
	scanf("%d",&n);
	t=n;
	void (*p)(int*)=palindrome;
	(*p)(&n);
	if(t==n)
	printf("%d is a palindrome no",n);
	else
	printf("%d is not a palindrome no",n);
}
