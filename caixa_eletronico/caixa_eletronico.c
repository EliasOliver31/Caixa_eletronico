#include <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float valor;
    float emprestimo = 0;

    do {
        printf("\n===== CAIXA ELETRONICO =====\n");
        printf("1 - Verificar saldo\n");
        printf("2 - Depositar\n");
        printf("3 - Sacar\n");
        printf("4 - Pedir emprestimo\n");
        printf("5 - Pagar emprestimo\n");
        printf("6 - Consultar emprestimo\n");
        printf("0 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 0) {
            printf("Saindo... Ate logo!\n");
        }
   } while (opcao != 0);

    return 0;
}


