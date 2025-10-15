#ifdef _WIN32
#include <windows.h>
#include <stdio.h>
#endif

struct registro {
    char nome[30];
    char sobrenome[30];
    char telefone[15];
    char email[50];
};

int main() {
    struct registro pessoa1;

    printf("Digite o nome: ");
    scanf("%s", pessoa1.nome);

    printf("Digite o sobrenome: ");
    scanf("%s", pessoa1.sobrenome);

    printf("Digite o telefone: ");
    scanf("%s", pessoa1.telefone);

    printf("Digite o e-mail: ");
    scanf("%s", pessoa1.email);

    printf("\nDados da pessoa:\n");
    printf("Nome: %s\n", pessoa1.nome);
    printf("Sobrenome: %s\n", pessoa1.sobrenome);
    printf("Telefone: %s\n", pessoa1.telefone);
    printf("E-mail: %s\n", pessoa1.email);
    return 0;
}