#include<stdio.h>
#include<stdlib.h>

char f(char n);

int main(void)
{
	char n;
	printf("½Ð¿é¤J¦r¥À");
	scanf_s("%c", &n);

	printf("%c", f(n));

	system("pause");
	return 0;
}
char f(char n)
{
	if ((n >= 65) && (n <= 90))
	{
		n = n + 32;
	}
	else
	{
		n = n - 32;
	}
	return n;
}