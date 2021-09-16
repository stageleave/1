#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int s;//距离
	int v;//速度
	scanf("%d %d", &s, &v);
	int t;//时间
	if (0 == s % v)
	{
		t = s / v;
		t += 9;//在从七点五十九分往前算的情况下在路上花的时间
	}
	else
	{
		t = s / v;
		t += 10;//若时间超过整数分钟，则加一分钟
	}
	int h0=7;
	int m0=59;//初始化到达的小时和分钟
	int h1 ,h2,m1 ,m2;//分别保存出发时的小时和分钟的十位和个位
	for(;t!=0;t--)
	{
		if (m0 != 0)
		{
			m0--;
		}//先减分钟
		else
		{
			if (h0 != 0)
			{
				h0--;//分钟减到0再减小时
				m0 = 59;//分钟补位
			}
			else
				h0 = 23;
			    m0 = 59;
		}
}
	if (h0 < 10)
	{
		h1 = 0;
		h2 = h0;
	}
	else
	{
		h1 = h0 / 10;
		h2 = h0 % 10;
	}//分别确小时的十位和个位
	if (m0 < 10)
	{
		m1 = 0;
		m2 = m0;
	}
	else
	{
		m1 = m0 / 10;
		m2 = m0 % 10;
	}//分别确定分钟的十位和个位
	printf("%d%d:%d%d", h1, h2, m1,m2);
	return 0;
}