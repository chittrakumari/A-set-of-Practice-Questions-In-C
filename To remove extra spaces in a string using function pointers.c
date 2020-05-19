#include<stdio.h>
void compare(char *e)
{
	int i,j;
	for(i=0;*(e+i)!='\0';i++)
	{
		if(*(e+i)==' ' && *(e+i+1)==' ')
		{
			for(j=i+1;*(e+j)!='\0';j++)
			{
				*(e+j)=*(e+j+1);
			}
			i--;
		}
		
	}
}
void main()
{
	char s[100];
	scanf("%[^\n]s",s);
	void (*p)(char*)=compare;
	(*p)(s);
	printf("%s",s);
	
}
