#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int number;
	printf("�п�J�Ʀr�ӧP�_�O�_���٬O����:");
	scanf_s("%d", &number);
	if (number % 2 == 0)
	{
		printf("�A��J���Ʀr������\n");
	}
	else
	{
		printf("�A��J���Ʀr���_��\n");
	}

	system("pause");
	return 0;
}