#include <stdio.h> 

//Define variaveis globais
int numPontosTuriticosPrimeiraCarta, numPontosTuristicoSegundaCarta;
unsigned long numHabitantesPrimeiraCarta, numHabitantesSegundaCarta;
float areaPrimeiraCarta, pibPrimeiraCarta, areaSegundaCarta, pibSegundaCarta, superPoderPrimeiraCarta, superPoderSegundaCarta;
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
void calcular_super_poder();
void exibir_comparacao();

int main(){
       
    entrada_dados();  
    calcular_densidade_demografica();
    calcular_renda_per_capita();
    calcular_super_poder();
    exibir_cartas();
    exibir_comparacao();

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
      printf("População: %lu \n", numHabitantesPrimeiraCarta);
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
      printf("População: %lu \n", numHabitantesSegundaCarta);
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
      scanf("%lu", &numHabitantesPrimeiraCarta);
  
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
      scanf("%lu", &numHabitantesSegundaCarta);
  
      printf("Informe a área da cidade em quilometros quadrados:\n");
      scanf("%f", &areaSegundaCarta);
  
      printf("Informe o PIB da cidade:\n");
      scanf("%f", &pibSegundaCarta);
  
      printf("Informe o número de pontos turisticos da cidade:\n");
      scanf("%d", &numPontosTuristicoSegundaCarta); 
}

void calcular_densidade_demografica()
{
      densidadeDemoPrimeiraCarta =  (float)numHabitantesPrimeiraCarta / areaPrimeiraCarta;
      densidadeDemoSegundaCarta =  (float)numHabitantesSegundaCarta / areaSegundaCarta;
}

void calcular_renda_per_capita()
{
      rendaPerCapitaPrimeiraCarta = pibPrimeiraCarta / (float)numHabitantesPrimeiraCarta;
      rendaPerCapitaSegundaCarta = pibSegundaCarta / (float)numHabitantesSegundaCarta;
}

void calcular_super_poder()
{
      superPoderPrimeiraCarta = (float)numHabitantesPrimeiraCarta + 
            rendaPerCapitaPrimeiraCarta +
            areaPrimeiraCarta + 
            pibPrimeiraCarta + 
            (float)numPontosTuriticosPrimeiraCarta+
            (areaPrimeiraCarta / (float)numHabitantesPrimeiraCarta);
      
      superPoderSegundaCarta = (float)numHabitantesSegundaCarta +
            rendaPerCapitaSegundaCarta +
            areaSegundaCarta +
            pibSegundaCarta +
            (float)numPontosTuristicoSegundaCarta +
            (areaSegundaCarta / (float)numHabitantesSegundaCarta);   
}

void exibir_comparacao()
{
      printf("\n");
      printf("Comparação de Cartas:\n");
      if(numHabitantesPrimeiraCarta > numHabitantesSegundaCarta)
            printf("População: Carta 1 venceu (1)\n");
      else if(numHabitantesPrimeiraCarta == numHabitantesSegundaCarta)
            printf("População: Houve empate\n");
      else
            printf("População: Carta 2 venceu (0)\n");

      if(areaPrimeiraCarta > areaSegundaCarta)
            printf("Área: Carta 1 venceu (1)\n");
      else if(areaPrimeiraCarta == areaSegundaCarta)
            printf("Área: Houve empate\n");
      else
            printf("Área: Carta 2 venceu (0)\n");

      if(pibPrimeiraCarta > pibSegundaCarta)
            printf("PIB: Carta 1 venceu (1)\n");
      else if(pibPrimeiraCarta == pibSegundaCarta)
            printf("PIB: Houve empate\n");
      else
            printf("PIB: Carta 2 venceu (0)\n");

      if(numPontosTuriticosPrimeiraCarta > numHabitantesSegundaCarta)
            printf("Pontos Turísticos: Carta 1 venceu (1)\n");
      else if(numPontosTuriticosPrimeiraCarta == numPontosTuristicoSegundaCarta)
            printf("Pontos Turísticos: Houve empate\n");
      else
            printf("Pontos Turísticos: Carta 2 venceu (0)\n");

      if(densidadeDemoPrimeiraCarta < densidadeDemoSegundaCarta)
            printf("Densidade Populacional: Carta 1 venceu (1)\n");
      else if(densidadeDemoPrimeiraCarta == densidadeDemoSegundaCarta)
            printf("Densidade Populacional: Houve empate\n");
      else
            printf("Densidade Populacional: Carta 2 venceu (0)\n");

      if(rendaPerCapitaPrimeiraCarta > rendaPerCapitaSegundaCarta)
            printf("PIB per Capita: Carta 1 venceu (1)\n");
      else if(rendaPerCapitaPrimeiraCarta == rendaPerCapitaSegundaCarta)
            printf("PIB per Capita: Houve empate\n");
      else
            printf("PIB per Capita: Carta 2 venceu (0)\n");

      if(superPoderPrimeiraCarta > superPoderSegundaCarta)
            printf("Super Poder: Carta 1 venceu (1)\n");
      else if(superPoderPrimeiraCarta == superPoderSegundaCarta)
            printf("Super Poder: Carta 1 venceu (1)\n");
      else
            printf("Super Poder: Carta 2 venceu (0)\n");
}