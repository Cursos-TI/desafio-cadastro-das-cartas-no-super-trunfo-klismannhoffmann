#include <stdio.h> 

//Define variaveis globais
int numHabitantesPrimeiraCarta, numPontosTuriticosPrimeiraCarta, numHabitantesSegundaCarta, numPontosTuristicoSegundaCarta;
float areaPrimeiraCarta, pibPrimeiraCarta, areaSegundaCarta, pibSegundaCarta;
float densidadeDemoPrimeiraCarta, rendaPerCapitaPrimeiraCarta;
float densidadeDemoSegundaCarta, rendaPerCapitaSegundaCarta;
char estadoPrimeiraCarta, estadoSegundaCarta;
char codigoPrimeiraCarta[4], codigoSegundaCarta[4];
char nomeCidadePrimeiraCarta[50], nomeCidadeSegundaCarta[50];

//Definir funções
void entrada_dados();
void exibir_cartas();
void calcular_densidade_demografica();
void calcular_renda_per_capita();

int main(){
       
    entrada_dados();  
    calcular_densidade_demografica();
    calcular_renda_per_capita();
    exibir_cartas();

    return 0;  
}

void exibir_cartas(){
      //Imprimir primeira carta
      printf("-----------------------------------------------------------\n");
      printf("\n");
      printf("Carta 1\n");
      printf("Estado: %c \n", estadoPrimeiraCarta);
      printf("Código: %s \n", codigoPrimeiraCarta);
      printf("Nome da Cidade: %s \n", nomeCidadePrimeiraCarta);
      printf("População: %d \n", numHabitantesPrimeiraCarta);
      printf("Área: %.2f \n", areaPrimeiraCarta);
      printf("PIB: %.2f \n", pibPrimeiraCarta);
      printf("Número de Pontos Turísticos: %d \n", numPontosTuriticosPrimeiraCarta);
      printf("Densidade Populacional: %.2f hab/km² \n", densidadeDemoPrimeiraCarta);
      printf("PIB per Capita: %.2f reais \n", rendaPerCapitaPrimeiraCarta);

      //Imprimir primeira carta
      printf("\n");
      printf("Carta 2\n");
      printf("Estado: %c \n", estadoSegundaCarta);
      printf("Código: %s \n", codigoSegundaCarta);
      printf("Nome da Cidade: %s \n", nomeCidadeSegundaCarta);
      printf("População: %d \n", numHabitantesSegundaCarta);
      printf("Área: %.2f \n", areaSegundaCarta);
      printf("PIB: %.2f \n", pibSegundaCarta);
      printf("Número de Pontos Turísticos: %d \n", numPontosTuristicoSegundaCarta);
      printf("Densidade Populacional: %.2f hab/km² \n", densidadeDemoSegundaCarta);
      printf("PIB per Capita: %.2f reais \n", rendaPerCapitaSegundaCarta);
}

void entrada_dados(){
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
}

void calcular_densidade_demografica()
{
      densidadeDemoPrimeiraCarta = numHabitantesPrimeiraCarta / areaPrimeiraCarta;
      densidadeDemoSegundaCarta = numHabitantesSegundaCarta / areaSegundaCarta;
}

void calcular_renda_per_capita()
{
      rendaPerCapitaPrimeiraCarta = pibPrimeiraCarta / numHabitantesPrimeiraCarta;
      rendaPerCapitaSegundaCarta = pibSegundaCarta / numHabitantesSegundaCarta;
}