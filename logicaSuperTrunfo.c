#include <stdio.h>

 

 int main(){
 printf("Desafio  Super Trunfo Países - comparação das cartas\n");
 printf("Carta1:\n");

 char País_brasil [20] = "Brasil";
 int populacao_brasil = 215300000;
 float area_brasil= 8516000.0f;
 float pib_brasil = 164900000000.0f;
 int numerodepontosturisticos_brasil = 1000;
 float densidade_demografica_brasil = populacao_brasil / area_brasil;
 

 printf("carta2:\n");

 char país_china [20] = "China";
 int populacaO_china= 1426000000;
 float Area_china = 160.70f;
 float Pib_china = 729000000.0f;
 int numerodepontosTuristicos_china = 50;
 float densidade_demograficA_china = populacaO_china / Area_china;
 
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
printf("Opcães disponiveis:\n");
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
printf("--- COMPARANDO OS ATRIBUTOS ---\n");
switch(escolha1){
  case 1 : if (populacao_brasil > populacaO_china) pontuacao_c1++; else pontuacao_c2++; 
  break;
case 2: if(area_brasil > Area_china) pontuacao_c1++; else pontuacao_c2++;
break;
case 3: if(pib_brasil > Pib_china) pontuacao_c1++; else pontuacao_c2++;
break;
case 4 : if (numerodepontosturisticos_brasil > numerodepontosTuristicos_china) pontuacao_c1++; else pontuacao_c2++;
break;
case 5 : if (densidade_demografica_brasil < densidade_demograficA_china) pontuacao_c1++; else pontuacao_c2++;
break;
}
 printf("--- RESULTADO FINAL---\n");
 printf("Pontuação de %s: %d\n",País_brasil, pontuacao_c1);
 printf("Pontuação de %s: %d\n",país_china,pontuacao_c2);

char *resultado  = (pontuacao_c1 > pontuacao_c2) ? ("Brasil venceu!") :( "Empate!");

printf("Resultado: %s\n", resultado);
 return 0;


}
