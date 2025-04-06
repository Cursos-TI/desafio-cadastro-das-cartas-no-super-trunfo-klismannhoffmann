#include <stdio.h> 

int main(){

    //Definição das variaveis
    int numHabitantesPrimeiraCarta, numPontosTuriticosPrimeiraCarta, numHabitantesSegundaCarta, numPontosTuristicoSegundaCarta;
    float areaPrimeiraCarta, pibPrimeiraCarta, areaSegundaCarta, pibSegundaCarta;
    char estadoPrimeiraCarta, estadoSegundaCarta;
    char codigoPrimeiraCarta[4], codigoSegundaCarta[4];
    char nomeCidadePrimeiraCarta[50], nomeCidadeSegundaCarta[50];

    //Cadastrar primeira carta
    printf("Cadastre a Primeira Carta\n");
    printf("Informe um estado de A a H:\n");
    scanf(" %c", &estadoPrimeiraCarta);

    printf("Informe o código da carta, sendo a letra do estado seguido de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigoPrimeiraCarta);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nomeCidadePrimeiraCarta);

    printf("Informe o número de habitantes:\n");
    scanf("%d", &numHabitantesPrimeiraCarta);

    printf("Informe a área da cidade em quilometros quadrados:\n");
    scanf("%f", &areaPrimeiraCarta);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pibPrimeiraCarta);

    printf("Informe o número de pontos turisticos da cidade:\n");
    scanf("%d", &numPontosTuriticosPrimeiraCarta);

    //Cadastrar segunda carta
    printf("Cadastre a Segunda Carta\n");
    printf("Informe um estado de A a H:\n");
    scanf(" %c", &estadoSegundaCarta);

    printf("Informe o código da carta, sendo a letra do estado seguido de um número de 01 a 04 (ex: A01, B03):\n");
    scanf("%s", codigoSegundaCarta);

    printf("Informe o nome da cidade:\n");
    scanf("%s", nomeCidadeSegundaCarta);

    printf("Informe o número de habitantes:\n");
    scanf("%d", &numHabitantesSegundaCarta);

    printf("Informe a área da cidade em quilometros quadrados:\n");
    scanf("%f", &areaSegundaCarta);

    printf("Informe o PIB da cidade:\n");
    scanf("%f", &pibSegundaCarta);

    printf("Informe o número de pontos turisticos da cidade:\n");
    scanf("%d", &numPontosTuristicoSegundaCarta);

    //Imprimir primeira carta
    printf("-----------------------------------------------------------\n");
    printf("\n");
    printf("Carta 1\n");
    printf("Estado: %c \n", estadoPrimeiraCarta);
    printf("Código: %s \n", codigoPrimeiraCarta);
    printf("Nome da Cidade: %s \n", nomeCidadePrimeiraCarta);
    printf("População: %d \n", numHabitantesPrimeiraCarta);
    printf("Área: %f \n", areaPrimeiraCarta);
    printf("PIB: %f \n", pibPrimeiraCarta);
    printf("Número de Pontos Turísticos: %d \n", numPontosTuriticosPrimeiraCarta);

    //Imprimir primeira carta
    printf("\n");
    printf("Carta 2\n");
    printf("Estado: %c \n", estadoSegundaCarta);
    printf("Código: %s \n", codigoSegundaCarta);
    printf("Nome da Cidade: %s \n", nomeCidadeSegundaCarta);
    printf("População: %d \n", numHabitantesSegundaCarta);
    printf("Área: %f \n", areaSegundaCarta);
    printf("PIB: %f \n", pibSegundaCarta);
    printf("Número de Pontos Turísticos: %d", numPontosTuristicoSegundaCarta);

    return 0;  
}