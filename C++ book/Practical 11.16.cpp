#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter three number:\t");
	scanf("%d\t%d\t%d",&a,&b,&c);
	if(a>b&&a>c)
	printf("Maximum number is %d",a);
	else if(b>a&&b>c)
	printf("Maximum number is %d",b);
	else
	printf("Maximum number is %d",c);
}