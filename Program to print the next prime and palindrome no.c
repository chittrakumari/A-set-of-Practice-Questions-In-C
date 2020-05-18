#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i,c,j,k,rev,d;
	i=n;
	while(i>=n)
	{
		rev=0;
		c=0;
		i=i+1;
		for(j=2;j<=sqrt(i);j++)
		{
			if(i%j==0)
			{
				c++;
				break;
			}
			
		}
		if(c==0)
		{
			k=i;
			while(k>0)
			{
				d=k%10;
				k=k/10;
				rev=rev*10+d;
			}
			if(rev==i)
			{
				return rev;
			}
					
		}

	}
}
int main()
{
int n,m;
printf("enter the number");
scanf("%d",&n);
m=prime(n);
printf("%d",m);
}

