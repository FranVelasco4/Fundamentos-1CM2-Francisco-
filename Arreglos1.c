#include <stdio.h>
#include <math.h>

int main ()
{   float n=0;
    float m=0;
    float i=3;
    float j=0;
    float k=0;
 
    for(j=0;j<=100;j++){
        n=((1+sqrt(5))/2);
        m=((1-sqrt(5))/2);
        k=(pow(n,i)-pow(m,i))/sqrt(5);
        
        printf("el arreglo(%f)=%f\n",j,k);
        i++;
    } 
    return(0);
}
