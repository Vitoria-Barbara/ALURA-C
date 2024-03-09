//
// Created by Vitoria Barbara on 06/03/2024.
//
#include <stdio.h>
//#include <stdlib.h>

int main(){
    while (1) {
        int numero;
        printf("Indique um numero: ");
        scanf("%d", &numero);

        // Consumir o caractere de nova linha deixado no buffer
        getchar();

        char operador;
        printf("Escolha a operacao que deseja: \n (+) Soma  (-) Subtracao  (*) Multiplicacao  (/) Divisão\n");
        scanf("%c", &operador);

        printf("Tabuada de %c do numero: %d.\n", operador, numero);

        int resultado;
        int i;

        for (i = 0; i <= 10; i++) {
            switch (operador) {
                case '+':
                    resultado = numero + i;
                    break;
                case '-':
                    resultado = numero - i;
                    break;
                case '*':
                    resultado = numero * i;
                    break;
                case '/':
                    resultado = numero / i;
                    break;
            }
            printf("%d %c %d = %d\n", numero, operador, i, resultado);
        }
    }
    return 0;
}
