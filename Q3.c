#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", alunos[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    int indice;
    printf("Escolha o índice do aluno para atualizar a nota (0 a 4): ");
    scanf("%d", &indice);

    if (indice < 0 || indice > 4) {
        printf("Índice inválido!\n");
        return 0;
    }

    printf("Digite a nova nota: ");
    scanf("%f", &alunos[indice].nota);

    printf("\n--- Dados Atualizados ---\n");
    printf("Nome: %s\n", alunos[indice].nome);
    printf("Idade: %d\n", alunos[indice].idade);
    printf("Nota: %.2f\n", alunos[indice].nota);

    return 0;
}
