#include<stdio.h>
int main()
{
	int m,n,i,j;
	printf("enter space seperated rows and columns: \n ");
	scanf("%d %d",&m,&n);
	int arr[m][n];
	int *a[m];
	for(i=0;i<m;i++)
	{
		a[i]=arr[i];
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("enter element for arr[%d][%d]",i,j);
			scanf("%d",a[i]+j);
		}
	}
	int max;
	max=-99;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(*(a[i]+j)%2==0)
			{
				if(*(a[i]+j)>max)
				{
					max=*(a[i]+j);
				}
			}
		}
	}
	printf("largest even no %d ",max);
}
	
