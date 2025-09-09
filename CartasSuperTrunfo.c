#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
        //Declarando as variaveis
    int populacao1, populacao2;
    char estado1[2], estado2[2];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];
    float area1, area2;
    float pib1, pib2;
    int turisticos1, turisticos2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
        //Entrada de dados da primeira cidade
    printf("Cadastro da Cidade 1:\n");

    printf("Digite o Estado da Cidade (1 letra): ");
    scanf("%s", estado1); // Lendo string com 1 letra

    printf("Digite o codigo da Cidade: ");
    scanf("%s", codigo1); // Lendo string com 3 caracteres

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome1); // Lendo string com espacos

    printf("Digite a populacao: ");
    scanf("%d", &populacao1); // Lendo inteiro

    printf("Digite a area (em km²): ");
    scanf("%f", &area1); // Lendo float

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos1);

    //Entrada de dados da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    
    printf("Digite o Estado da Cidade (1 letra): ");
    scanf("%s", estado2);

    printf("Digite o codigo da Cidade: ");
    scanf("%s", codigo2);   

    printf("Digite o nome da Cidade: ");
    scanf(" %[^\n]", nome2);
    

    printf("Digite a populacao: "); 
    scanf("%d", &populacao2);

    printf("Digite a area: ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &turisticos2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

        //Exibindo os dados das cidades
    printf("\n==== Carta 1 ====\n");
    printf("Estado: %s\n", estado1); 
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %d habitantes\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Pontos turísticos: %d\n", turisticos1);
    
    printf("\n==== Carta 2 ====\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %d habitantes\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Pontos turisticos: %d\n", turisticos2);
    
    return 0;
}
