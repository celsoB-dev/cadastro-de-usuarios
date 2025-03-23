#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome_f[50];
    char sobrenome_f[50];
} Nome;

typedef struct {
    char rua[50];
    int numero;
    char complemento[25];
    int cep;
    char bairro[50];
    char cidade[50];
    char estado[50];
} Endereco;

struct registro_funcionario {
    Nome nome;
    char funcao[50];
    float salario;
    int dependentes;
    Endereco endereco;
};

struct registro_funcionario cad_funcionario[2];

int main() {
    int i;

    printf("\n-------- Cadastro de funcionarios --------\n\n\n");

    for (i = 0; i < 2; i++) {
        printf("Funcionario %d:\n", i++);

        printf("Digite o nome do funcionario: ");
        fgets(cad_funcionario[i].nome.nome_f, sizeof(cad_funcionario[i].nome.nome_f), stdin);
        cad_funcionario[i].nome.nome_f[strcspn(cad_funcionario[i].nome.nome_f, "\n")] = '\0'; // Remover o \n

        printf("Digite o sobrenome do funcionario: ");
        fgets(cad_funcionario[i].nome.sobrenome_f, sizeof(cad_funcionario[i].nome.sobrenome_f), stdin);
        cad_funcionario[i].nome.sobrenome_f[strcspn(cad_funcionario[i].nome.sobrenome_f, "\n")] = '\0'; // Remover o \n

        printf("Digite a funcao do funcionario: ");
        fgets(cad_funcionario[i].funcao, sizeof(cad_funcionario[i].funcao), stdin);
        cad_funcionario[i].funcao[strcspn(cad_funcionario[i].funcao, "\n")] = '\0'; // Remover o \n

        printf("Digite o salario do funcionario: ");
        scanf("%f", &cad_funcionario[i].salario);
        getchar(); // Limpar o buffer de entrada após o scanf

        printf("Digite o numero de dependentes do funcionario: ");
        scanf("%d", &cad_funcionario[i].dependentes);
        getchar(); // Limpar o buffer de entrada após o scanf

        printf("Digite o endereco do funcionario:\n");
        printf("Digite o nome da rua: ");
        fgets(cad_funcionario[i].endereco.rua, sizeof(cad_funcionario[i].endereco.rua), stdin);
        cad_funcionario[i].endereco.rua[strcspn(cad_funcionario[i].endereco.rua, "\n")] = '\0'; // Remover o \n

        printf("Digite o numero da rua: ");
        scanf("%d", &cad_funcionario[i].endereco.numero);
        getchar(); // Limpar o buffer de entrada após o scanf

        printf("Digite o complemento: ");
        fgets(cad_funcionario[i].endereco.complemento, sizeof(cad_funcionario[i].endereco.complemento), stdin);
        cad_funcionario[i].endereco.complemento[strcspn(cad_funcionario[i].endereco.complemento, "\n")] = '\0'; // Remover o \n

        printf("Digite o CEP: ");
        scanf("%d", &cad_funcionario[i].endereco.cep);
        getchar(); // Limpar o buffer de entrada após o scanf

        printf("Digite o bairro: ");
        fgets(cad_funcionario[i].endereco.bairro, sizeof(cad_funcionario[i].endereco.bairro), stdin);
        cad_funcionario[i].endereco.bairro[strcspn(cad_funcionario[i].endereco.bairro, "\n")] = '\0'; // Remover o \n

        printf("Digite a cidade: ");
        fgets(cad_funcionario[i].endereco.cidade, sizeof(cad_funcionario[i].endereco.cidade), stdin);
        cad_funcionario[i].endereco.cidade[strcspn(cad_funcionario[i].endereco.cidade, "\n")] = '\0'; // Remover o \n

        printf("Digite o estado: ");
        fgets(cad_funcionario[i].endereco.estado, sizeof(cad_funcionario[i].endereco.estado), stdin);
        cad_funcionario[i].endereco.estado[strcspn(cad_funcionario[i].endereco.estado, "\n")] = '\0'; // Remover o \n
    }

    // Exibir os dados cadastrados
    printf("\n-------- Funcionarios Cadastrados --------\n");
    for (i = 0; i < 2; i++) {
        printf("\nDados do funcionario %d:\n", i + 1);
        printf("Nome do funcionario: %s %s\n", cad_funcionario[i].nome.nome_f, cad_funcionario[i].nome.sobrenome_f);
        printf("Funcao do funcionario: %s\n", cad_funcionario[i].funcao);
        printf("Salario do funcionario: R$%.2f\n", cad_funcionario[i].salario);
        printf("Numero de dependentes do funcionario: %d\n", cad_funcionario[i].dependentes);
        printf("Endereco do funcionario:\n");
        printf("Rua: %s, %d\n", cad_funcionario[i].endereco.rua, cad_funcionario[i].endereco.numero);
        printf("Complemento: %s\n", cad_funcionario[i].endereco.complemento);
        printf("CEP: %d\n", cad_funcionario[i].endereco.cep);
        printf("Bairro: %s\n", cad_funcionario[i].endereco.bairro);
        printf("Cidade: %s\n", cad_funcionario[i].endereco.cidade);
        printf("Estado: %s\n", cad_funcionario[i].endereco.estado);
    }

    return 0;
}
