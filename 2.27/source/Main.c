#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	for (i = 0; i <= 4; i++)
	{
		for (j = 9 - i; j > 0; j--)
		{
			printf(" ");
		}
		for (j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	system("pause");
	return 0;
}