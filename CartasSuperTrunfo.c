#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    printf("digite o estado:\n");
    char estado;
    scanf("%c", &estado);
    printf("\n");
    printf("digite codigo:\n");
    char codigo[3];
    scanf("%s", codigo);
    printf("\n");
    printf("digite o nome da cidade:\n");
    char cidade[50];
    //scanf("%s", cidade);
    //printf(cidade);
    fgets(cidade, 50, stdin);
    cidade[strcspn(cidade, "\n")] = 0;
    printf("\n");
    printf("digite a populacao:\n");
     int populacao;
     scanf("%i",&populacao );
     printf("%i",populacao);
    printf("\n");
     printf("digite a area:\n ");

    float area;
    scanf("%f",&area);
    printf("%f",area);
    
    printf("\n");
    printf("digite o pib:\n");
    float pib;
    scanf("%f",&pib);
    printf("%f",pib);

    printf("\n");
    printf("digite o numero do ponto turisticos:\n");
    int pontos_turisticos;
    scanf("%i",&pontos_turisticos);
    printf("%i",pontos_turisticos);

    printf("\n\n");
    printf("dados da primeira cidade:\n");
    printf("estado: %c", estado);
    printf("\n");
    printf("codigo: %s", codigo);
    printf("\n");
    printf("cidade: %s", cidade);
    printf("\n");
        printf("populacao: %i", populacao); 
    printf("\n");
    printf("area: %f" , area);
    printf("\n");
    printf("pib: %f", pib);
    printf("\n");
    printf("pontos turisticos: %i", pontos_turisticos);

    printf("digite a populacao: \n");
    int populacao1;
    scanf("%i",&populacao1);
    printf("\n");
    printf("digite a area:\n");
    float area1;
    scanf("%f",&area1);
    printf("\n");
    printf("digite o pib:\n");
    float pib1;
    scanf("%f",&pib1);
    printf("\n");
    printf("digite o numero o ponto turistico:\n");
    int ponto_turistico1;
    scanf("%i", &ponto_turistico1);
    
    printf("\n\n");
    printf("dados da segunda cidade:\n");
    printf("populacao: %i", populacao1); 
    printf("\n");
    printf("area: %f" , area1);
    printf("\n");
    printf("pib: %f", pib1);
    printf("\n");
    printf("pontos turisticos: %i", ponto_turistico1);



    // Sugestão: Defina vareiáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
