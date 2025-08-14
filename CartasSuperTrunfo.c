#include <stdio.h>
#include <locale.h>

// Fiz pelo próprio VSCode. Demorei um pouco, pois estava tentando fazer um float nas opções de Populacao1/2, Areakm1/2 e PIB1/2
// mas estava errando, pois se utiliza "," e não ".".

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char Estado1[4], Codigo1[4], Nome1[50], Estado2[4], Codigo2[4], Nome2[50];
    int npturisticos1, npturisticos2;
    float Populacao1, AreaKM1, PIB1;
    float Populacao2, AreaKM2, PIB2;
    float dens1, dens2, PIBPC1, PIBPC2;

    // Primeira carta !
    printf("\n---Ola, seja bem vindo ao cadastro de cartas do Super Trunfo !---\n");

    printf("Por favor, digite as informacoes abaixo para a carta 1: \n");

    printf("Digite a sigla(UF) seu estado para ser adicionado a carta: \n");
    scanf("%s", Estado1);

    printf("Digite o código da carta de 01 a 04 com a sigla do estado no inicio(EX: SP = SP01, PB = PB01 etc..): \n ");
    scanf("%s", Codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome1);

    printf("Digite a quantidade de pessoas(Ex: 1,5 para 1.500,000): \n");
    scanf("%f", &Populacao1);
    Populacao1 *= 1000000;

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npturisticos1);

    printf("Digite a área em KM²(Ex: 1,5 para 1.500,000 ou 250 para 250.000): \n");
    scanf("%f", &AreaKM1);
    AreaKM1 *= 1000;

    printf("Digite o PIB(Ex: 1,5 para 1.500,000 ou 250 para 250.000): \n");
    scanf("%f", &PIB1);
    PIB1 *= 1000;

    //Abaixo é a mensagem para a segunda carta !
    printf("\n---Agora digite as informações da carta 2:   \n"); 
       printf("Digite a sigla(UF) seu estado para ser adicionado a carta: \n");
    scanf("%s", Estado2);

    printf("Digite o código da carta de 01 a 04 com a sigla do estado no inicio(EX: SP = SP01, PB = PB01 etc..): \n ");
    scanf("%s", Codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", Nome2);

    printf("Digite a quantidade de pessoas(Ex: 1,5 para 1.500,000): \n");
    scanf("%f", &Populacao2);
    Populacao2 *= 1000000;

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &npturisticos2);

    printf("Digite a área em KM²(Ex: 1,5 para 1.500,000 ou 250 para 250.000): \n");
    scanf("%f", &AreaKM2);
    AreaKM2 *= 1000;

    printf("Digite o PIB(Ex: 1,5 para 1.500,000 ou 250 para 250.000): \n");
    scanf("%f", &PIB2);
    PIB2 *= 1000;

    // Exibição das cartas !!!
    printf("\n---Carta 1---\n"); 
    printf("Estado: %s\n", Estado1); 
    printf("Codigo: %s\n", Codigo1);
    printf("Cidade: %s\n", Nome1);
    printf("Populacao: %.1f de pessoas\n", Populacao1);
    printf("Pontos turisticos: %d\n", npturisticos1);
    printf("Area: %.1f Km²\n", AreaKM1);
    printf("PIB: R$ %.2f\n", PIB1);
    dens1 = (float) PIB1 / AreaKM1;
    printf("A densidade populaciona é: %.2f hab/km²\n", dens1);
    PIBPC1 = (float) PIB1 / Populacao1;
    printf("O PIB per Capita é: R$ %.2f\n", PIBPC1);

    printf("\n---Carta 2---\n"); 
    printf("Estado: %s\n", Estado2); 
    printf("Codigo: %s\n", Codigo2);
    printf("Cidade: %s\n", Nome2);
    printf("Populacao: %.1f de pessoas\n", Populacao2);
    printf("Pontos turisticos: %d\n", npturisticos2);
    printf("Area: %.2f km²\n", AreaKM2);
    printf("PIB: R$ %.2f\n", PIB2);
    dens2 = (float) PIB2 / AreaKM2;
    printf("A densidade populaciona é: %.2f hab/km²\n", dens2);
    PIBPC2 = (float) PIB2 / Populacao2;
    printf("O PIB per Capita é: R$ %.2f\n", PIBPC2);

    return 0;

    
}