#include<stdio.h>

void selection_sort(int[], int);
void swap(int[] , int, int);

int main()
{
    int numbers[] = {0, 8, 5, 7, 3, 2, 6, 4, 9, 1, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;

    selection_sort(numbers, size);

    for(index = 0; index < size; index++)
    {
        printf("%d ", numbers[index]);
    }

    return 0;
}

void swap(int numbers[], int index, int index2)
{
    int temp;
    temp = numbers[index];
    numbers[index] = numbers[index2];
    numbers[index2] = temp;
}

void selection_sort(int numbers[], int size)
{
    int index;
    int index2;

    for(index = 0; index < size - 1; index++)
    {
        int minimum_position = index;

        for(index2 = index + 1; index2 < size; index2++)
        {
            if(numbers[index2] < numbers[minimum_position])
            {
                minimum_position = index2;     
            }
        }

        if(minimum_position == index)
        {
            continue;
        }
        else
        {
            swap(numbers, minimum_position, index);
        }  
    }
}
