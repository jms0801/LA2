#include <stdio.h>
int scanning(int arr[])
{
	int cnt = 0;
	while (1)
	{
		if (arr[cnt] == 0)
			break;
		else
			printf(" %d", arr[cnt]);
			cnt++;
	}
	return 0;
}
int main(void)
{
	int a, b, c, d, e;
	int fiveint[5]{};
	int odd[5]{}, even[5]{};
	int oddn = 0, evenn = 0;
	printf("please input five integers: ");
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	fiveint[0] = a, fiveint[1] = b, fiveint[2] = c, fiveint[3] = d, fiveint[4] = e;
	for (int cnt = 0; cnt < 5; cnt++)
	{
		if (fiveint[cnt] % 2 == 0)
		{
			even[evenn] = fiveint[cnt];
			evenn++;
		}
		else
		{
			odd[oddn] = fiveint[cnt];
			oddn++;
		}
	}
	printf("Odd numbers:");
	scanning(odd);
	printf("\nEven numbers:");
	scanning(even);
	return 0;
}