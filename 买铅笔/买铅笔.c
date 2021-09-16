#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b,c;
	scanf("%d %d", &a, &b);
	c = (a * 10 + b) / 19;
	printf("%d", c);
	return 0;
}