#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void main()
{
    char c ='A';
    int it = 0;
    for(int i = 0; i<26; i++){
        printf("%c",c);
        c++;
        if(it){
            c = c + 'A' - 'a';
            it--;
        }
        else{
            c = tolower(c);
            it++;
        }

    }
    getch();
}
