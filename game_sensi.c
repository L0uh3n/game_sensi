// ===============================================================================================
// >> GameSensi: CS:GO | Valorant
// >> Programa que converte a sensibilidade do CS:GO para o Valorant e do Valorant para o CS:GO
// >> Criado por: L0uh3n (Luiz Henrique)
// ===============================================================================================

// bibliotecas utilizadas
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <locale.h>

// função principal
int main() {
    setlocale(LC_ALL, "Portuguese_Brazil"); // muda para o idioma desejado de determinada região
    system("cls");

    int select = 0, cont = 0, choice = 0; 
    float sensi = 0;

    printf("GameSensi: CS:GO | Valorant\n\n");    
    printf("> Digite 1 para converter a sensibilidade do CS:GO para o Valorant.\n> Digite 2 para converter a sensibilidade do Valorant para o CS:GO.\n> Digite 0 para fechar o programa.\n\n>> ");
    scanf("%d", &select);
    
    if (select == 1) {
        system("cls");
        printf("> Digite sua sensibilidade no CS:GO e pressione ENTER: ");
        scanf("%f", &sensi);

        while (sensi <= 0) {
            system("cls");
            printf("<!> Você digitou um valor menor ou igual a 0, tente novamente.\n\n> Digite sua sensibilidade no CS:GO e pressione ENTER: ");
            scanf("%f", &sensi);
        }

        printf("\n"); // quebra de linha antes do loading

        // loading
        while (cont < 4) {
            sleep(1);
            printf(". ");
            cont++;
        }  
        system("cls");

        sensi = sensi / 3.18;
        printf(">> Sua sensibilidade convertida: %.3f\n\n", sensi);
        system("pause");

        do {
            system("cls");
            printf("Deseja converter outro valor?\n\n> Digite 1 para converter outro valor.\n> Digite 0 para fechar o programa.\n\n>> ");
            scanf("%d", &choice);

            if (choice == 1) {
                main();
            } else if (choice == 0) {
                exit(0);
            }

        } while (choice != 1 || choice != 0);

    } else if (select == 2) {
        system("cls");
        printf("> Digite sua sensibilidade no Valorant e pressione ENTER: ");
        scanf("%f", &sensi);

        while (sensi <= 0) {
            system("cls");
            printf("<!> Você digitou um valor menor ou igual a 0, tente novamente.\n\n> Digite sua sensibilidade no Valorant e pressione ENTER: ");
            scanf("%f", &sensi);
        }

        printf("\n"); // quebra de linha antes do loading

        // loading
        while (cont < 4) {
            sleep(1);
            printf(". ");
            cont++;
        }  
        system("cls");

        sensi = sensi * 3.18;
        printf(">> Sua sensibilidade convertida: %.3f\n\n", sensi);
        system("pause");

        do {
            system("cls");
            printf("Deseja converter outro valor?\n\n> Digite 1 para converter outro valor.\n> Digite 0 para fechar o programa.\n\n>> ");
            scanf("%d", &choice);

            if (choice == 1) {
                main();
            } else if (choice == 0) {
                exit(0);
            }

        } while (choice != 1 || choice != 0);

    } else if (select == 0) {
        exit(0);

    } else {
        printf("\nEssa opção não existe.\n\n");
        system("pause");
        main();
    }
    
    return 0;
}