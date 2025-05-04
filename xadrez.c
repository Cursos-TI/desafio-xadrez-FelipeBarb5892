#include <stdio.h>

void torre(int casas){   //criando a recursividade para o movimento da torre
    if(casas > 0){
        printf("Moveu uma casa para direita\n");

        torre(casas - 1);
    }
}

void rainha(int casas){    //criando a recursividade para o movimento da rainha
    if(casas > 0){
        printf("Moveu uma casa para direita\n");

        rainha(casas - 1);
    }
}

void bispo(int casas){        //criando a recursividade para o movimento do bispo
    if(casas > 0){
        printf("Moveu uma casa para cima e direita\n");

        bispo(casas - 1);
    }
}

int main(){

    //criando as variaveis para usar no for e nos swithcs
    int x , y, z;

    //fazendo menu de boas vindas e pedindo ao usuario que escolha a peça que ele quer mover
    printf("-- Bem vindo ao seu jogo de Xadrez --\n");

    printf("1. Torre.\n");
    printf("2. Rainha.\n");
    printf("3. Bispo.\n");
    printf("4. Cavalo.\n");
    printf("Escolha uma peça para mover: ");
    scanf("%d" , &x);

    printf(" \n");

    //fazendo o switch para cada peça que o usuario possa escolher
    switch (x)
    {
    case 1:
        torre(5);  //recursividade da torre mandando mover 5 casas para direita
        break;
    case 2:
        rainha(8);  //recursividade da rainha mandando mover 8 casas para direita
        break;
    case 3:
        bispo(5);   //recursividade do bispo mandando mover 5 casas para cima e direita
        break;
    case 4:
        printf("1. Cima direita\n");  //menu interativo para o usuario escolher a direção que o cavalo ira andar
        printf("2. Cima esquerda\n");
        printf("3. Baixo esquerda\n");
        printf("4. Baixo direita\n");
        printf("Escolha a direção que você ira mover o cavalo: ");
        scanf("%d" , &z);

        int movimento, i;  // criando as variaveis para a logica do movimento do cavalo
        movimento = 1;

        switch (z) //logica para o movimento do cavalo
        {
        case 1:           

            while(movimento--){  

                for(i = 0; i < 2; i++){
                    printf("Cavalo moveu uma casa para cima\n");
                }

                printf("Cavalo moveu uma casa para direita\n");
            }
            break;
        case 2:

            while(movimento--){

                for(i = 0; i < 2; i++){
                   printf("Cavalo moveu uma casa para cima\n");
                }

                printf("Cavalo moveu uma casa para esquerda\n");
            }
        break;
        case 3:

            while(movimento--){

                for(i = 0; i < 2; i++){
                    printf("Cavalo moveu uma casa para baixo\n");
                }

                printf("Cavalo moveu uma casa para esquerda\n");
            }
        break;
        case 4:

            while(movimento--){

                for(i = 0; i < 2; i++){
                    printf("Cavalo moveu uma casa para baixo\n");
                }

                printf("Cavalo moveu uma casa para direita\n");
            }
        break;
        default:
            printf("Opção invalida.\n");
            break;
        }

        break;
    default:
        printf("Opção invalida.\n");
        break;
    }


    printf(" \n");
    
    //fim do jogo

    printf("Obrigado por jogar ;)\n");

    return 0;


}