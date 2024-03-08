//tudo que começa com # -> chama-se diretiva.

//incluindo bibliotecas
#include <stdio.h> //printf e etc
#include <stdlib.h> //operações matemáticas.
#include <time.h> //numero ramdomico

#define TOTAL_DE_TENTATIVAS 5 //CONSTANTE

int main(){

    //imprime o cabeçaljo do jogo
    printf("*********************************\n");
    printf("Bem vindo ao jogo de Adivinhação!\n");
    printf("*********************************\n\n");

    // declarando variaveis que serao usadas mais a frente
    int chute;
    int acertou;
    int nivel;
    int totaldetentativas;
    /*int numeroSecreto = 42;
    printf("O número secreto é: %d. Não conta pra ninguém\n", numeroSecreto);
    */

    // definindo a quantidade de pontos inicial
    double pontos = 1000;

    // gerando um numero secreto aleatorio
    srand(time(0));
    int numeroSecreto = rand() % 100; // divide por 100 paraobter somente de 0 a 99

    //escolhendo o nivel de dificuldade
    printf("Qual o nível de dificuldade?\n");
    printf("(1) Fácil  (2) Médio  (3) Difícil\n\n");
    printf("Escolha: ");

    scanf("%d", &nivel);

    switch(nivel){
        case 1: //facil
            totaldetentativas = 20;
            break;
        case 2: //medio
            totaldetentativas = 15;
            break;
        case 3: //hard
            totaldetentativas = 6;
            break;
    }

    //loop principal do jogo
    for(int i = 1; i <= totaldetentativas; i++) { //quantidade de rodadas

        printf("-> Tentativa %d de %d\n", i, totaldetentativas);

        //definir o chute
        printf("Chute um número: ");
        scanf("%d", &chute);

        // tratando chute de numero negativo
        if(chute < 0) {
            printf("Você não pode chutar números negativos\n");
            i--;
            continue; //for passa para icrementação sem ler o restante do codigo abaixo
        }

        // verifica se acertou, foi maior ou menor
        acertou = chute == numeroSecreto;
        if(acertou) {
            break;
        } else if(chute > numeroSecreto) {
            printf("\nSeu chute foi maior do que o número secreto!\n\n");
        } else {
            printf("\nSeu chute foi menor do que o número secreto!\n\n");
        }

        // calcula a quantidade de pontos
        //abs para ter um valor positivo (valor absoluto)
        double pontosperdidos = abs(chute - numeroSecreto) / (double)2.0;
        pontos = pontos - pontosperdidos;
    }

    // imprimindo mensagem de vitoria ou derrota
    printf("\n");
    if(acertou) {
        printf("             OOOOOOOOOOO               \n");
        printf("         OOOOOOOOOOOOOOOOOOO           \n");
        printf("      OOOOOO  OOOOOOOOO  OOOOOO        \n");
        printf("    OOOOOO      OOOOO      OOOOOO      \n");
        printf("  OOOOOOOO  #   OOOOO  #   OOOOOOOO    \n");
        printf(" OOOOOOOOOO    OOOOOOO    OOOOOOOOOO   \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  \n");
        printf("OOOO  OOOOOOOOOOOOOOOOOOOOOOOOO  OOOO  \n");
        printf(" OOOO  OOOOOOOOOOOOOOOOOOOOOOO  OOOO   \n");
        printf("  OOOO   OOOOOOOOOOOOOOOOOOOO  OOOO    \n");
        printf("    OOOOO   OOOOOOOOOOOOOOO   OOOO     \n");
        printf("      OOOOOO   OOOOOOOOO   OOOOOO      \n");
        printf("         OOOOOO         OOOOOO         \n");
        printf("             OOOOOOOOOOOO              \n");
        printf("\nParabéns! Você acertou!\n");
        printf("Você fez %.2f pontos. Até a próxima!\n\n", pontos);
    } else {

        printf("       \\|/ ____ \\|/    \n");
        printf("        @~/ ,. \\~@      \n");
        printf("       /_( \\__/ )_\\    \n");
        printf("          \\__U_/        \n");

        printf("\nVocê perdeu! Tente novamente!\n\n");
    }
}