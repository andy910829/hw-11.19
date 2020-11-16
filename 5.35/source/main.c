#include<stdio.h>
#include<stdlib.h>

int f(int n);

int main(void)
{
	int n;
	printf("n=");
	scanf_s("%d", &n);
	f(n);
}
int f(int n)
{
	int i, k, s = 0, a = 1;

	printf("0,1");
	for (i = 0; i < n - 2; i++)
	{
		k = s + a;
		s = a;
		a = k;
		printf(",%d", k);
	}

	system("pause");
	return 0;
}
