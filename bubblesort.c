#include <stdio.h>
#include <stdbool.h>


void swap(int *a, int *b);

int main()
{
    
    // int arr[] = {7,6,9,1,3,2,4,5,8}; 
    // int arr[] = {7,6,9,1,3,2,4}; 
    // int arr[] = {1,2,3,4,5,6,8}; 
    int arr[] = {9,8,7,6,5,4,3,2,1}; // considering the worst scenario is important

    int len = sizeof(arr)/sizeof(arr[0]);
    bool isSwapped = false;

    // original: 7,6,9,1,3,2,4 
    // (1)--- 6,7,1,3,2,4,{9}              [0] = 6 times    len-i-1
    // (2)--- 6,1,3,2,4,{7},{9}            [1] = 5 times    len-i-1
    // (3)--- 1,3,2,{4},{6},{7},{9}        [2] = 4 times    len-i-1
    // (4)--- {1},{2},{3},{4},{6},{7},{9}  [3] = 2 times    len-i-1
    //
    // 7(=len) - x = (4) --> x = 3 

    for(int i = 0; i < len-1; i++) // vertical (4 rows)
    {
        for(int j = 0; j < len-i-1; j++) // horizontal (x times)
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
    for(int i=0; i<len; i++) printf("%i\n", arr[i]);

    return 0;
}


void swap(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

