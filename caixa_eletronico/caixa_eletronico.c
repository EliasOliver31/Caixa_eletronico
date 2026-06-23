#inclue <stdio.h>

int main() {
    int opcao;
    float saldo = 1000.00;
    float valor;
    float emprestimo = 0;

    do {
        printf("\n= CAIXA ELETRONICO =\n");
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
            printf("Saindo\n");
        }
   } while (opcao != 0);

    return 0;
}

if (opcao == 1) {
            printf("Seu saldo e: R$ %.2f\n", saldo);
        }=== 
        if (opcao == 2) {
            printf("Quanto quer depositar? R$ ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Valor invalido!\n");
            } else {
                saldo = saldo + valor;
                printf("Deposito realizado! Novo saldo: R$ %.2f\n", saldo);
            }
        }

        if (opcao == 3) {
            printf("Quanto quer sacar? R$ ");
            scanf("%f", &valor);
            if (valor <= 0) {
                printf("Valor invalido!\n");
            } else if (valor > saldo) {
                printf("Saldo insuficiente! Seu saldo e: R$ %.2f\n", saldo);
            } else {
                saldo = saldo - valor;
                printf("Saque realizado! Saldo restante: R$ %.2f\n", saldo);
            }
        }

        if (opcao == 4) {
            if (emprestimo > 0) {
                printf("Voce ja tem um emprestimo de R$ %.2f. Pague antes de pedir outro.\n", emprestimo);
            } else {
                printf("Qual valor do emprestimo? R$ ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor invalido!\n");
                } else {
                    emprestimo = valor;
                    saldo = saldo + valor;
                    printf("Emprestimo aprovado! Novo saldo: R$ %.2f\n", saldo);
                }
            }
        }
        if (opcao == 5) {
            if (emprestimo == 0) {
                printf("Voce nao tem emprestimo ativo.\n");
            } else {
                printf("Sua divida e: R$ %.2f\n", emprestimo);
                printf("Quanto quer pagar? R$ ");
                scanf("%f", &valor);
                if (valor <= 0) {
                    printf("Valor invalido!\n");
                } else if (valor > saldo) {
                    printf("Saldo insuficiente!\n");
                } else {
                    if (valor > emprestimo) valor = emprestimo;
                    saldo -= valor;
                    emprestimo -= valor;
                    printf("Pagamento realizado! Divida restante: R$ %.2f\n", emprestimo);
                }
            }
        }
        if (opcao == 6) {
            printf("Situacao do emprestimo: R$ %.2f\n", emprestimo);
        }



