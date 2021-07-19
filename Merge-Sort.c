#include <stdio.h>

void Merge_Sort(int arr[], int start, int end);
void Merge(int arr[], int start, int middle, int end);

int main(void)
{
	int n;
	scanf("%d\n", & n);
	int arr[n];

	for (int i = 0; i < n; ++i)
	{
		scanf("%d", & arr[i]);
	}

	Merge_Sort(arr, 0, n);
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	getchar();
	getchar();
	return 0;
}

void Merge_Sort(int arr[], int start, int end)
{
	int middle;

	if (start < end)
	{
		middle = (start + end) / 2;
		Merge_Sort(arr, start, middle);
		Merge_Sort(arr, middle + 1, end);
		Merge(arr, start, middle, end);
	} 
}

void Merge(int arr[], int start, int middle, int end)
{
	int current_num, j;

	while (middle + 1 <= end)
	{
		current_num = arr[middle + 1];
		j = middle;

		while (j >= 0 && current_num < arr[j])
		{
			arr[j + 1] = arr[j];
			arr[j] = current_num;
			j--;
		}

		middle++;

	}

}
