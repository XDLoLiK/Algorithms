#include <stdio.h>

void Bubble_Sort(int arr[], int arr_size);

int main(void)
{
	int n;	
	printf("Enter the size of array: ");
	scanf("%d\n", & n);
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", & arr[i]);
	}

	Bubble_Sort(arr, n);
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	getchar();
	getchar();
	return 0;
}

void Bubble_Sort(int arr[], int arr_size)
{
	int temp;

	for (int i = 0; i < arr_size; ++i)
	{
		for (int j = i + 1; j < arr_size; ++j)
		{
			if (arr[j] < arr[i])
			{
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
}
