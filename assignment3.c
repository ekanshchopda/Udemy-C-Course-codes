#include <stdio.h>
#include <stdlib.h>
int main()
{
    int max=999;
    int min=100;
    int randno;
    randno=(rand() % (max-min+1)) + min;
    printf("3 digit pseudo no is :%d\n",randno);
    return 0;
}