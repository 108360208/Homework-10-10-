#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double weight, height, BMI;
	printf("�п�J�A���魫(�H���笰���):");
	scanf_s("%lf", &weight);
	printf("�п�J�A������(�H�̬����):");
	scanf_s("%lf", &height);
	BMI = weight / (height * height);
	printf("�A��BMI���Ƭ�%lf\n", BMI);
	printf("�H�U���åͻP���@�A�ȳ�/��a�åͬ�s�|���Ѫ���T\n");
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}