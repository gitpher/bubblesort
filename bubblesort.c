#include <stdio.h>
#include <stdlib.h>



// swap

void bswap(int *a, int *b) 
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

    do {
        for(int i=0; i<len-1; i++) 
        {
            for(int j=1; j<len-i-1; j++) {
                if(arr[i]>arr[j]) 
                {
                    bswap(&arr[i], &arr[j]);
                    cnt++;
                }
            }
        }
    } while (cnt>0);
    
    return 0;
}

