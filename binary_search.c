#include<stdio.h>

int binary_search(int[], int, int);

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

    index = binary_search(list, size, search_number);

    if(index == -1)
        printf("%d is not exist in list.\n", search_number);

    else
        printf("The index number of %d is %d.\n", search_number, index);

    return 0;
}

int binary_search(int _list_[], int size, int search_number)
{    
    int left_index = 0;
    int right_index = size - 1;
    
    while(1)
    {
        if(left_index == size || right_index < 0)
            return -1;

        int mid_index = left_index + (right_index - left_index) / 2;

        if(_list_[mid_index] == search_number)
            return mid_index;

        else if(_list_[mid_index] > search_number)
            right_index = mid_index - 1;
                
        else
            left_index = mid_index + 1;
    }
}
