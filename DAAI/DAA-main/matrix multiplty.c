#include<stdio.h>
int main ()
{
	int r,c,i,j,k,a[10][10],b[10][10],multi[10][10];
	printf("Enter the no of Rows : ");
	scanf("%d",&r);
	printf("Enter the no of columns : ");
	scanf("%d",&c);
	printf("Enter the first matrix Elements : \n");
	for(i=0;i<r;i++)
	{
	    for(j=0;j<c;j++)
	    {
	    	scanf("%d",&a[i][j]);
		}
	}
	printf("Enter the second matrix elements : ");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	printf("Multiplied matrix is : \n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			multi[i][j]=0;
			for(k=0;k<c;k++)
			{
				multi[i][j]+=a[i][k]*b[k][j];
			}
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",multi[i][j]);
		}
		printf("\n");
	}
	return 0;
}
