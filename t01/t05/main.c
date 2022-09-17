#include <stdio.h>
#include <stdlib.h>

void main()
{
    printf("Enter a string: \n");
    mx_only_printable();
    getch();

}

void mx_only_printable(){
    char str[80];
    gets(str);
    char str1[strlen(str)];
    for(int i=0, j=sizeof(str1)-1;i<=sizeof(str1);i++,j--){
        str1[i]=str[j];
    }
    printf("%s", str1);
}
