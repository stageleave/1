#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
int main()
{
	int num = 0;
	scanf("%d", &num);
	if (num%2==0)
		printf("ż��\n");
	else
		printf("����\n");
	return 0;
}