#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    int i = 0;
    const char tok[2] = " ";
    char *token;
    token = strtok(s,tok);
    
    while (token != NULL){
        printf("%s\n",token);
        token = strtok(NULL, tok);
    }
    return 0;
}
