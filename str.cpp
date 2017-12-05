#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

typedef struct {
   int a;
   int b;
}size;


int main()
{
  FILE *fr;
  fptr=fopen("data.txt","r");
  if(fptr==NULL){
     printf("ERROR! I cannot open the file !");
     return 1;
  }
  fw=fopen("dataX.txt","w");
  if(fw==NULL){
     printf("ERROR! I cannot open the file !");
     fclose(fptr);
     return 1;
     
     a = fgeta(fptr);
    while (a!= EOF)
    {
        printf ("a= %d ", a);
        a = fgeta(fptr);
    }
     b = fgetb(fptr);
    while (b != EOF)
    {
        printf ("\n b= %d", b);
        b = fgetb(fptr);
    }
    
    int o, S;
    S=a*b;
    printf("\nArea of Rectangle : %d", S);
    o=2*(a+b);
    printf("\nPerimeter of Rectangle : %d ",o);
    
}
}

    
