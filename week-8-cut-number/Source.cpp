#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

struct inputnum
{
	int num[3], tmp;
}pita;
int pow(int a,int b,int c)
{
	int ans = 0;
	if (pow(a, 2) + pow(b, 2) == pow(c, 2))
	{
		printf("This triangle is the Pythagorean triangle.");
	}
	else
	{
		printf("This triangle is not the Pythagorean triangle.");
	}
	return ans;
}
int main()
{
	
	for (int i = 0; i < 3; i++)
	{
		printf("Enter the positive integer[%d] : ",i+1);
		scanf("%d", &pita.num[i]);
	}
	
	if (pita.num[0] > 0 && pita.num[1] > 0 && pita.num[2] > 0)
	{
		if (pita.num[0] > pita.num[2])
		{
			pita.tmp = pita.num[0];
			pita.num[0] = pita.num[2];
			pita.num[2] = pita.tmp;
			pita.tmp = 0;
		}
		if (pita.num[0] > pita.num[1])
		{
			pita.tmp = pita.num[0];
			pita.num[0] = pita.num[1];
			pita.num[1] = pita.tmp;
			pita.tmp = 0;
		}
		if (pita.num[1] > pita.num[2])
		{
			pita.tmp = pita.num[1];
			pita.num[1] = pita.num[2];
			pita.num[2] = pita.tmp;
			pita.tmp = 0;
		}
	}
	
	pow(pita.num[0], pita.num[1], pita.num[2]);
	return 0;
}