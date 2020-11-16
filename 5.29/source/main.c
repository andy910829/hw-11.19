#include<stdio.h>
#include<stdlib.h>
int f(int a,int b);

int main(void)
{
	int a, b;
	printf("請輸入兩個數:");
	scanf_s("%d %d", &a, &b);

	printf("最小公倍數為:%d\n", f(a,b));

	system("pause");
	return 0;
}
int f(int a,int b)
{
	int c, lcm;
	if (a > b)
	{
		if (a%b == 0)
		{
			return a;
		}
		else
		{
			c = a % b;
			lcm = c * a / c * b / c;
		}
		
		
	}
	else 
		if(b%a==0)
		{
			return b;
		}
		else
		{
			c = b % a;
			lcm = c * a / c * b / c;
		}
	return lcm;
}