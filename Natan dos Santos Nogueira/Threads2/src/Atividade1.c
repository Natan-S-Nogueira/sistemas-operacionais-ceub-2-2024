#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main () {
    setlocale(LC_ALL, "Portuguese");

    int maior_valor;
    int menor_valor;
    int saida;
    int valor1, valor2;

    while (true) {
        printf("Digite [0] para sair");
        scanf("%d", &saida);

        if (saida == 0)
            break;

        else if (saida != 0) {
            printf("Digite um valor:\n");
            scanf("%d", &valor1);
            printf("Digite outro valor:\n");
            scanf("%d", &valor2);
            
            if (valor1 >= valor2) {
                maior_valor = valor1;
                menor_valor = valor2;
                printf("O maior valor é: %d", maior_valor);
                printf("\nO menor valor é: %d", menor_valor);
            }
            else if (valor1 == valor2) {
                printf("Os dois valores são iguais");
            }
            else {
                maior_valor = valor2;
                menor_valor = valor1;
                printf("O maior valor é: %d", maior_valor);
                printf("\nO menor valor é: %d", menor_valor);
            }
    }
    }
}