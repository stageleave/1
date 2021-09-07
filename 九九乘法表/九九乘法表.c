#include<stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			num = i * j;
			printf("%d*%d=%2d ", i, j, num);
			if (i == j)
				break;
		}
			printf("\n");
	}
	return 0;
}