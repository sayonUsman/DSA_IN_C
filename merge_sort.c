#include<stdio.h>

void merge(int[], int, int, int);
void merge_sort(int[], int, int);

int main()
{
    int size;
    int index;

    printf("Please enter the size of list: ");
    scanf("%d", &size);

    int list[size];

    printf("\nPlease enter the list of number:\n");
    
    for(index = 0; index < size; index++)
    {
        scanf("%d", &list[index]);
    }
    
    merge_sort(list, 0, size -1);
    
    for(index = 0; index < size; index++)
    {
        printf("%d ", list[index]);
    }

    return 0;
}

void merge(int list[], int left_index, int mid_index, int right_index)
{
	int index;
	int index2;
	int index3;
	int left_list_size = mid_index - left_index + 1;
	int right_list_size = right_index - mid_index;
	int left_list[left_list_size];
	int right_list[right_list_size];
	
	for(index = 0; index < left_list_size; index++)
	{
		left_list[index] = list[left_index + index]; 
	}
	
	for(index = 0; index < right_list_size; index++)
	{
		right_list[index] = list[mid_index + 1 + index];	
	}
	
	index  = 0;
	index2 = 0;
	index3 = left_index;
	
	while(index < left_list_size && index2 < right_list_size)
	{
		if(left_list[index] < right_list[index2])
		{
			list[index3] = left_list[index];
			index++;	
		}
		
		else
		{
			list[index3] = right_list[index2];
			index2++;
		}
		
		index3++;
	}
	
	while(index < left_list_size)
	{
		list[index3] = left_list[index];
		index++;
		index3++;
	}
	
	while(index2 < right_list_size)
	{
		list[index3] = right_list[index2];
		index2++;
		index3++;
	}
}

void merge_sort(int list[], int left_index, int right_index)
{
	if(left_index < right_index)
	{
		int mid_index = left_index + (right_index - left_index) / 2;
		
		merge_sort(list, left_index, mid_index);
		merge_sort(list, mid_index + 1, right_index);
		merge(list, left_index, mid_index, right_index);
	}
}
