#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    // Initalize 
    char s[1000];
    int i = 0;
    int j = 0;
    int counter = 0;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    // read string from STDIN   
    scanf("%s", &s);
    
    for(i=0;i <= 9;i++){
        j = 0;
        while(s[j] != NULL){
            // count digits
            if(s[j]-'0' == i){
                counter++;
            }
            j++;
        }
        printf("%d ",counter);
        counter = 0;
    }
    
    return 0;
}
