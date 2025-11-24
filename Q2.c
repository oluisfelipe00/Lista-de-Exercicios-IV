#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

int main() {
    struct Aluno alunos[5];

    for (int i = 0; i < 5; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf(" %49[^\n]", alunos[i].nome);

        printf("Digite a idade: ");
        scanf("%d", &alunos[i].idade);

        printf("Digite a nota: ");
        scanf("%f", &alunos[i].nota);

        printf("\n");
    }

    printf("----- LISTA DE ALUNOS -----\n");
    for (int i = 0; i < 5; i++) {
        printf("Aluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Idade: %d\n", alunos[i].idade);
        printf("Nota: %.2f\n\n", alunos[i].nota);
    }

    return 0;
}
