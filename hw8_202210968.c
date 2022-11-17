#include <stdio.h>
#include <math.h>
float SD(float arr[5])
{
	float result;
	float * ptr = arr;
	float ave, i, sum1=0, sum2 = 0;
	for (i = 0; i < 5; i++)
	{
		sum1 += *ptr;
		ptr++;
	}
	ave = sum1 / 5;
	for (i = 0; i < 5; i++)
	{
		ptr--;
		sum2 += pow(*ptr - ave, 2);
	}
	result = sqrt(sum2 / 5);
	return result;
}
int main(void)
{
	float a, b, c, d, e;
	printf("Enter 5 real numbers:");
	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
	float arr[5] = { a, b, c, d, e };
	printf("Standard Deviation = %.3f", SD(arr));
	return 0;
}