#include <stdio.h>

int main() {
    //Quantidade de casas que cada peça irá se movimentar
int Torre = 5;
int Bispo = 5;
int Rainha = 8;

printf("----Movimentos Xadrez----\n");

printf("\n");

        //Torre irei utilizar o "for".
        printf("\n----Movimento da torre (para a direita)----\n");
        for ( int h = 1; h <= Torre; h++) {
            printf("Direita\n");
        }


printf("\n");


        // Bispo irei utilizar o while
        printf("----Movimento do Bispo (Diagonal cima-direita)----\n");
        int i = 1;
        while ( i <= Bispo) { // quatidade que ele ira se mover
            printf("Cima - direita\n"); //movimentos do bispo
            i++;
}
    
        //Rainha irei utilizar o do-while
        printf("\n----Movimento da Rainha (para a Esquerda)----\n");
        int v = 1;
        do {
            printf("Esquerda\n");
            v++;

        } while ( v <= Rainha );

        printf("\n");
        



}







