#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int max(int a, int b)
{
    return a>=b ? a : b;
}
int min(int a, int b)
{
    return a<=b ? a : b;
}

int main() 
{

    int n, x, y;
    scanf("%d", &n);
    for(y = 0; y < 2*n-1;y++)
    {
        for(x = 0; x <= 2*n-1; x++)
        {
            if( x == 2*n-1)
            {
                printf("\n");  
            }
            else 
            {
                if (x <= n - 1 && y <= n - 1)
                {
                    //q1 
                    printf("%d ", max(n-x,n-y));
                } 
                else if(x > n - 1 && y <= n - 1)
                {
                    // q2
                    printf("%d ", max(n-y,x-(n-2)));
                }
                else if(x <= n - 1 && y > n - 1)
                {
                    // q3
                    printf("%d ", max(n-x,y-(n-2)));
                }
                else 
                {
                    printf("%d ", max((x-n+2),(y-n+2)));
                }
            }
        }
    }
  	// Complete the code to print the pattern.
    return 0;
}
