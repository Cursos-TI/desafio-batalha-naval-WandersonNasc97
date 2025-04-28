#include <stdio.h>
#define LINHA 10
#define COLUNA 10

int main(){

     //INTRO DO JOGO
     printf("===============================\n");
     printf("BATALHA NAVAL v1.1 by OCEANIC Games\n");
     printf("===============================\n\n");

     int agua[LINHA][COLUNA] ={
      {0,0,1,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {0,0,0,0,0,0,0,0,0,0},
      {3,0,0,0,0,0,0,0,0,0},
      {3,0,0,0,0,0,0,0,0,0},
      {3,0,0,0,0,0,0,0,0,0},
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
//CRIAÇÃO DO CONE NA MATRIZ DO CONE
            agua[0][2]+=1;
         for (int x=0, y=0; x<4; x++){
            if(x==2){
               for(y=0;y<5;y++){
                  agua[x][y]=1;
               }
            } else if(x==1){
               for(y=1;y<4;y++){
                  agua[x][y]=1;
               } 
            } else continue;
         }


//CRIAÇÃO DA CRUZ NA MATRIZ DA CRUZ - feito
         for(int x = 6, y=2; x<10;x++){
            agua[x][y]=1;
         }
         for(int x = 8, y=0; y<5;y++){
            agua[x][y]=1;
         }
//CRIAÇÃO DO OCTAEDRO NA MATRIZ DO OCTAEDRO
      for(int x=3, y=8; x<6;x++){
         if(x==4){
         for (int y=7; y<10;y++){
            agua[x][y]=1;
         }} else {
         agua[x][y]=1;
         }
      }


         printf("\n");
     }
//fim da exibição do tabuleiro

}