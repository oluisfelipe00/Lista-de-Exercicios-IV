#include <stdio.h>
#include <string.h>

struct Aluno {
    char nome[50];
    int idade;
    float nota;
};

void exibirAluno(struct Aluno a) {
    printf("Nome: %s\n", a.nome);
    printf("Idade: %d\n", a.idade);
    printf("Nota: %.2f\n", a.nota);
}

struct Aluno criarAluno() {
    struct Aluno novo;
    printf("Digite o nome: ");
    scanf(" %49[^\n]", novo.nome);

    printf("Digite a idade: ");
    scanf("%d", &novo.idade);

    printf("Digite a nota: ");
    scanf("%f", &novo.nota);

    return novo;
}

void removerAluno(struct Aluno *a) {
    strcpy(a->nome, "-----");
    a->idade = 0;
    a->nota = 0.0;
}

int main() {
    struct Aluno alunos[4];
    int qtd = 0;
    int opcao, indice;

    while (1) {
        printf("\n===== MENU =====\n");
        printf("1 - Criar aluno\n");
        printf("2 - Exibir aluno\n");
        printf("3 - Remover aluno\n");
        printf("4 - Listar todos\n");
        printf("5 - Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                if (qtd < 4) {
                    alunos[qtd] = criarAluno();
                    qtd++;
                } else {
                    printf("Limite máximo de alunos atingido!\n");
                }
                break;

            case 2:
                printf("Informe o índice do aluno (0 a 3): ");
                scanf("%d", &indice);
                if (indice >= 0 && indice < qtd) {
                    exibirAluno(alunos[indice]);
                } else {
                    printf("Índice inválido!\n");
                }
                break;

            case 3:
                printf("Informe o índice do aluno para remover (0 a 3): ");
                scanf("%d", &indice);
                if (indice >= 0 && indice < qtd) {
                    removerAluno(&alunos[indice]);
                    printf("Aluno removido!\n");
                } else {
                    printf("Índice inválido!\n");
                }
                break;

            case 4:
                printf("\n--- LISTA DE ALUNOS ---\n");
                for (int i = 0; i < qtd; i++) {
                    printf("Aluno %d:\n", i);
                    exibirAluno(alunos[i]);
                    printf("\n");
                }
                break;

            case 5:
                return 0;

            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}
