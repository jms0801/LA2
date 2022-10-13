#include <stdio.h>

int Zegop(int num, int tim)
{
	if (tim == 0)
	{
		return 1;
	}
	else
	{
		int result = num, count = 0;
		for (count = 0; count + 1 < tim; count++)
			result = result * num;
		return result;
	}
}

int Transtobin(int num)
{
	static int count = 0;
	static int result = 0;
	if (num == 1)
	{
		if (count == 0)
		{
			return 1;
		}
		else
		{
			result = result + Zegop(10, count);
			return result;
		}
	}
	if (num % 2 == 0)
	{
		count++;
		Transtobin(num / 2);
	}
	else
		if (num % 2 == 1)
		{
			if (count == 0)
			{
				result++;
				count++;
			}
			else
			{
				count++;
				result = result + Zegop(10, count-1);
			}
			Transtobin(num / 2);
		}

}
int main(void)
{
	int num;
	printf("Please enter a number : ");
	scanf("%d", &num);
	printf("%d", Transtobin(num));
	return 0;
}