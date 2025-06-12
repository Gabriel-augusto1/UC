#include <stdio.h>

int main()
{
    ///////////variaveis
   int distancia, tempo;
   float divisao;
   
   printf("digite a distancia:");
   scanf("%d",&distancia);

   printf("digite o tempo:");
   scanf("%d", &tempo);

 divisao = distancia / tempo; 
  
  printf("Resultado Da Divisao e : %f" ,divisao);

   return 0;

}