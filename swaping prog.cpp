#include<stdio.h>
int main()
{
	int a=20;
	int b=10;
	printf("Before swapping a=%d b=%d",a,b);
	a=a+b;//a=20+10=30
	b=a-b;
	a=a-b;
	
	printf("\nAfter swapping a=%db=%d",a,b);
	return(0);
}
