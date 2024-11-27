#include <stdio.h>  
#include <string.h>  
int main()  
{  
char str[100];
printf("enter a string:");
gets(str);
strrev(str);
printf("the rev of the str is %s",str);
if(strrev==str)
{
printf("its palindrome");
}
else
{
printf("not a palindrome");
}
}
