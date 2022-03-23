#include<stdio.h>

void bubble_sort(int[], int);
void swap(int[] , int, int);

int main()
{
    int numbers[] = {8, 1, 5, 7, 3, 2, 6, 4, 9, 0, 10};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;

    bubble_sort(numbers, size);

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

void bubble_sort(int numbers[], int size)
{
    int index;
    int index2;
    int is_sorted;

    for(index = 0; index < size - 1; index++)
    {
        is_sorted = 1;

        for(index2 = 1; index2 < size - index; index2++)
        {
            if(numbers[index2 - 1] > numbers[index2])
            {
                swap(numbers, index2 - 1, index2);
                is_sorted = 0;       
            }
        }

        if(is_sorted == 1)
        {
            return;
        }
    }
}
