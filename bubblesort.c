#include <stdio.h>
#include <stdbool.h>


void swap(int *a, int *b);

int main()
{
    
    int arr[] = {7,6,9,1,3,2,4}; 
    // int arr[] = {1,2,3,4,5,6,8}; 
    int len = sizeof(arr)/sizeof(arr[0]);
    bool isSwapped = false;


    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                isSwapped = true;
            }
        }
        if (isSwapped == false) break;
    }

    // print
    // for(int i=0; i<len; i++) printf("%i\n", arr[i]);

    return 0;
}


void swap(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

