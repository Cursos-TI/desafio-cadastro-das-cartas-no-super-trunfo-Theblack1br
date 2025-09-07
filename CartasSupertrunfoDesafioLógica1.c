#include <stdio.h>
#include <locale.h>

// Acabei fazendo novamente via VSCODE e depois passando apra cá. 
// Nos próximos trabalhos/exercícios, farei totalmente pelo github!
int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char estado1[30], codigocarta1[4], nomecidade1[30], estado2[30], codigocarta2[4], nomecidade2[30];
    unsigned int populacao1, pontostu1, populacao2, pontostu2;
    float areakm1, pib1, areakm2, pib2;
    float densidade1, Pibper1, power1, densidade2, Pibper2, power2;

    printf("\n -------Carta 1------- \n");
    printf("\n"); // Utilizei o conceito aprendido em um curso de python, para gerar um espaçamento e tornar a saída no terminal mais organizada.
                    
    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta1);

    printf("Digite o estado: \n");
    scanf("%s", estado1);
    
    printf("Digite a cidade: \n");
    scanf("%s", nomecidade1);

    printf("Digite o número populacional: \n");
    scanf("%u", &populacao1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%u", &pontostu1);

    printf("Digite a área por Km²: \n");
    scanf("%f", &areakm1);

    printf("Digite o Pib: \n");
    scanf("%f", &pib1);

    printf("\n -------Carta 2------- \n");
    printf("\n"); 
    printf("Digite o código da carta: \n");
    scanf("%s", codigocarta2);
    
    printf("Digite o estado: \n");
    scanf("%s", estado2);
    
    printf("Digite a cidade: \n");
    scanf("%s", nomecidade2);

    printf("Digite o número populacional: \n");
    scanf("%u", &populacao2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%u", &pontostu2);

    printf("Digite a área por Km²: \n");
    scanf("%f", &areakm2);

    printf("Digite o Pib: \n");
    scanf("%f", &pib2);

    densidade1 = populacao1 / areakm1;
    Pibper1 = pib1 / populacao1;
    densidade2 = populacao2 / areakm2;
    Pibper2 = pib2 / populacao2;
    power1 = populacao1 + pontostu1 + areakm1 + Pibper1 + (1 / densidade1);
    power2 = populacao2 + pontostu2 + areakm2 + Pibper2 + (1 / densidade2);
    // carta1
    printf("\n-----carta 1-----\n");
     printf("\n");

    printf("Código da carta: %s\n", codigocarta1);
    printf("Estado: %s\n", estado1);
    printf("Cidade: %s\n", nomecidade1);
    printf("População: %u\n", populacao1);
    printf("Pontos Turísticos: %u\n", pontostu1);
    printf("Área por KM²: %.2f\n", areakm1);
    printf("PIB: %.2f\n", pib1);
    printf("PIB per capita: %.2f\n", Pibper1);
    printf("Densidade Populacional: %.2f \n", densidade1);
    printf("Super Poder: %.2f \n", power1);
    // carta 2
    printf("\n-----carta 2-----\n");
    printf("\n");

    printf("Código da carta: %s \n", codigocarta2);
    printf("Estado: %s\n", estado2);
    printf("Cidade: %s\n", nomecidade2);
    printf("População: %u\n", populacao2);
    printf("Pontos Turísticos: %u \n", pontostu2);
    printf("Área por KM²: %.2f\n", areakm2);
    printf("PIB: %.2f\n", pib2);
    printf("PIB per capita: %.2f\n", Pibper2);
    printf("Densidade Populacional: %.2f \n", densidade2);
    printf("Super Poder: %.2f\n ", power2);
    ////////////// Comparação //////////////////
    printf("\n-----Vamos comparar as cartas-----\n");
    printf("\n");

    if(populacao1 > populacao2){ /* 1 */  /* Aqui eu fiz o comparativo de cada uma gerando uma identificação 
                                             texto referente ao nome da cidade(Ex = A carta 1(Recife) venceu !_*/
        printf("População: A carta 1(%s) venceu \n", nomecidade1);
    }else if(populacao1 < populacao2){
        printf("População: A carta 2(%s) venceu", nomecidade2);
    }else printf("População: Houve um empate !\n"); // Gerei essa linha para que pudesse ter uma informação caso houvesse um empate.

    if(pontostu1 > pontostu2){ /* 2 */
        printf("Pontos Turísticos: A carta 1(%s) venceu \n", nomecidade1);
    }else if(pontostu1 < pontostu2){
        printf("Pontos Turísticos: A carta 2(%s) venceu\n", nomecidade2);
    }else printf("Pontos Turísticos: Houve um empate !\n");

    if(areakm1 > areakm2){  /* 3*/
        printf("Areakm²: A carta 1(%s) venceu \n", nomecidade1);
    }else if(areakm1 < areakm2){
        printf("Areakm²: A carta 2(%s) venceu\n", nomecidade2);
    }else printf("Areakm²: Houve um empate !\n");

    if(pib1 > pib2){ /* 4 */
        printf("PIB: A carta 1(%s) venceu \n", nomecidade1);
    }else if(pib1 < pib2){
        printf("PIB: A carta 2(%s) venceu\n", nomecidade2);
    }else printf("PIB: Houve um empate !\n");

    if(Pibper1 > Pibper2){ /* 5 */
        printf("Pib per capita: A carta 1(%s) venceu \n", nomecidade1);
    }else if(Pibper1 < Pibper2){
        printf("Pib per capita: A carta 2(%s) venceu\n", nomecidade2);
    }else printf("Pib per capita: Houve um empate !\n");

    
    if(densidade1 > densidade2){  /* 6 */
        printf("Densidade Populacional: A carta 1(%s) venceu \n", nomecidade1);
    }else if(densidade1 < densidade2){
        printf("Densidade Populacional: A carta 2(%s) venceu\n", nomecidade2);
    }else printf("Densidade Populacional: Houve um empate !\n");


    if(power1 > power2){ /* 7 */ 
        printf("Super PoderB: A carta 1(%s) venceu \n", nomecidade1);
    }else if(power1 < power2){
        printf("Super Poder: A carta 2(%s) venceu\n", nomecidade2);
    }else printf("PIB: Houve um empate !\n");


return 0;
}