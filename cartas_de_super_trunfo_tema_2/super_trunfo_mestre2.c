#include <stdio.h>

int main (){
  
//Lista de Variáveis e seus Tipos Utilizados ao longo do Código.  
    int opcoes, escolha_2, escolha_3;
    char  escolha; 
    char carta1[20], carta2[20];
    char estado1, estado2;
    char codigo1[20], codigo2[20];
    char cidade1[20], cidade2[25];
    unsigned long int pessoas1,pessoas2;
    float area1, area2;
    float dinhero1, dinhero2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float capita1, capita2;
    float poder1, poder2;


  //Começando o Código de Cadastro do Super Trunfo.
    printf("\n***Bem-Vindo(a) ao Cadastro de Cartas Super Trunfo***\n");
    printf("\nEstamos Felizes com sua Presença neste Projeto!!\n\n");

    printf("*Menu Principal*\n");
    printf("1 - Para Iniciar o Processo de Cadastro das Cartas.\n"); 
    printf("2 - Para Consultar as Regras do Cadastro.\n");
    printf("3 - Para Sair do Programa.\n\n");

    printf("Escolha uma das Opções Acima para Começar:  \n");
    scanf(" %d", &opcoes);

   

//Comando switch para o Menu Principal entre 1,2 e 3.
    switch (opcoes)
    {
//No Case1, Preenchemos todas as Informações das 2 Cartas.
//Logo após, todos os cálculos são feitos automaticamente.
    case 1:
      printf("Você escolheu a 1ºOpção do Menu.\n");
      printf("Preencha Todas as Informações da Primeira Carta, Por favor:\n\n");
//Primeiro, Preenchemos todas as Informações da 1ºCarta.         
      printf("Título (País) da 1ºCarta:  \n");
      scanf(" %s", carta1);
          
      printf("Estado-tipo da Primeira Carta: \n");
      scanf(" %c", &estado1);
        
      printf("Digite o Código da Primeira Carta: \n");
      scanf(" %s", codigo1);
          
      printf("Cidade da Primeira Carta: \n");
      scanf("%s", cidade1);
          
      printf("População da Primeira Carta: \n");
      scanf(" %ld", &pessoas1);
          
      printf("Área da Primeira Carta: \n");
      scanf(" %f", &area1);

      printf("Valor (em Real) da 1ºCarta: \n");
      scanf(" %f", &dinhero1);

      printf("Total de Locais Turísticos da 1ºCarta:  \n");
      scanf(" %d", &turistico1);


      printf("Agora, Preencha as Todas as Informações da Segunda Carta, Por Favor!\n");
//Depois, preenchemos todas as Informações da 2ºCarta.
      printf("Título (País) da 2ºCarta: \n");
      scanf(" %s", carta2);
          
      printf("Estado-tipo da Segunda Carta: \n");
      scanf(" %c", &estado2);
     
      printf("Digite o Código da Segunda Carta: \n");
      scanf(" %s",  codigo2);

      printf("Cidade da Segunda Carta: \n");
      scanf(" %s", cidade2);

      printf("População da Segunda Carta: \n");
      scanf(" %ld", &pessoas2);

      printf("Área da Segunda Área: \n");
      scanf(" %f", &area2);

      printf("Valor da 2ºCarta: \n");
      scanf(" %f", &dinhero2);

      printf("Total de Locais Turísticos da 2ºCarta:  \n");
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

//Então depois dos Cálculos, são exibidos todas as Informações que o usuário inseriu em cada Atributo. 
        printf("__*Aqui Estão Todas as Informações de Acordo com os Dados Inseridos em Cada Carta*__\n");

//Todas as Informações inseridas á Primeira Carta.
        printf("1ºCarta: %s\n", carta1);
        printf("Estado: %c\n", estado1);
        printf("Código-Fonte: %s\n", codigo1);
        printf("Cidade Residente da Carta: %s\n", cidade1);
        printf("População: %ld Habitantes\n", pessoas1);
        printf("Área: %.2f Km²\n", area1);
        printf("Produto Interno Bruto: R$ %.3f\n", dinhero1);
        printf("Pontos Túristicos: %d\n", turistico1);
        printf("Densidade Populacional: %.2f\n", densidade1);
        printf("PIB per Capita: R$ %.2f\n", capita1);
        printf("Super Poder: %.2f\n\n", poder1);
  
//Todas as Informações Inseridas á Segunda Carta.
        printf("2ºCarta: %s\n", carta2);
        printf("Estado: %c\n", estado2);
        printf("Código-Fonte: %s\n", codigo2);
        printf("Cidade Residente da Carta: %s\n", cidade2);
        printf("População: %ld Habitantes\n", pessoas2);
        printf("Área: %.2f Km²\n", area2);
        printf("Produto Interno Bruto: R$ %.3f\n", dinhero2);
        printf("Pontos Túristicos: %d\n", turistico2);
        printf("Densidade Populacional: %.2f\n ", densidade2);
        printf("PIB per Capita: R$ %.2f\n", capita2);
        printf("Super Poder: %.2f\n\n", poder2);

//Aqui, exibimos um Mini Menu, Caso o Usuário quiser (ou Não) Comparar os Atributos das 2 Cartas.
        printf("Deseja Realizar a Comparação dos Atributos das Cartas? \n");
        printf("'S' - Para Sim\n");
        printf("'N' - Para Não\n\n");
         scanf(" %c", &escolha);
      break;
     

    case 2:
// No Case 2, está a Lista de Regras que devem ser seguidas ou pelo menos lidas pelo Usuário que usar no código.
        printf("Regra Nº1: Insira dados simples, por favor.\n\n");
        printf("Regra Nº2: Você estará inserindo informações para Duas Cartas ao mesmo tempo, portanto ATENÇÃO!!\n\n");
        printf("Regra Nº3: Ao Inserir Nomes nos 'PAÍSES' e 'CIDADES' das Cartas, Utilize UnderLine (_), ao Invés da Tecla 'Espaço'.\n\n");
        printf("Regra Nº4: Este Programa ainda está sendo testado, portanto qualquer erro, relate imediatamenteao Dono do Código.\n\n");
        printf("Regra Nº5: Obrigado por ler as Regras, você é uma pessoa Atenciosa ^^\n\n");
      break;

    case 3:
// No case 3, caso o usuário quiser sair do programa.
        printf("Saindo...Obrigado por Jogar!!");
      break;

    default:
// Comando, caso os outros 'cases' não funcionem!
        printf("Mensagem Erro Nº1, Tente Novamente");
      break;
    }
   

//Aqui temos um Switch para a Variável 'escolha' onde o Usuário seleciona se quer ou não comparar os Atributos.
    switch (escolha)
    {
//Caso o Usuário Digitar 's' (Maiúsculo ou Minúsculo), esse case exibe o Sistema de Comparação para selecionar Algum Atributo para representar a 1ºCarta.
    case 'S':
    case 's':
        printf("Bem-Vindo ao Sistema de Comparação de Atributos!!\n");
        printf("Antes de Começar, Escolha Um Número (De 1 a 5) para Selecionar o Atributo para a 1ºCarta:\n");

        printf(" '1' - Populações\n");
        printf(" '2' - Áreas\n");
        printf(" '3' - P.I.B\n");
        printf(" '4' - Pontos Turísticos\n");
        printf(" '5' - Densidades Demográficas\n\n");
         scanf(" %d", &escolha_2);
      break;
    

    case 'N':
    case 'n':
//Caso o Usúario não quiser comparar os Atributos das Cartas.
       printf("Este é o fim do Programa Super Trunfo, Obrigado por Jogar!!\n");
      break;


    default:
       printf("Mensagem Erro Nº2, Tente Novamente..De novo\n\n");
      break;
    }

//Aqui, Criamos mais um Switch para a Variável 'escolha_2' para o Usuário poder escolher um Segundo Atributo para representar a 2ºCarta.
    switch (escolha_2)
    {
    case 1:
//Caso o Usuário escolher o Atributo 1, o mesmo estará Indisponível para evitar que o Usuário escolha o mesmo Atributo 2 Vezes.
//Então, o Usuário terá que escolher outro atributo se quiser Comparar.
        printf("Ótimo, Você Escolheu o Atributo 'Populações' para a 1ºCarta.\n");
        printf("Agora Escolha mais Um Atributo para Representar a 2ºCarta!\n\n");

        printf("--------Atributo--Indisponível--------\n");
        printf(" '2' - Áreas\n");
        printf(" '3' - P.I.B\n");
        printf(" '4' - Pontos Turísticos\n");
        printf(" '5' - Densidades Demográficas\n\n");
        scanf(" %d", &escolha_3);
        break;
    

    case 2:
//Caso o Usuário escolher primeiro o Atributo 2, terá que escolher mais um Atributo de outro Número.
        printf("Ótimo, Você Escolheu o Atributo 'Áreas' para a 1ºCarta.\n");
        printf("Agora Escolha mais Um Atributo para Representar a 2ºCarta!\n\n");

        printf(" '1' - Populações\n");
        printf("--------Atributo--Indisponível--------\n");
        printf(" '3' - P.I.B\n");
        printf(" '4' - Pontos Turísticos\n");
        printf(" '5' - Densidades Demográficas\n\n");
        scanf(" %d", &escolha_3);
        break;


    case 3:
//Caso o Usuário escolher primeiro o Atributo 3, terá que escolher mais um Atributo de outro Número.
        printf("Ótimo, Você Escolheu o Atributo 'P.I.B' para a 1ºCarta.\n");
        printf("Agora Escolha mais Um Atributo para Representar a 2ºCarta!\n\n");

        printf("1 - Populações\n");
        printf("2 - Áreas\n");
        printf("--------Atributo--Indisponível--------\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidades Demográficas\n\n");
        scanf(" %d", &escolha_3);
        break;


    case 4:
//Caso o Usuário escolher primeiro o Atributo 4, terá que escolher mais um Atributo de outro Número.
        printf("Ótimo, Você Escolheu o Atributo 'Pontos Turísticos' para a 1ºCarta.\n");
        printf("Agora Escolha mais Um Atributo para Representar a 2ºCarta!\n\n");

        printf("1 - Populações\n");
        printf("2 - Áreas\n");
        printf("3 - P.I.B\n");
        printf("--------Atributo--Indisponível--------\n");
        printf("5 - Densidades Demográficas\n\n");
        scanf(" %d", &escolha_3);
        break; 


    case 5:  
//Caso o Usuário escolher primeiro o Atributo 5, terá que escolher mais um Atributo de outro Número.  
        printf("Ótimo, Você Escolheu o Atributo 'Densidades Demográficas' para a 1ºCarta.\n");
        printf("Agora Escolha mais Um Atributo para Representar a 2ºCarta!\n\n");

        printf("1 - Populações\n");
        printf("2 - Áreas\n");
        printf("3 - P.I.B\n");
        printf("4 - Pontos Turísticos\n");
        printf("--------Atributo--Indisponível--------\n\n");
        scanf(" %d", &escolha_3);
        break;
      

    default:
//Caso os Outros Cases não Funcionarem ou haver algum erro.
        printf("Mensagem Erro Nº3, Tente Novamente...De novo\n\n");
        break;
    }

//Aqui, já Implantamos um Switch mais Complexo após a seleção dos Atributos para Comparação.
  switch (escolha_3)
  {


//Caso o Usuário selecionar para a 2ºCarta o Atributo 1, o Programa vem somente á esse 'Case' no Switch.
  case 1:
  printf("Você Escolheu os Atributos dos Números: %d e %d \n\n", escolha_2, escolha_3);
//Se o Usuário escolher os Atributos '2 e 1'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//Se Atributo 2 (Selecionado para a 1ºCarta) for maior que Atributo 1 (Selecionado para a 2ºCarta), a 1ºCarta Ganha.
//Se ao contrário, a 2ºCarta ganha, Caso Contrário, Resultam num Empate!
//Essa Lógica se repete em todas as 20 Combinações dos 5 'Cases' ao longo desse Switch em Específico.
  if (escolha_2 == 2 && escolha_3 == 1) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Km² de Área\n", carta1, cidade1, area1);
   printf("Já a 2ºCarta (%s - %s) Possui %ld Habitantes em População\n\n", carta2, cidade2, pessoas2);
  
   if (area1 > pessoas2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta1, cidade1);
   else if (area1 < pessoas2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '3 e 1'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 3 && escolha_3 == 1) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Reais em PIB\n", carta1, cidade1, dinhero1);
   printf("Já a 2ºCarta (%s - %s) Possui %ld Habitantes em População\n\n", carta2, cidade2, pessoas2);
   
   if (dinhero1 > pessoas2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta1, cidade1);
   else if (dinhero1 < pessoas2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '4 e 1'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 4 && escolha_3 == 1) {
   printf("A 1ºCarta (%s - %s) Possui %d Pontos Turísticos\n", carta1, cidade1, turistico1);
   printf("Já a 2ºCarta (%s - %s) Possui %ld Habitantes na População\n\n", carta2, cidade2, pessoas2);

   if (turistico1 > pessoas2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta1, cidade1);
   else if (turistico1 < pessoas2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '5 e 1'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 5 && escolha_3 == 1) {
   printf("A 1ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n", carta1, cidade1, densidade1);
   printf("Já a 2ºCarta (%s - %s) Possui %ld Habitantes na População\n\n", carta2, cidade2, pessoas2);

   if (1/densidade1 < pessoas2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta1, cidade1);
   else if (1/densidade1 > pessoas2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }
  break;


//Caso o Usuário selecionar para a 2ºCarta o Atributo 2, o Programa vem somente á esse 'Case' no Switch.  
  case 2:
  printf("Você Escolheu os Atributos dos Números: %d e %d \n\n", escolha_2, escolha_3);

//Se o Usuário escolher os Atributos '1 e 2'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 1 && escolha_3 == 2) { 
   printf("A 1ºCarta (%s - %s) Possui %ld Habitantes em População\n", carta1, cidade1, pessoas1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Km² de Área\n\n", carta2, cidade2, area2);
  
   if (pessoas1 > area2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta1, cidade1);
   else if (pessoas1 < area2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '3 e 2'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 3 && escolha_3 == 2) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Reais em PIB\n", carta1, cidade1, dinhero1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Km² de Área\n\n", carta2, cidade2, area2);
  
   if (dinhero1 > area2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta1, cidade1);
   else if (dinhero1 < area2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '4 e 2'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 4 && escolha_3 == 2) {
   printf("A 1ºCarta (%s - %s) Possui %d Pontos Turísticos\n", carta1, cidade1, turistico1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Km² de Área\n\n", carta2, cidade2, area2);

   if (turistico1 > area2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta1, cidade1);
   else if (turistico1 < area2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '5 e 2'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 5 && escolha_3 == 2) {
   printf("A 1ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n", carta1, cidade1, densidade1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Km² de Área\n\n", carta2, cidade2, area2);

   if (1/densidade1 < area2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta1, cidade1);
   else if (1/densidade1 > area2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }
  break;


//Caso o Usuário selecionar para a 2ºCarta o Atributo 3, o Programa vem somente á esse 'Case' no Switch.
  case 3:
  printf("Você Escolheu os Atributos dos Números: %d e %d \n\n", escolha_2, escolha_3);

//Se o Usuário escolher os Atributos '1 e 3'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 1 && escolha_3 == 3) { 
   printf("A 1ºCarta (%s - %s) Possui %ld Habitantes em População\n", carta1, cidade1, pessoas1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Reais em PIB\n", carta2, cidade2, dinhero2);
  
   if (pessoas1 > dinhero2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta1, cidade1);
   else if (pessoas1 < dinhero2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '2 e 3'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 2 && escolha_3 == 3) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Km² de Área\n", carta1, cidade1, area1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Reais em PIB\n\n", carta2, cidade2, dinhero2);
  
   if (area1 > dinhero2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta1, cidade1);
   else if (area1 < dinhero2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }
  
//Se o Usuário escolher os Atributos '4 e 3'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 4 && escolha_3 == 3) {
   printf("A 1ºCarta (%s - %s) Possui %d Pontos Turísticos\n", carta1, cidade1, turistico1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Reais em PIB\n\n", carta2, cidade2, dinhero2);

   if (turistico1 > dinhero2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta1, cidade1);
   else if (turistico1 < dinhero2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '5 e 3'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 5 && escolha_3 == 3) {
   printf("A 1ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n", carta1, cidade1, densidade1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f Reais em PIB\n\n", carta2, cidade2, dinhero2);

   if (1/densidade1 < dinhero2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta1, cidade1);
   else if (1/densidade1 > dinhero2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }
  break;


//Caso o Usuário selecionar para a 2ºCarta o Atributo 3, o Programa vem somente á esse 'Case' no Switch.
  case 4:
  printf("Você Escolheu os Atributos dos Números: %d e %d \n\n", escolha_2, escolha_3);

//Se o Usuário escolher os Atributos '1 e 4'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 1 && escolha_3 == 4) { 
   printf("A 1ºCarta (%s - %s) Possui %ld Habitantes em População\n", carta1, cidade1, pessoas1);
   printf("Já a 2ºCarta (%s - %s) Possui %d Pontos Turísticos\n", carta2, cidade2, turistico2);
  
   if (pessoas1 > turistico2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta1, cidade1);
   else if (pessoas1 < turistico2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '2 e 4'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 2 && escolha_3 == 4) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Km² de Área\n", carta1, cidade1, area1);
   printf("Já a 2ºCarta (%s - %s) Possui %d Pontos Turísticos\n\n", carta2, cidade2, turistico2);
  
   if (area1 > turistico2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta1, cidade1);
   else if (area1 < turistico2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turistico!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '3 e 4'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 3 && escolha_3 == 4) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Reais em PIB\n", carta1, cidade1, dinhero1);
   printf("Já a 2ºCarta (%s - %s) Possui %d Pontos Turísticos\n\n", carta2, cidade2, turistico2);
  
   if (dinhero1 > turistico2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta1, cidade1);
   else if (dinhero1 < turistico2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '5 e 4'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 5 && escolha_3 == 4) {
   printf("A 1ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n", carta1, cidade1, densidade1);
   printf("Já a 2ºCarta (%s - %s) Possui %d Pontos Turísticos\n\n", carta2, cidade2, turistico2);

   if (1/densidade1 < turistico2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta1, cidade1);
   else if (1/densidade1 > turistico2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }
  break;


//Caso o Usuário selecionar para a 2ºCarta o Atributo 5, o Programa vem somente á esse 'Case' no Switch.
  case 5:
  printf("Você Escolheu os Atributos dos Números: %d e %d \n\n", escolha_2, escolha_3);

//Se o Usuário escolher os Atributos '1 e 5'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 1 && escolha_3 == 5) { 
   printf("A 1ºCarta (%s - %s) Possui %ld Habitantes em População\n", carta1, cidade1, pessoas1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n", carta2, cidade2, densidade2);
  
   if (pessoas1 < 1/densidade2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo População!\n\n", carta1, cidade1);
   else if (pessoas1 > 1/densidade2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '1 e 4'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 2 && escolha_3 == 5) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Km² de Área\n", carta1, cidade1, area1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n\n", carta2, cidade2, dinhero2);
  
   if (area1 < 1/densidade2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Área!\n\n", carta1, cidade1);
   else if (area1 > 1/densidade2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '3 e 5'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 3 && escolha_3 == 5) { 
   printf("A 1ºCarta (%s - %s) Possui %.2f Reais em PIB\n", carta1, cidade1, dinhero1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f em Densidade Populacional\n\n", carta2, cidade2, densidade2);
  
   if (dinhero1 < 1/densidade2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo PIB!\n\n", carta1, cidade1);
   else if (dinhero1 > 1/densidade2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }

//Se o Usuário escolher os Atributos '4 e 5'.
//O Programa Exibe os Dados das Duas Cartas (De acordo com as Informações inseridas pelo Usuário).
//e Executa a Lógica If, Else If e Else dessa Escolha.
  if (escolha_2 == 4 && escolha_3 == 5) {
   printf("A 1ºCarta (%s - %s) Possui %d Pontos Turísticos\n", carta1, cidade1, turistico1);
   printf("Já a 2ºCarta (%s - %s) Possui %.2f em Densidade Popualcional\n\n", carta2, cidade2, densidade2);

   if (turistico1 < 1/densidade2)
   printf("A 1ºCarta (%s - %s) Ganhou pelo Atributo Pontos Turísticos!\n\n", carta1, cidade1);
   else if (turistico1 > 1/densidade2)
   printf("A 2ºCarta (%s - %s) Ganhou pelo Atributo Densidade Populacional!\n\n", carta2, cidade2);
   else
   printf("Resultamos em Empate entre as Duas Cartas!!\n\n");
  }
  break;


  default:
//Comando caso os Cases estiverem com erro ou não Funcionarem.
  printf("Mensagem Erro Nº4, Tente Novamente....De novo\n\n"); 
  break;
  }


//Mensagem final do Programa Super Trunfo.
printf("*__Este foi o Projeto Super Trunfo, Aguarde mais Atualizações__*");
return 0; 
}