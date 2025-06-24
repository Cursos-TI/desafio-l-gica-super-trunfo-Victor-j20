#include <stdio.h>

int main (){
   
//Lista de Variáveis e seus Tipos Utilizados ao longo do Código.
    char carta1[20], carta2[20];
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[25];
    unsigned long int pessoas1, pessoas2;
    float area1, area2;
    float dinhero1, dinhero2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float capita1, capita2;
    float poder1, poder2;
    int resultado1, resultado2, resultado3, resultado4, resultado5, resultado6, resultado7;

// Início do Código pela Interface e Cadastro de Cada Carta.
    printf("***Bem-Vindo(a) ao Cadastro de Cartas para um Super Trunfo***\n");
 
//Títulos das Cartas.
    printf("Título (País) da 1ºCarta:  \n");
    scanf(" %s", carta1);
    printf("Título (País) da 2ºCarta: \n");
    scanf(" %s", carta2);

//Estado das Cartas ('A' até 'H'). 
    printf("Estado-tipo da Primeira Carta: \n");
    scanf(" %c", &estado1);
    printf("Estado-tipo da Segunda Carta: \n");
    scanf(" %c", &estado2);

//Codigo das Cartas (Letra e Número).
    printf("Digite o Código da Primeira Carta: \n");
    scanf(" %s", codigo1);
    printf("Digite Código da Segunda Carta: \n");
    scanf(" %s",  codigo2);

//Nomes das Cidades das Duas Cartas. 
    printf("Cidade da Primeira Carta: \n");
    scanf("%s", cidade1);
    printf("Cidade da Segunda Carta: \n");
    scanf(" %s", cidade2);

//Número de Habitantes de Cada Carta. 
    printf("Populacão para a Primeira Carta: \n");
    scanf(" %lu", &pessoas1);
    printf("População para a Segunda Carta: \n");
    scanf(" %lu", &pessoas2);

//Áreas (Em Km²) das Duas Cartas. 
    printf("Área da Primeira Carta: \n");
    scanf(" %f", &area1);
    printf("Área da Segunda Carta: \n");
    scanf(" %f", &area2);

//PIB das Duas Cartas.
    printf("Valor (Em Real) da 1ºCarta: \n");
    scanf(" %f", &dinhero1);
    printf("Valor (Em Real) da 2ºCarta: \n");
    scanf(" %f", &dinhero2);

//Pontos Turísticos de cada Carta.
    printf("Locais Turísticos da 1ºCarta:  \n");
    scanf(" %d", &turistico1);
    printf("Locais Turísticos da 2ºCarta:  \n");
    scanf(" %d", &turistico2);

    
//Cálculo da Densidade Populacional das Duas Cartas.
    densidade1 = (pessoas1/area1);
    densidade2 = (pessoas2/area2);

//Cálculo do PIB per Capita das Duas Cartas.
    capita1 = (dinhero1/pessoas1);
    capita2 = (dinhero2/pessoas2);

//Cálculo do Super Poder das Duas Cartas.
    poder1 = (float)(pessoas1 + area1 + dinhero1 + turistico1 + capita1 + (1/densidade1));
    poder2 = (float)(pessoas2 + area2 + dinhero2 + turistico2 + capita2 + (1/densidade2));

   
//Exibições das Informações de Cada Carta de Acordo com as Informações Inseridas pelo Usuário.
  printf("__*Informações de Acordo com os Dados Inseridos em cada Carta*__\n");
  printf("1ºCarta: %s\n", carta1);
  printf("Estado: %c\n", estado1);
  printf("Código-Fonte: %s\n", codigo1);
  printf("Cidade Residente da Carta: %s\n", cidade1);
  printf("População: %lu Habitantes\n", pessoas1);
  printf("Área: %.2f Km²\n", area1);
  printf("Produto Interno Bruto(PIB): R$ %.3f\n", dinhero1);
  printf("Pontos Túristicos: %d\n", turistico1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB per Capita: R$ %.3f\n", capita1);
  printf("Super Poder: %.2f\n\n", poder1);

//Exibição da Segunda Carta e seus Atributos.
  printf("2ºCarta: %s\n", carta2);
  printf("Estado: %c\n", estado2);
  printf("Código-Fonte: %s\n", codigo2);
  printf("Cidade Residente da Carta: %s\n", cidade2);
  printf("População: %lu Habitantes\n", pessoas2);
  printf("Área: %.2f Km²\n", area2);
  printf("Produto Interno Bruto (PIB): R$ %.3f\n", dinhero2);
  printf("Pontos Túristicos: %d\n", turistico2);
  printf("Densidade Populacional: %.2f\n ", densidade2);
  printf("PIB per Capita: R$ %.3f\n", capita2);
  printf("Super Poder: %.2f\n\n\n", poder2);


//Aqui, vamos Comparar os Atributos das Duas Cartas, para Decidir qual delas é a Vencedora.
//e para isso, utilizamos as Ferramentas: 'If' e 'Else' na Comparação dos Atributos.
//Para comparar Dois mesmos atributos das Duas Cartas.
printf("__Comparação Alternativa das Duas Cartas__\n");

//Comparação "População" das Duas Cartas.
  printf("\n Atributo: População\n");
  printf("Carta 1 (%s - %s): %lu Habitantes\n", carta1, cidade1, pessoas1);
  printf("Carta 2 (%s - %s): %lu Habitantes\n", carta2, cidade2, pessoas2);
  if (pessoas1 > pessoas2){ 
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
  } else {
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta2, cidade2);}


//Comparação "Área" das Duas Cartas.
  printf("\n Atributo: Área\n");
  printf("Carta 1 (%s - %s): %.2f Km²\n", carta1, cidade1, area1);
  printf("Carta 2 (%s - %s): %.2f Km²\n", carta2, cidade2, area2);
  if (area1 > area2){
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
} else {
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta2, cidade2);
  }


