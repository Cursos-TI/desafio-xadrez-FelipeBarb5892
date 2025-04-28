#include <stdio.h>

int main(){

    //criando as variaveis para usar no for e nos swithcs
    int x , y, z;

    //fazendo menu de boas vindas e pedindo ao usuario que escolha a peça que ele quer mover
    printf("-- Bem vindo ao seu jogo de Xadrez --\n");

    printf("1. Torre.\n");
    printf("2. Rainha.\n");
    printf("3. Bispo.\n");
    printf("Escolha uma peça para mover 5 casas: ");
    scanf("%d" , &x);

    printf(" \n");

    //fazendo o switch para cada peça que o usuario possa escolher
    switch (x)
    {
    case 1:
        //outro menu para o usuario escolher a direção que quer mover a peça e abaixo a logica do for para mostrar o resultado da ação escolhida pelo usuario
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima\n");
        printf("4. Baixo\n");
        printf("Escolha a direção que você ira mover a torre: ");
        scanf("%d" , &z);
        switch (z)
        {
        case 1:
            for(y = 1; y <= 5; y++){
            printf("Torre moveu uma casa para direita\n");
        }
        break;
        case 2:
            for(y = 1; y <= 5; y++){
            printf("Torre moveu uma casa para esquerda\n");
        }
        break;
        case 3:
            for(y = 1; y <= 5; y++){
            printf("Torre moveu uma casa para cima\n");
        }
        break;
        case 4:
            for(y = 1; y <= 5; y++){
            printf("Torre moveu uma casa para baixo\n");
        }
        break;
        default:
        printf("Opção invalida.");
            break;
        }
        
        break;
    case 2:
        //outro menu para o usuario escolher a direção que quer mover a peça e abaixo a logica do for para mostrar o resultado da ação escolhida pelo usuario
        printf("1. Direita\n");
        printf("2. Esquerda\n");
        printf("3. Cima\n");
        printf("4. Baixo\n");
        printf("5. Cima direita\n");
        printf("6. Cima esquerda\n");
        printf("7. Baixo esquerda\n");
        printf("8. Baixo direita\n");
        printf("Escolha a direção que você ira mover a rainha: ");
        scanf("%d" , &z);
        switch (z)
        {
        case 1:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para direita\n");
        }
        break;
        case 2:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para esquerda\n");
        }
        break;
        case 3:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para cima\n");
        }
        break;
        case 4:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para baixo\n");
        }
        break;
        case 5:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para cima direita\n");
        }
        break;
        case 6:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para cima esquerda\n");
        }
        break;
        case 7:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para baixo esquerda\n");
        }
        break;
        case 8:
            for(y = 1; y <= 5; y++){
            printf("Rainha moveu uma casa para baixo direita\n");
        }
        break;
        default:
        printf("Opção invalida.");
            break;
        }
        break;
    case 3:
        //outro menu para o usuario escolher a direção que quer mover a peça e abaixo a logica do for para mostrar o resultado da ação escolhida pelo usuario
        printf("1. Cima direita\n");
        printf("2. Cima esquerda\n");
        printf("3. Baixo esquerda\n");
        printf("4. Baixo direita\n");
        printf("Escolha a direção que você ira mover o bispo: ");
        scanf("%d" , &z);
        switch (z)
        {
        case 1:
            for(y = 1; y <= 5; y++){
            printf("Bispo moveu uma casa para cima direita\n");
        }
        break;
        case 2:
            for(y = 1; y <= 5; y++){
            printf("Bispo moveu uma casa para cima esquerda\n");
        }
        break;
        case 3:
            for(y = 1; y <= 5; y++){
            printf("Bispo moveu uma casa para baixo esquerda\n");
        }
        break;
        case 4:
            for(y = 1; y <= 5; y++){
            printf("Bispo moveu uma casa para baixo direita\n");
        }
        break;
        default:
        printf("Opção invalida.");
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