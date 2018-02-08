#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	char a[10][10],b[9],t[10][10];
	int i,j,x,n,k,c=0;
	printf("enter a string \n");
	scanf("%s",b);
	x=strlen(b);
		
	printf("%d*%d",n,n);
	printf("\n\t");		
	for(i=0;i<n;i++)
	{
		for(j=0,k=c;j<n&&k<x;j++,k++)
		{
			a[i][j]=b[k];
		}
		c=k;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c\t",a[i][j]);
		}
		printf("\n\t");
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			printf("%c",a[i][j]);
		}
	}
	printf("\n\t");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			t[i][j]=a[j][i];
		}
	}
	printf("\n\n\t");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%c\t",t[i][j]);
		}
		printf("\n\t");
	}		
	for(j=0;j<n;j++)
	{\
		for(i=0;i<n;i++)
		{
			printf("%c",t[i][j]);
		}
	}
	printf("\n\t");		
	printf("\n");
	return 0;
}
