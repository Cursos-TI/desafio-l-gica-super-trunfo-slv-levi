#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){

    //opção que será usada no menu:
    int opcao;

    //Carta 01 - ja cadastrada:
    // variáveis:
    int carta1;
    char estado1[4] = "CE";
    char codigo1[6] = "CE01";
    char cidade1[20] = "Fortaleza";
    unsigned int populacao1 = 248678;
    double area1 = 312.417;
    double pib1 = 73.8;
    int pontosTuristicos1 = 50;
    float pibpercapto1;
    float densidadeDemografica1;
    float superPoder1;

    pib1 = pib1*1e9;
    pibpercapto1 = (float) pib1/populacao1;
    densidadeDemografica1 = (float) populacao1/area1;
    superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibpercapto1 + (1 / densidadeDemografica1);

    //Carta 02 - ja cadastrada:
    //Variaveis:
    int carta2;
    char estado2[4] = "CE";
    char codigo2[6] = "CE02";
    char cidade2[20]  = "Sobral";
    unsigned int populacao2 = 203497;
    double area2 = 2129.068;
    double pib2 = 6.8;
    int pontosTuristicos2 = 20;
    float pibpercapto2;
    float densidadeDemografica2;
    float superPoder2;

    pib2 = pib2*1e9;
    pibpercapto2 = (float) pib2/populacao2;
    densidadeDemografica2 = (float) populacao2/area2;
    superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibpercapto2 + (1 / densidadeDemografica2);

    //Cartas Cadastrados:
    //Carta 01:
    printf("\n === %s ===\n", codigo1); //achei que daria charme a carta se o codigo estivesse em destaque
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.3lf Km²\n",area1);
    printf("PIB: %.1lf bilhões de reais(R$)\n", pib1 / 1e9);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos1);
    printf("O PIB per capita de %s é: %.2f mil R$ por habitante\n", cidade1, pibpercapto1 /1000);
    printf("A densidade demográfica de %s é: %.2f hab/km²\n", cidade1, densidadeDemografica1);
    printf("O super poder é: %.2f", superPoder1);

    //Carta 02:
    printf("\n\n === %s ===\n", codigo2); //achei que daria charme a carta se o codigo estivesse em destaque
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.3lf Km²\n", area2);
    printf("PIB: %.1lf bilhões de reais(R$)\n", pib2 / 1e9);
    printf("Numero de pontos Turisticos: %d\n", pontosTuristicos2);
    printf("O PIB per capita de %s é: %.2f mil R$ por habitante\n", cidade2, pibpercapto2 / 1000);
    printf("A densidade demográfica de %s é: %.2f hab/km²\n", cidade2, densidadeDemografica2);
    printf("O super poder é: %.2f\n", superPoder2);

    //impressão do menu de opções:
    printf("Você pode escolher um dos seguintes atributos para comaparar as cartas:\n");
    printf("1 - População.\n");
    printf("2 - Area.\n");
    printf("3 - PIB.\n");
    printf("4 - PIB percapta.\n");
    printf("5 - Densidade demográfica(lembrando que somente nesse caso a menor vence).\n");
    printf("6 - Super Poder.\n");
    printf("Qual atributo você deseja comparar?\n");
    scanf("%d", &opcao);

    //menu de opções:
    switch (opcao){
        case 1:
            printf("Comparando a população entre:\n");
            printf("%s(Carta - %s) População: %d habitantes\n %s(Carta - %s) População: %d habitantes\n", cidade1, codigo1, populacao1, cidade2, codigo2, populacao2);
            if (populacao1 == populacao2){
                printf("As duas cidades tem a mesma população de: %d habitantes.\n", populacao1);
            } else if (populacao1 > populacao2){
                printf("%s(Carta - %s), Venceu!\n", cidade1, codigo1);
            } else{
                printf("%s(Carta - %s), Venceu!\n", cidade2, codigo2);
            }
            break;
        case 2:
            printf("Comparando a area entre:\n");
            printf("%s(Carta - %s) area: %.3lf Km²\n %s(Carta - %s) area: %.3lf Km²\n", cidade1, codigo1, area1, cidade2, codigo2, area2);
            if (area1 == area2){
                printf("As duas cidades tem a mesma Area de: %.3lf Km².\n", area1);
            } else if (area1 > area2){
                printf("%s(Carta - %s), Venceu!\n", cidade1, codigo1);
            } else{
                printf("%s(Carta - %s), Venceu!\n", cidade2, codigo2);
            }
            break;
        case 3:
            printf("Comparando o PIB entre:\n");
            printf("%s(Carta - %s) PIB: %.1lf R$ Bilhões\n %s(Carta - %s) PIB: %.1lf R$ Bilhões\n", cidade1, codigo1, pib1 / 1e9, cidade2, codigo2, pib2 / 1e9);
            if (pib1 == pib2){
                printf("As duas cidades tem o mesmo PIB de: %.1lf R$ Bilhões.\n", pib1 / 1e9);
            } else if (pib1 > pib2){
                printf("%s(Carta - %s), Venceu!\n", cidade1, codigo1);
            } else{
                printf("%s(Carta - %s), Venceu!\n", cidade2, codigo2);
            }
            break;
        case 4:
            printf("Comparando o PIB per capta entre:\n");
            printf("%s(Carta - %s) PIB per capta: %.2f mil\n %s(Carta - %s) PIB per capta: %.2f mil\n", cidade1, codigo1, pibpercapto1, cidade2, codigo2, pibpercapto2);
            if (pibpercapto1 == pibpercapto2){
                printf("As duas cidades tem o mesmo PIB per capta de: %.2f mil.\n", pibpercapto1);
            } else if (pibpercapto1 > pibpercapto2){
                printf("%s(Carta - %s), Venceu!\n", cidade1, codigo1);
            } else{
                printf("%s(Carta - %s), Venceu!\n", cidade2, codigo2);
            }
            break;
        case 5:
            printf("Comparando a densidade demográfica entre:\n");
            printf("%s(Carta - %s) densidade demográfica: %.2f hab/km²\n %s(Carta - %s) densidade demográfica: %.2f hab/km²\n", cidade1, codigo1, densidadeDemografica1, cidade2, codigo2, densidadeDemografica2);
            if (densidadeDemografica1 == densidadeDemografica2){
                printf("As duas cidades tem a mesma densidade demográfica de: %.2f hab/km².\n", densidadeDemografica1);
            } else if (densidadeDemografica1 < densidadeDemografica2){
                printf("%s(Carta - %s), Venceu!\n", cidade1, codigo1);
            } else{
                printf("%s(Carta - %s), Venceu!\n", cidade2, codigo2);
            }
            break;
        case 6:
            printf("Comparando o super poder entre:\n");
            printf("%s(Carta - %s) super poder: %.2f\n %s(Carta - %s) super poder: %.2f\n", cidade1, codigo1, superPoder1, cidade2, codigo2, superPoder2);
            if (superPoder1 == superPoder2){
                printf("As duas cidades tem a mesma densidade demográfica de: %.2f hab/km².\n", pib1);
            } else if (superPoder1 > superPoder2){
                printf("%s(Carta - %s), Venceu!\n", cidade1, codigo1);
            } else{
                printf("%s(Carta - %s), Venceu!\n", cidade2, codigo2);
            }
            break;
        default:
            printf("Opção inválida! Escolha uma opção entre 1 e 6.\n");
            return 1; // Encerra o programa com código de erro
    }

    return 0;
}