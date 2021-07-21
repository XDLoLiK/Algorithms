#include <stdio.h>

void Heap_Sort(int arr[], int arr_size);
void Heapify(int arr[], int index, int heap_size);
void Build_Heap(int arr[], int heap_size);

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

	Heap_Sort(arr, n);
	
	for (int i = 0; i < n; ++i)
	{
		printf("%d ", arr[i]);
	}

	getchar();
	getchar();
	return 0;
}

void Heapify(int arr[], int index, int heap_size)
{
	int left, right, largest, temp;

	left = 2 * index + 1;
	right = 2 * index + 2;

	if (left <= heap_size && arr[left] > arr[index])
	{
		largest = left;
	} else {
		largest = index;
	}

	if (right <= heap_size && arr[right] > arr[largest])
	{
		largest = right;
	}

	if (index != largest)
	{
		temp = arr[largest];
		arr[largest] = arr[index];
		arr[index] = temp;
		Heapify(arr, largest, heap_size);
	}
}

void Build_Heap(int arr[], int heap_size)
{

	for (int i = (heap_size - 1) / 2; i >= 0; --i)
		{
			Heapify(arr, i, heap_size);
		}	
}

void Heap_Sort(int arr[], int arr_size)
{
	int heap_size, temp;
	heap_size = arr_size - 1;

	while (heap_size > 0)
	{
		Build_Heap(arr, heap_size);
		temp = arr[0];
		arr[0] = arr[heap_size];
		arr[heap_size] = temp;
		heap_size--;
	}
}	
