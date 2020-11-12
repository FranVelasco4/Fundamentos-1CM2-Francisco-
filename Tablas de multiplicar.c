#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) 
{
    int a=1;
    int b;
    while(a <= 10) 
    {
        b=1;
        while(b<=10)
        {
            printf("%4d",a*b);
            b++;
        }
        printf("\n");
        a++;
       
    }

    return (EXIT_SUCCESS);
}
