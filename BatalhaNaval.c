#include <stdio.h>
int main(){

     //INTRO DO JOGO
     printf("===============================\n");
     printf("BATALHA NAVAL v1.1 by OCEANIC Games\n");
     printf("===============================\n\n");

     int agua[10][10] ={
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,0,3,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,3,3,3,0},
        {0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0}
     };

   
  for (int i = 0, j=0; i < 3; i++,j++){
         agua[i+3][j+4] = 3;//[linha(1-9)] [coluna(A-J)]
  }

  for (int x=0, y=0; x<3; y++, x++){
         agua[x][9-y] = 3;
  }


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