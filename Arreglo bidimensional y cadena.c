#include <stdio.h>
#include <stdlib.h>

// Arreglo bidimensional 
int main() {
     int arr[5][6],x=0,y=0;
   
        for(x=0;x<5;x++)
        for(y=0;y<6;y++)
        arr[x][y]=y;
      
     for(x=0;x<5;x++)
     {  
         for(y=0;y<6;y++)
         printf (" %d",arr[x][y]);
         printf ("\n");
     }
    // Cadena de caracteres
     char palabra [20];
     printf("Digite una palabra: ");
     gets(palabra);
     
     printf("Palabra: %s", palabra);
     return 0;

}
