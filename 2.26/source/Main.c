#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b;
	printf("�п�J��ӼƦr�ӧP�_�Ĥ@�ӼƬO�_���ĤG�Ӽƪ�����:");
	scanf_s("%d %d", &a, &b);
	if (a % b == 0)
	{
		printf("�Ĥ@�ӼƬ��ĤG�Ӽƪ�����\n");
	}
	else
	{
		printf("�Ĥ@�ӼƤ��O�ĤG�Ӽƪ�����\n");
	}

	system("pause");
	return 0;
}