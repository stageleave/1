#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n=0;
	scanf("%d", &n);
	int local = 5 * n;
	int luogu = 3*n+11;
	if (local < luogu)
		printf("Local");
	else
		printf("Luogu");
	return 0;
}