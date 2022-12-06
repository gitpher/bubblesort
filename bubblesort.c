#include <stdio.h>
#include <stdlib.h>



// swap
void swap(int *a, int *b) 
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


int main()
{
    
    int arr[] = {7,6,9,1,3,2,4};
    int len = sizeof(arr)/sizeof(arr[0]);
    int cnt = 0;


    for(int i=0; i<len-1; i++) // 6번
    {
        printf("check: %i", i);
        for(int j=0; j<len-i-1; j++) {
            if(arr[i]>arr[j+1]) 
            {
                // swap
                swap(&arr[i], &arr[j+1]);
                cnt++;
            }
        }
        printf("\n");
    }
    
    // print
    for(int i=0; i<len; i++) printf("%i\n", arr[i]);


    return 0;
}

