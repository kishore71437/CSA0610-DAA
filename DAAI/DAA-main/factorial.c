#include<stdio.h>
int main()
{
	int i,fact=1,num;
	printf("enter the num to find the factorial:");
	scanf("%d",&num);
	for(i=1;i<=num;++i)
	{
		fact=fact*i;
	}
	printf("the factorial of %d num is: %d",num,fact);
	return 0;
}
