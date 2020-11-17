#include <stdio.h>
#include <stdlib.h>



   int  main ( int argc, char ** argv) {
    
       for (int a=1 ; a<= 10;a++) {
         for (int b=1 ; b<=10;b++) {
            printf ("%5d", a*b);
        }
         printf("%\n");
       }
