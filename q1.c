#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);

	for(int i=1;i<=n;i++)
	{
		if(i==1||i==n)
		{
			for (int j=1;j<=(n-i);j++)
			{
				printf(" ");
			}
			for(int k=1;k<=n;k++)
			{
			printf("*");
			}
		printf("\n");
		}
		else
		{
			for(int j=1;j<=(n-i);j++)
			{
			printf(" ");
			}
				printf("*");
				for(int s=0;s<=(n-2);s++)
				printf(" ");
				printf("*");
				printf("\n");
		}
	}
	return 0;
}	
