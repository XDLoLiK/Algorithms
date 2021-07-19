#include <stdio.h>

void Insertion_Sort(int arr[], int arr_size);

int main(void)
{
	int n;
	printf("Enter the size of array: ");
	scanf("%d", & n);
	int arr[n];
	
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", & arr[i]);
	}

	Insertion_Sort(arr, n);

	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	getchar();
	getchar();
	return 0;
}

void Insertion_Sort(int arr[], int arr_size)
{
	int current_num;
	int j;

	for (int i = 1; i < arr_size; i++)
	{
		current_num = arr[i];
		j = i - 1;

		while (j >= 0 && current_num < arr[j]) 
		{
			arr[j + 1] = arr[j];
			arr[j] = current_num;
			j--;
		} 

	}

}
