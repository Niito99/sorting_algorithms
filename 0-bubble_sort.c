#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
	unsigned long i,r,l;
	int temp;
	for (i=0; i<size-1; i++)
	{
		for (r=0; r<size-1; r++)
		{
			if (array[r] > array[r+1])
			{
				temp = array[r];
				array[r] = array[r+1];
				array[r+1] = temp;
				for (l=0; l<size-1; l++)
					printf("%d ", array[l]);
				printf("\n");
			}
			else
				continue;
		}
	}
}
