#include <stdio.h>

void printarr(int arr1[6], int arr2[6])
{
	int i;
	printf("arr1:");
	for (i = 0; i < 6; i++)
		printf(" %d", arr1[i]);
	printf("\n");
	printf("arr2:");
	for (i = 0; i < 6; i++)
		printf(" %d", arr2[i]);
}
int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9, 10, 11, 12 };
	int* ptr1 = &arr1[0];
	int* ptr2 = &arr2[0];
	int a;
	printarr(arr1, arr2);
	for (int i = 0; i < 6; i++)
	{
		a = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = a;
		ptr1++;
		ptr2++;
	}
	printf("\n\nafter swap\n");
	printarr(arr1, arr2);
	return 0;
}