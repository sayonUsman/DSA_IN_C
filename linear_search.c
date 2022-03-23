#include<stdio.h>

int linear_search(int[], int, int);

int main()
{
    int size;
    int index;
    int search_number;

    printf("Please enter the size of list: ");
    scanf("%d", &size);

    int list[size];

    printf("\nPlease enter the list of number:\n");
    
    for(index = 0; index < size; index++)
    {
        scanf("%d", &list[index]);
    }
    
    printf("Please enter the number which number want to find out from list: ");
    scanf("%d", &search_number);

    index = linear_search(list, size, search_number);

    if(index == -1)
        printf("%d is not exist in list.\n", search_number);

    else
        printf("The index number of %d is %d.\n", search_number, index);

    return 0;
}

int linear_search(int list[], int size, int search_number)
{
    int index;

    for(index = 0; index < size; index++)
    {
        if(list[index] == search_number)
            return index;
    }

    return -1;
}
