#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	double weight, height, BMI;
	printf("請輸入你的體重(以公斤為單位):");
	scanf_s("%lf", &weight);
	printf("請輸入你的身高(以米為單位):");
	scanf_s("%lf", &height);
	BMI = weight / (height * height);
	printf("你的BMI指數為%lf\n", BMI);
	printf("以下為衛生與公共服務部/國家衛生研究院提供的資訊\n");
	printf("BMI VALUES\n");
	printf("Underweight: less than 18.5\n");
	printf("Normal:      between 18.5 and 24.9\n");
	printf("Overweight:  between 25 and 29.9\n");
	printf("Obese:       30 or greater\n");

	system("pause");
	return 0;
}