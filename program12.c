#include<stdio.h>
#include<stdlib.h>

int main()
{
    int No=0;

    printf("enter number\n");
    if (scanf("%d",&No)!=1)
    {
        fprintf(stderr,"Invalid input\n");

        return EXIT_FAILURE;
    }

    printf("Input is valid\n");


    return EXIT_SUCCESS;
}