//Comparação "PIB" das Duas Cartas.
  printf("\n Atributo: PIB\n");
  printf("Carta 1 (%s - %s): R$ %.3f\n", carta1, cidade1, dinhero1);
  printf("Carta 2 (%s - %s): R$ %.3f\n", carta2, cidade2, dinhero2);
  if (dinhero1 > dinhero2){
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
  } else {
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta2, cidade2);}
  

//Comparação "Pontos Turísticos" das Duas Cartas.
  printf("\n Atributo: Pontos Turísticos\n");
  printf("Carta 1 (%s - %s): %d\n", carta1, cidade1, turistico1);
  printf("Carta 2 (%s - %s): %d\n", carta2, cidade2, turistico2);
  if (turistico1 > turistico2){
    printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
 } else {
    printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta2, cidade2);}


//Comparação "Densidade Populacional" das Duas Cartas.
 printf("\n Atributo: Densidade Populacional\n");
  printf("Carta 1 (%s - %s): %.2f\n", carta1, cidade1, densidade1);
  printf("Carta 2 (%s - %s): %.2f\n", carta2, cidade2, densidade2);
  if (1/densidade1 > 1/densidade2){
     printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
  } else {
     printf("Resultado: A Carta (%s -%s) Venceu.\n\n", carta2, cidade2);}


//Comparação "PIB per Capita" das Duas Cartas.
  printf("\n Atributo: PIB per Capita\n");
  printf("Carta 1 (%s - %s): %.3f\n", carta1, cidade1, capita1);
  printf("Carta 2 (%s - %s): %.3f\n", carta2, cidade2, capita2);
  if (capita1 > capita2){
    printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
 } else {
    printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta2, cidade2);}


//Comparação "Super Poder" das Duas Cartas.
 printf("\n Atributo: Super Poder\n");
 printf("Carta 1 (%s - %s): %.2f\n", carta1, cidade1, poder1);
 printf("Carta 2 (%s - %s): %.2f\n", carta2, cidade2, poder2);
 if (poder1 > poder2){
   printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta1, cidade1);
} else {
   printf("Resultado: A Carta (%s - %s) Venceu.\n\n", carta2, cidade2);}


//Mensagem final do Programa.
printf("\n*__Este foi o Projeto Super Trunfo, Aguarde Atualizações__*\n");
  return 0;}