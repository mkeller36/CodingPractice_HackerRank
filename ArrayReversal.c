#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr, i, *newArr;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    newArr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
    for (i = 0; i < num; i++)
    {
        newArr[i] = arr[(num-1)-i];
    }

    for(i = 0; i < num; i++)
        printf("%d ", *(newArr + i));
    return 0;
}