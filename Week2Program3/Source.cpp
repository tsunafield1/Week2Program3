#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n, max = 0,sum=0,start=0,mstart,end;
	scanf("%d", &n);
	int num[2500];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &num[i]);
		sum += num[i];
		if (sum > max)
		{
			mstart = start;
			end = i;
			max = sum;
		}
		if (sum < 0)
		{
			start = i + 1;
			sum = 0;
		}
	}
	if (max == 0)printf("Empty sequence");
	else
	{
		for (int i = mstart; i <= end; i++)printf("%d ", num[i]);
		printf("\n%d", max);
	}
}