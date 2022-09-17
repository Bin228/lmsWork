#include <stdio.h>
#include <stdlib.h>

void main()
{
    print16();

    getch();
}
void print16(){
    for(int i=0; i < 16; i++){
        printf("%X", i);
    }
}
