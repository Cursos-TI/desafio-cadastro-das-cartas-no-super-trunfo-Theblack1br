#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");

    char Estado1[3], Codigo1[4], Nome1[50], Estado2[3], Codigo2[4], Nome2[50];
    int Populacao1, Populacao2, npturisticos1, npturisticos2; 
    float AreaKM1, PIB1, AreaKM2, PIB2; 

    // Primeira carta !
    printf("Ola, seja bem vindo ao cadastro de cartas do Super Trunfo ! \n");
    printf("Por favor, digite as informacoes abaixo para a carta 1: \n");

    printf("Digite a sigla(UF) seu estado para ser adicionado a carta: \n");
    scanf(" %s", Estado1);

    printf("Digite o cOdigo da carta de 01 a 04 com a sigla do estado no inicio(EX: SP = SP01, PB = PB01 etc..) \n: ");
    scanf("%s", &Codigo1);

    printf("Qual o nome da cidade ? \n");
    scanf("%s", Nome1);

    printf("Qual a quantidade de pessoas nessa cidade(Ex: 1000000 para significar 1 milhao, 2500000 para 2,5 milhoes etc...)? \n");
    scanf("%d", &Populacao1);

    printf("Qual o numero de pontos turisticos ? \n");
    scanf("%d", &npturisticos1);

    printf("Qual a Area em KM dessa cidade(Ex: 250.000, 2500.000 para milhoes) ? \n");
    scanf("%f", &AreaKM1);

    printf("Qual o PIB da cidade(Ex: 250.000, 2500.000 para milhoes)? \n");
    scanf("%f", &PIB1);

    //Abaixo é a mensagem para a segunda carta !
    printf("\nAgora digite as informações da carta 2:\n"); //Tive que corrigir essa linha com ajuda de IA.

    printf("Digite a sigla(UF) seu estado para ser adicionado a carta: \n");
    scanf(" %s", Estado2);

    printf("Digite o cOdigo da carta de 01 a 04 com a sigla do estado no inicio(EX: SP = SP01, PB = PB01 etc..) \n: ");
    scanf("%s", &Codigo2);

    printf("Qual o nome da cidade ? \n");
    scanf("%s", Nome2);

    printf("Qual a quantidade de pessoas nessa cidade(Ex: 1000000 para significar 1 milhao, 2500000 para 2,5 milhoes etc...) ? \n");
    scanf("%d", &Populacao2);

    printf("Qual o numero de pontos turisticos ? \n");
    scanf("%d", &npturisticos2);

    printf("Qual a Area em KM dessa cidade(Ex: 250.000, 2500.000 para milhoes) ? \n");
    scanf("%f", &AreaKM2);

    printf("Qual o PIB da cidade(Ex: 250.000, 2500.000 para milhoes)? \n");
    scanf("%f", &PIB2);


    printf("\n---Carta 1---\n"); // Utilizei para poder centralizar melhor o nome "Carta 1"
    printf("Estado: %s\n", Estado1); 
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Nome1);
    printf("Populacao: %d\n", Populacao1);
    printf("Pontos turisticos: %d\n", npturisticos1);
    printf("Area em KM: %.3f\n", AreaKM1);
    printf("PIB: %.3f\n", PIB1);


    printf("\n---Carta 2---\n"); // Utilizei para poder centralizar melhor o nome "Carta 2"
    printf("Estado: %s\n", Estado2); 
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Nome2);
    printf("Populacao: %d\n", Populacao2);
    printf("Pontos turisticos: %d\n", npturisticos2);
    printf("Area em KM: %.3f\n", AreaKM2);
    printf("PIB: %.3f\n", PIB2);

    return 0;

    
}
