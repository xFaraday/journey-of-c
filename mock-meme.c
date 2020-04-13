#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    char string[1000], length, otherlen;
    int i;
    i = 0;
    const char *L;
   
    strcpy(string, argv[1]);
    char *newstr = string;

    printf("Original: %s\n", string);
    //convert input always to lowercase



    L = string;
    int lol = 0;
    while (*L != '\0') {
        L++;
        lol++;
        
    }

    printf("length = %i\n", lol);

    while (i < lol) {
        newstr[i] = string[i]-32;
        i+=2;
    }
    printf("New: %s\n", newstr);
    printf("%d\n", i);
}
