#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a=0;
	scanf("%d", &a);
	if (a == 0)
		printf("Today, I ate 0 apple.");
	else if (a == 1)
		printf("Today, I ate 1 apple.");
	else
		printf("Today, I ate %d apples.", a);
	return 0;
}