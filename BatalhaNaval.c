#include <stdio.h>
int main(){

     //INTRO DO JOGO
     printf("===============================\n");
     printf("BATALHA NAVAL v1.1 by OCEANIC Games\n");
     printf("===============================\n\n");

     int agua[10][10] ={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,3,0,0},
        {0,0,3,0,0,0,3,0,0,0},
        {0,0,3,0,0,3,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,3,3,3,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
     };


//exibição do tabuleiro - NÃO MEXER!!!!
     printf("     A B C D E F G H I J\n");
     printf("   ----------------------\n");
     for (int v=0; v<10; v++){
         if (v == 9)
         {
         printf("%i|  ",v+1);
         } else{         
         printf("%i |  ",v+1);
         }
         for (int h=0; h<10; h++){
            printf("%i ",agua[v][h]);
         }
         printf("\n");
     }
//fim da exibição do tabuleiro

}