#pragma warning(disable:4996)
#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d", &a);
	for (b = 1;b < 10; ++b)
	{
		printf("%d * %d = %d\n", a, b, a * b);
	}
	return 0;
}