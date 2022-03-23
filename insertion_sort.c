#include<stdio.h>

void insertion_sort(int[], int);

int main()
{
    int numbers[] = {2, 1, 8, 9, 3, 5, 4, 6, 10, 7};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int index;

    insertion_sort(numbers, size);

    for(index = 0; index < size; index++)
    {
        printf("%d ", numbers[index]);
    }

    return 0;
}

void insertion_sort(int items[], int size)
{
    int index;
    int index2;
    int current;

    for(index = 1; index < size; index++)
    {
        current = items[index];
        index2 =  index - 1;

        while(index2 >= 0 && items[index2] > current)
        {
            items[index2 + 1] = items[index2];
            index2 -= 1;
        }

        items[index2 + 1] = current;
    }    
}
