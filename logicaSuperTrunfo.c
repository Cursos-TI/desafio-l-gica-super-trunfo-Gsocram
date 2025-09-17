#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 

 int main(){
 printf("Desafio  Super Trunfo Países - comparação das cartas\n");
 printf("Carta1:\n");

 char País [20] = "Brasil";
 int populacao = 215300000;
 float area = 8516000.0f;
 float pib = 164900000000.0f;
 int numerodepontosturisticos = 1000;
 float densidade_demografica = populacao / area;
 

 printf("carta2:\n");

 char país [20] = "China";
 int populacaO = 1426000000;
 float Area = 160.70f;
 float Pib = 729000000.0f;
 int numerodepontosTuristicos = 50;
 float densidade_demograficA = populacaO / Area;
  
  int escolha;
printf("Escolha um Atributo para comparar:\n");
printf("1. População\n");
printf("2. Area\n");
printf("3. Pib\n");
printf("4. Numero de pontos Turisticos\n");
printf("5. Densidade Demografica\n");
printf("Digite o numero da opção\n");
scanf("%d", &escolha);

switch(escolha){
  case 1:
  printf("Comparação de Cartas (Atributos: Papulaão)\n");
  printf("Carta 1: %s - População: %d\n",País , populacao);
  printf("Carta 2: %s - População: %d\n", País, populacaO);
  
  if(populacao > populacaO){
    printf("Resultado: Carta 1 (%s) Venceu!\n", País);
  }else if(populacaO > populacao){
    printf("Resultado: carta 2 (%s) Venceu!\n",país);
  
  }else {
    printf("Resultado: Empate!\n");
  }
  break;
  case 2:
  printf("Comparação de Cartas (Atributo: Area)\n");
  printf("Carta 1: %s - Area: %.2f\n",País, area);
  printf("Carta 2: %s - Area: %.2f\n",país, Area );
  if (area > Area){
    printf("Resultado: Carta 1 (%s) Venceu!\n", País);
  }else if(Area > area){
    printf("Resultado: carta 2 (%s) Venceu!\n", país);
  }else{
    printf("Resultado Empate!\n");
  }
  break;
  case 3:
  printf("Comparação de Cartas (Atributo: PIB)\n");
  printf("Carta 1: %s - PIB: %.2f\n",País, pib);
  printf("Carta 2: %s - PIB: %.2f\n",país,Pib);
  if(pib>Pib){
    printf("Resultado: Carta 1 (%s) Venceu!\n", País);
  }else if(Pib>pib){
    printf("Resultado: Carta 2 (%s) Venceu!\n",país);
  }else{
    printf("Resultado Empate!\n");
  }
break;
case 4:
printf("Comparação de Cartas (Atributo: Pontos Turisticos)\n");
printf("Carta 1:%s - Pontos Turisticos: %d\n",País, numerodepontosturisticos);
printf("Catra 2: %s - Pontos Turistico: %d\n",país, numerodepontosTuristicos);
if(numerodepontosturisticos > numerodepontosTuristicos){
  printf("Resultado: Carta 1 (%s) Venceu!\n",País);
}else if(numerodepontosTuristicos > numerodepontosTuristicos){
  printf("Resultado: Carta 2 (%s) Venceu!\n",país);
}else{
  printf("Resultado Empate!\n");
}
 break;
 case 5:
 printf("Comparação de Cartas (Atributo: Densidade Demografica)\n");
 printf("Carta 1: %s Densidade Demografica: %.2f\n", País,densidade_demografica);
 printf("Carta 2: %s Densidade Demografica: %.2f\n", país,densidade_demograficA);
 if(densidade_demografica < densidade_demograficA){
  printf("Resultado: Carta 1: (%s) - Venceu\n", País);
 }else if(densidade_demograficA < densidade_demografica){
  printf("Resultado: Carta 2 (%s)\n Venceu\n",país);
 }else{
  printf("Resultado empate!\n");
 }
 break;
 default:
 printf("Opção invalidade. Por favor, Escolhar um numero de 1 a 5.\n");

 break;

    return 0;
}

 }