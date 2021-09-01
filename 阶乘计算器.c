#define _CRT_SECURE_NO_WARNINGS 

#include<stdio.h>
int main()
{
	int num = 0;
	int i ;

	int end = 1;
	scanf("%d", &num);
	for (i = 1; i <= num; i++)
	{
		end = end * i;
	}
	printf("%d", end);
	return 0;
}
