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
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if( i==0 || j==0|| j==n-1 || i==m-1  )
			{
				printf("%d",*(a[i]+j));
			}
		else
		printf(" ");
		}
		printf("\n");
	}
	return 0;
}

