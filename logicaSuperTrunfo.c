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
 
 int escolha1, escolha2;
 int pontuacao_c1 = 0;
 int pontuacao_c2 = 0;
  printf("--- ESCOLHA DO PRIMEIRO ATRIBUTO ---\n");

printf("Escolha um Atributo para comparar:\n");
printf("1. População\n");
printf("2. Area\n");
printf("3. Pib\n");
printf("4. Numero de pontos Turisticos\n");
printf("5. Densidade Demografica\n");
printf("Digite o numero da opção\n");
scanf("%d", &escolha1);
 printf("--- ESCOLHA DO SEGUNDO ATRIBUTO ");
 
 int menu_valido = 0;
 while (!menu_valido){
printf("O atributo %d ja foi selecionado. escolha outro.\n",escolha1);
printf("Opiçães disponiveis:\n");
if(escolha1 != 1) printf("1. População\n");

if(escolha1 != 2) printf("2. Area\n");

if (escolha1 != 3) printf("3. PIB\n");

if(escolha1 != 4) printf("4. Numero de pontos turisticos\n");

if(escolha1 != 5)printf("5. Densidade Demografica\n");

printf("Digite o numero da opação:");
scanf("%d", &escolha2);
if(escolha2 >= 1 && escolha2 <=5 && escolha2 != escolha1){
  menu_valido = 1;
}else {
  printf("Opção invalida. Por favor, escolha um numero entre 1 e 5 que não seja o %d.\n", escolha1);
}

 }

