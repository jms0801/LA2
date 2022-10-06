#include <stdio.h>
int main(void)
{
	int num = 0, ber, cnt = 0;
	printf("Please enter a number: ");
	scanf("%d", &num);

	for (ber = 2; ber < num; ber++)
	{
		if (num % ber == 0)
			cnt++;
	}
	if (cnt == 0)
		printf("It is a prime number.");
	else
		printf("It is not a prime number");
	return 0;
}