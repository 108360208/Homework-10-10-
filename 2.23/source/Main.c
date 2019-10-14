#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, max, min, a[3];
	printf("叫块3计ㄓ耞程籔程:");
	for (i = 0; i <= 2; i++)
	{
		scanf_s("%d", &a[i]);
	}
	max = a[0];
	min = a[0];
	for (i = 1; i <= 2; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	printf("程%d\n", max);
	printf("程%d\n", min);

	system("pause");
	return 0;
}