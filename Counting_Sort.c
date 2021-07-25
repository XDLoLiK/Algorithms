#include <stdio.h>

void Counting_Sort(int arr[], int arr_size, int max_num);

int main(void)
{
	int n, max_n = 0;	
	printf("Enter the size of array: ");
	scanf("%d\n", & n);
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", & arr[i]);

		if (arr[i] > max_n)
		{
			max_n = arr[i];
		}
	}

	Counting_Sort(arr, n, max_n);
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	getchar();
	getchar();
	return 0;
}

void Counting_Sort(int arr[], int arr_size, int max_num)
{
	int nums[max_num + 1];
	int cur_index = 0;

	for (int k = 0; k <= max_num; ++k)
	{
		nums[k] = 0;
	}

	for (int i = 0; i < arr_size; ++i)
	{
		nums[arr[i]]++;
	}

	for (int j = 0; j <= max_num; ++j)
	{
		while (nums[j] > 0)
		{
			arr[cur_index] = j;
			cur_index++;
			nums[j]--;
		}
	}
}
