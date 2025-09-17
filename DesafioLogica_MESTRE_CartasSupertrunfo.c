// No primeiro exercício, foi falado para utilizar Cidades e Estados. Mas no decorrer da disciplica foi pedido "Países"
// Então decidi fazer somente com o País no lugar de cidade e estados, para que fique mais "correto".

// Obs: Senti a falta do uso de estruturas de repetição. Sei que ainda não tive aulas referente a isso,
/////// mas no curso de lógica que comprei na Udemy, ensinou sobre. Não utilizei, pois o exercício pedia
/////// somente o que foi dado em aula até então.

#include <stdio.h>
#include <locale.h>
#include <stdlib.h> 
#include <time.h>

int main(){
    setlocale(LC_ALL, "Portuguese_Brazil");
    
    char iniciarSair, menuinicial;
    int pontostu1, pontostu2 ;
    float pop1, area1, pib1, dens1, ppc1, poder1;
    float pop2, area2, pib2, dens2, ppc2, poder2;

    /*#############################  CARTA 1 e 2 #############################*/
    pop1 = 200;                                             pop2 = 350;   // Digitei os status das cartas de forma pré-definida.
    pontostu1 = 120;                                        pontostu2 = 90;  // Caso necessite, posso fazer um modelo completo com cadastramento das cartas igual nos exercícios anteriores!
    area1 = 500;                                            area2 = 700;
    pib1 = 1000;                                            pib2 = 1500;
    dens1 = pop1 / area1;                                   dens2 = pop2 / area2;
    ppc1 = pib1 / pop1;                                     ppc2 = pib2 / pop2;
    poder1 = pop1 + pontostu1 + area1 + ppc1 + (1/dens1);   poder2 = pop2 + pontostu2 + area2 + ppc2 + (1/dens2);

   /*############################# Primeiras opções de Menu! #############################*/
    printf("########## Bem vindo(a) ao SUPER TRUNFO! ##########\n");
    printf("\nPressione 1 para ir ao menu inical ou 2 Para sair do jogo: ");
    scanf("%c", &iniciarSair);

        switch(iniciarSair) // Tive a ideia de usar o Switch para gerar um Menu inicial, onde o usuário decide se quer iniciar ou não o jogo
        {                   // Eu ia utilizar "Enter" e "Esc" do teclado para isso, mas ainda não aprendi como fazer.
            case '1':
                printf("\nIniciando o jogo\n");
            break;
            case '2':
                printf("\nSaindo do jogo\n");
            exit(0);
            break;
            default:
                printf("\nOpção inválida\n");
        }

    printf("\n########## Menu Inicial(Super Trunfo) ##########\n");
    printf("\n1. Iniciar jogo !\n");
    printf("2. Regras do jogo!\n");
    printf("3. Sair do jogo!\n");
    printf("Digite uma opção: ");
    scanf(" %c", &menuinicial);
    printf("\n");

        switch(menuinicial){ 
            case '1':  // Aqui é para gerar as informações sobre os atributos das cartas
                printf("\nInformações de cada carta\n");
                printf("\n########## Carta 1 ########## \n");
                printf("\n1. País: Brasil\n"
                       "2. População: %.0f\n" 
                       "3. Pontos Turísticos: %d\n"
                       "4. Área Km²: %.0f\n" 
                       "5. Pib: %.0f\n" 
                       "6. Densidade Demográfica: %.2f\n"
                       "7. Pib per capita: %.2f\n"
                       "8. Super Poder: %.2f\n", pop1, pontostu1, area1, pib1, dens1, ppc1, poder1);
               
                printf("\n########## Carta 2 ##########\n");
                
                printf("\n1. País: China\n"
                       "2. População: %.0f\n" 
                       "3. Pontos Turísticos: %d\n"
                       "4. Área Km²: %.0f\n" 
                       "5. Pib: %.0f\n" 
                       "6. Densidade Demográfica: %.2f\n"
                       "7. Pib per capita: %.2f\n"
                       "8. Super Poder: %.2f\n", pop2, pontostu2, area2, pib2, dens2, ppc2, poder2);   
            break;

            case '2':    
                printf("1 = Os atributos não podem se repetir\n"
                   "2 = A batalha será sempre entre os atributos iguais(ex: Pib VS Pib)\n");
            break;
            case '3':
                printf("Sair do jogo!\n");
             exit(0);
    }
    
    int  escolha1, escolha2; // Fiz os testes e passei para a comparação !!!
    
    
    printf("\n########## Atributos ##########\n"); // Aqui são as escolhas de atributos para o combate
    printf("\n1. População\n"
           "2. Pontos Turísticos\n"
           "3. Área km²\n"
           "4. PiB\n"
           "5. Densidade Demográfica\n"
           "6. Pib per capita\n"
           "7. Super poder\n");
    printf("\nSelecione o atributo para o combate de comparações: ");
    scanf(" %d", &escolha1);

    printf("\n########## Atributos ##########\n"); // Após ser escolhido o atributo, esse mesmo é excluido na próxima seleção de atributos,
        if(escolha1 != 1) printf("1. População\n"); // dessa forma a opção não é mostrada, mas o usuário ainda pode digita-la.
        if(escolha1 != 2) printf("2. Pontos Turísticos\n");
        if(escolha1 != 3) printf("3. Área km²\n");
        if(escolha1 != 4) printf("4. Pib\n");
        if(escolha1 != 5) printf("5. Densidade Demográfica\n");
        if(escolha1 != 6) printf("6. Pib per capita\n");
        if(escolha1 != 7) printf("7. Super poder\n");
    printf("\nAgora escolha outro atributo(diferente do anterior: ");
   
    printf("\nDigite: ");
    scanf(" %d", &escolha2);

    printf("\n########## Resultado ##########\n");

    // Eu tinha esquecido de calcular os atributos. Então tive que refazer tudo.
    float valorBrasil1 = 0, valorBrasil2 = 0; // Essa variável serve para calcular a soma dos dois atributos escolhidos.
    float valorChina1 = 0, valorChina2 = 0;   

    switch(escolha1){
        case 1: printf("\nPopulação: Brasil(%.2f) VS China(%.2f)\n", pop1, pop2); // Aqui utilizei os operadores ternários !!!
                printf("%s\n", pop1 > pop2 ? "O Brasil venceu a batalha!\n" : pop1 < pop2 ? "A China venceu a batalha!\n" : "Empate!");
                valorBrasil1 = pop1; valorChina1 = pop2; break; // Fiz os modelos e repliquei pelo Copilot para não precisar digitar várias vezes o mesmo código.

        case 2: printf("\nPontos turísticos: Brasil(%d) vs China(%d)\n", pontostu1, pontostu2);
                printf("%s\n", pontostu1 > pontostu2 ? "O brasil venceu a batalha!" : pontostu1 < pontostu2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil1 = pontostu1; valorChina1 = pontostu2; break;

        case 3: printf("\nÁrea: Brasil(%2.f) vs China(%2.f)\n", area1, area2);
                printf("%s\n", area1 > area2 ? "O brasil venceu a batalha!" : area1 < area2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil1 = area1; valorChina1 = area2; break;

        case 4: printf("\nPIB: Brasil(%2.f) vs China(%2.f)\n", pib1, pib2);
                printf("%s\n", pib1 > pib2 ? "O brasil venceu a batalha!" : pib1 < pib2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil1 = pib1; valorChina1 = pib2; break;

        case 5: printf("\nDensidade: Brasil(%2.f) vs China(%2.f)\n", dens1, dens2);
                printf("%s\n", dens1 < dens2 ? "O brasil venceu a batalha!" : dens1 > dens2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil1 = dens1; valorChina1 = dens2; break;

        case 6: printf("\nPPC: Brasil(%2.f) vs China(%2.f)\n", ppc1, ppc2);
                printf("%s\n", ppc1 > ppc2 ? "O brasil venceu a batalha!" : ppc1 < ppc2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil1 = ppc1; valorChina1 = ppc2; break;

        case 7: printf("\nPoder: Brasil(%2.f) vs China(%2.f)\n", poder1, poder2);
                printf("%s\n", poder1 > poder2 ? "O brasil venceu a batalha!" : poder1 < poder2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil1 = poder1; valorChina1 = poder2; break;

        default: printf("\nOpção inválida!\n");
    }
    switch(escolha2){ 
        case 1: printf("\nPopulação: Brasil(%2.f) vs China(%2.f)\n", pop1, pop2);
                printf("%s\n", pop1 > pop2 ? "O brasil venceu a batalha!" : pop1 < pop2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = pop1; valorChina2 = pop2; break;

        case 2: printf("\nPontos turísticos: Brasil(%d) vs China(%d)\n", pontostu1, pontostu2);
                printf("%s\n", pontostu1 > pontostu2 ? "O brasil venceu a batalha!" : pontostu1 < pontostu2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = pontostu1; valorChina2 = pontostu2; break;

        case 3: printf("\nÁrea: Brasil(%2.f) vs China(%2.f)\n", area1, area2);
                printf("%s\n", area1 > area2 ? "O brasil venceu a batalha!" : area1 < area2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = area1; valorChina2 = area2; break;

        case 4: printf("\nPIB: Brasil(%2.f) vs China(%2.f)\n", pib1, pib2);
                printf("%s\n", pib1 > pib2 ? "O brasil venceu a batalha!" : pib1 < pib2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = pib1; valorChina2 = pib2; break;

        case 5: printf("\nDensidade: Brasil(%2.f) vs China(%2.f)\n", dens1, dens2);
                printf("%s\n", dens1 < dens2 ? "O brasil venceu a batalha!" : dens1 > dens2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = dens1; valorChina2 = dens2; break;

        case 6: printf("\nPPC: Brasil(%2.f) vs China(%2.f)\n", ppc1, ppc2);
                printf("%s\n", ppc1 > ppc2 ? "O brasil venceu a batalha!" : ppc1 < ppc2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = ppc1; valorChina2 = ppc2; break;

        case 7: printf("\nPoder: Brasil(%2.f) vs China(%2.f)\n", poder1, poder2);
                printf("%s\n", poder1 > poder2 ? "O brasil venceu a batalha!" : poder1 < poder2 ? "A china venceu a batalha!" : "Empate!");
                valorBrasil2 = poder1; valorChina2 = poder2; break;

        default:
            printf("\nOpção inválida!\n");
    }
    
    // Aqui é feita a soma entre os atributos para decidir o resultado final !!

    float somaBrasil = valorBrasil1 + valorBrasil2;
    float somaChina = valorChina1 + valorChina2; 

    printf("\n########## Resultado Final do Somatório dos atributos ##########\n");
    printf("\nSoma dos atributos escolhidos: \n");
    printf("Brasil: %.2f\n", somaBrasil);
    printf("China: %.2f\n", somaChina);
    printf("%s\n", somaBrasil > somaChina ? "O Brasil venceu!" :
                    somaBrasil < somaChina ? "A china venceu no total!" :
                    "Empate!");
return 0;
}