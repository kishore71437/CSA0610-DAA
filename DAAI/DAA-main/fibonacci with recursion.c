#include<stdio.h>
int fibonacci (int);
int main(void)
{
	int terms;
	printf("enter the number of terms:");
	scanf("%d",&terms);
	for(int n=0;n<terms;n++)
	{
		printf("\n%d",n,fibonacci(n));
	}
}
	int fibonacci(int num)
	{
		if(num==0||num==1)
		return num;
		else
		return fibonacci(num-1)+fibonacci(num-2);
}
