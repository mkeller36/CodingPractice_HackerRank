#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    // initializations 
    int i;
    int sum = 0;
    int n = 0;
    
    // get length from buffer 
    scanf("%d", &n);
    
    // create array from length
    int *arr = (int*)malloc(n*sizeof(int));
    
    // load array with values from stdin 
    for(i=0;i<n;i++)
    {
        scanf("%d ",&arr[i]);
        //printf("%d\n",arr[i]);
        sum = sum + arr[i];
        //printf("%d\n", sum);
    }
    printf("%d", sum);
    return 0;
}