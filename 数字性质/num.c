#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a ;
	scanf("%d", &a);
	int A, U, E, Z;
	if ((a % 2 == 0) &&(a>4 && a <= 12))
		A = 1;
	else
		A = 0;
	if ((a % 2 == 0) || (a > 4 && a <= 12))
		U = 1;
	else
		U = 0;
	if(((a%2==0)&&!(a > 4 && a <= 12))||(!(a%2==0)&&(a > 4 && a <= 12)))
		E=1;
	else
		E=0;
	if (!(a % 2 == 0) && !(a > 4 && a <= 12))
		Z = 1;
	else
		Z = 0;
	printf("%d %d %d %d", A, U, E, Z);
	return 0;
}