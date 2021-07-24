#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	int sum = num1 + num2;
	int x = num3 * num4;

	scanf("%d%d%d%d", &num1, &num2,&num3,&num4);
	printf("sum = %d \n",sum);
	printf("x = ", x );
	return 0;
}