#include<stdio.h>
#include<stdlib.h>

int power(int a, int b);

int main(void)
{
	int a, b;
	printf("base=");
	scanf_s("%d", &a);
	printf("exponent=");
	scanf_s("%d", &b);
	printf("power(%d,%d)=%d", a, b,power(a,b));
}
int power(int a, int b)
{
	int n,c=1;
	for(n=0;n<b;n++)
	{
		c = c * a;
	}
	return c;
}