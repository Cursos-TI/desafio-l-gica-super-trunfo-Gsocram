#include <stdio.h>
 

 int main(){
 printf("Desafio  Super Trunfo Países - comparação das cartas\n");
 printf("Carta1:\n");

 char Estado [20] = "Bahia";
 char codigo [20] = "b01";
 char nomedacidade [20] = "Salvador";
 int populacao = 2568900;
 float area = 150.75f;
 float pib = 639000000.0f;
 int numerodepontosturisticos = 100;
 float densidadePopulacional;
 float pibpercapita;

 printf("Digite o Estado:"); 
 scanf("%s", Estado);


 printf("Digite o Codigo:");
 scanf("%s", codigo);


 printf("Digite o Nome da Cidade:");
 scanf("%s", nomedacidade);


 printf("Digite o numero de População:");
 scanf("%d", &populacao);


 printf("Digite o Tamnho da Àrea:");
 scanf("%f", &area);


 printf("Digite o PIB:");
 scanf("%f", &pib);


 printf("Digite o Numero de Pontos Turisticos:");
 scanf("%d", &numerodepontosturisticos);


 densidadePopulacional = (float) populacao / area;
 printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional);

 pibpercapita = (float) pib / populacao;
 printf("PIB Per Capita: %f Reais\n", pibpercapita);


 printf("carta2:\n");

 char estado [20] = "Goiás";
 char Codigo[20] ="G02";
 char nomedacidadE [20] = "Goiânia";
 int populacaO = 2563900;
 float Area = 160.70f;
 float Pib = 729000000.0f;
 int numerodepontosTuristicos = 50;
 float densidadepopulacional;
 float Pibpercapita;


 printf("Digite o Estado:");
 scanf(" %s", estado);


 printf("Digite o Codigo:");
 scanf(" %s", Codigo);


 printf("Digite o nome da Cidade:");
 scanf("%s", nomedacidadE);


 printf("Digite o nume de População:");
 scanf("%d", &populacaO);


 printf("Digite o Tamanho da Área:");
 scanf("%f", &Area );

 printf("Digite o PIB:");
 scanf("%f", &Pib);


 printf("Digote o Numero de Pontos Turisticos:");
 scanf("%d", &numerodepontosTuristicos);


 densidadePopulacional = (float) populacaO / Area;
 printf("Densidade Populacional: %f hab/km²\n", densidadePopulacional);

 pibpercapita = (float) Pib / populacaO;
 printf("PIB Per  capita: %f Reais\n", pibpercapita);

 
 if(populacao > populacaO){
  printf(" Carta 1  Venveu!\n");
 }else{
    printf(" Carta 2  Venceu!\n");
 }
 printf("Comparação de Cartas (Atributo:População)\n");
 printf("Carta 1 - Baiha(BA):%d\n", populacao);
 printf("Carta 2 - Goiás(go):%d\n", populacaO);
 printf("Resultado: Carta 1 (Bahia)Venceu!\n");

 if(area > Area){
   printf("Carta 1 Venceu!\n");
 }else{
   printf("Carta 2 Venceu!\n");
 }
 printf("Comparação de cartas (Atributo: Area)\n");
 printf("Carta 1 - Bahia(BA):%f\n",area);
 printf("Carta 2 - Goiás(GO):%f\n",Area);
 printf("Resultado: Carta 2 (Goiás) Venceu!\n");

 if(pib > Pib){
    printf("Carta 1 Venceu!\n");
 }else{
    printf("Carta 2 Venceu!\n");
 }
  printf("Comparação de Cartas (Atributo: PIB)\n");
  printf("Carta 1 - Bahia(BA):%f\n", pib);
  printf("Catra 2 - Goiás(GO):%f\n",Pib);
  printf("Resultado: Carta 2 (Goiás) Venceu!\n");

 if(numerodepontosturisticos > numerodepontosTuristicos){
    printf("Carta 1 Venceu!\n");
 }else{
    printf("Carta 2 Venceu!\n");
 }
   printf("Comparação de Cartas (Atributo: Numero de pontos Turistico)\n");
   printf("Carta 1 - Bahia(BA):%d\n",numerodepontosturisticos);
   printf("Carta 2 - Goiás(GO):%d\n",numerodepontosTuristicos);
   printf("Resultado: Carta 1 (Bahia) Venceu\n");

 if(densidadePopulacional < densidadepopulacional){
    printf("Carta 1 Venceu!\n");
 }else{
    printf("Carta 2 Venceu!\n");
 }
   printf("Comparação de Cartas (Atributo: Densidade Populacional)\n ");
   printf("Carta 1 - Bahia(BA):%f\n", densidadePopulacional);
   printf("Carta 2 - Goiás(GO):%f\n", densidadepopulacional);
   printf("Resultado: Carta 2 (Goiás) Venceu!\n");

 if(pibpercapita > Pibpercapita){
    printf("Carta 1 Venceu!\n");
 }else{
    printf("Carta 2 Venceu!\n");
 }
    printf("Comparação de Cartas (Atributo:Pib per capita\n)");
    printf("Carta 1 - Baiha(BA):%f\n", pibpercapita);
    printf("Carta 2 - Goiás(GO):%f\n",Pibpercapita);
    printf("Resultado: Carta 1 (Bahia)Venceu!");


  
 // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
