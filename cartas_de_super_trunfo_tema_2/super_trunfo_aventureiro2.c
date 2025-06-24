#include <stdio.h>

int main (){

//Lista de Variáveis e seus Tipos Utilizados ao longo do Código.
    int opcoes, escolha2;
    char escolha; 
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

//Início do Programa Super Trunfo.
//Aqui, Usamos a Função 'Switch', para criar um Menu para o Próprio Usuário interagir ao longo do Código.
//E Usamos os 'cases' para guiar o que o programa deve fazer, se o Usuário escolher uma das opções do menu 'Switch'.
    printf("***Bem-Vindo(a) ao Cadastro de Cartas Super Trunfo***\n");
    printf("Estamos Felizes com sua Presença neste Projeto!!\n\n");

    printf("*Menu Principal*\n");
//Aqui, no Menu, o Usuário pode escolher uma das 3 opções abaixo.

    printf("1. Iniciar o Processo de Cadastro das Cartas.\n"); 
    printf("2. Regras para Cadastrar as Cartas.\n");
    printf("3. Sair do Programa.\n\n");

    printf("Escolha uma das Opções Acima para Começar: \n\n");
    scanf(" %d", &opcoes);

   
//Formatação do Menu de Seleção.
//Aqui no 'Switch', formatamos os 'cases' para o que exibir para cada opção que o Usuário selecionar.
//Utilizamos a Função 'Break' para terminar a execução do 'case' escolhido.
    switch (opcoes)
    {
    case 1:
//Se o Usuário selecionar a Opção 1 do Menu, Ocorrerá todo o processo de cadastro das cartas e somas de seus atributos que já vimos em códigos anteriores. 
        printf("Você Selecionou a 1º Opção.\n");
        printf("Primeiro, Preencha Todas as Informações da Primeira Carta, Por favor:\n\n");
         
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

        printf("Valor em Real da 1ºCarta: \n");
         scanf(" %f", &dinhero1);

        printf("Total de Locais Turísticos da 1ºCarta:  \n");
         scanf(" %d", &turistico1);


        printf("Agora, Preencha as Todas as Informações da Segunda Carta, Por Favor!\n");

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


  printf("__*Aqui estão Todas as Informações de Acordo com os Dados Inseridos em Cada Carta*__\n");

  //Informações da Primeira Carta.
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
  
  //Informações da Segunda Carta.
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

//Aqui, criamos mais um 'Switch' para dessa vez, o Usuário quiser comparar um dos Atributos das Duas Cartas.
        printf("Deseja Realizar a Comparação de Atributos? \n");
        printf("S = Sim\n");
        printf("N = Não\n\n");
         scanf(" %c", &escolha);
      break;
    
     
    case 2:
//Aqui, se o Usuário escolher a Opção 2, ele pode visualizar as Regras para o Cadastro das Cartas de Super Trunfo.
        printf("Você Selecionou a 2º Opção.\n");
        printf("Regra Nº1: insira dados simples e fáceis de entender, por favor.\n\n");
        printf("Regra Nº2: Você estará inserindo informações para Duas Cartas ao mesmo tempo, portanto ATENÇÃO!!\n\n");
        printf("Regra Nº3: Obrigado por ler as Regras, você é uma pessoa Atenciosa ^^\n\n");
      break;

      
    case 3:
//Aqui, se o Usuário escolher a Opção 3, ele estará saindo do Cadastro de Cartas Super Trunfo.
        printf("Saindo...Obrigado por Jogar!!");
      break;


    default:
//Essa função, permite exibir uma mensagem em caso dos outros 'cases' não forem escolhidos ou funcionarem devidamente.
        printf("Mensagem Erro Nº1, Tente Novamente");
      break;
    }



//Aqui está o Comando 'Switch' para levar o Usuário a Comparar os Atributos de sua Escolha.
    switch (escolha)
    {
//Aqui o Usuário escolhe qual Atributo das Duas Cartas ele quer Comparar.
//E o Programa automaticamente compara os dois mesmos atributos de cada carta e exibe o resultado da Comparação.
    case 'S':
    case 's':
        printf("Seja Bem-Vindo ao Sistema de Comparação de Atributos!\n");
        printf("Para Continuar, escolha um Atributo que deseja Utilizar para as Duas Cartas.\n\n");
         
        printf("'1' - Populações\n");
        printf("'2' - Áreas\n");
        printf("'3' - P.I.B\n");
        printf("'4' - Pontos Turísticos\n");
        printf("'5' - Densidades Demográficas\n\n");
         scanf(" %d", &escolha2);
      break;
    

    case 'N':
    case 'n':
        printf("Começe tudo de novo, por favor..de novo..\n");
      break;


    default:
        printf("Mensagem Erro Nº2, Tente Novamente..De novo\n\n");
      break;
    }



    switch (escolha2)
    {
    case 1:
//Caso o Usuário escolha o Atributo Populações.
//O Programa Compara o valor dos Atributos de acordo com as Informações exibidas pelo Usuário.
//E o Programa exibe o valor dessa comparação, revelando qual carta venceu ou se ficou num empate.
        printf("Você escolheu o Atributo 'Populações'\n");

        printf("A Carta (%s - %s): Possui %ld Habitantes.\n", carta1, cidade1, pessoas1);
        printf("E a Carta (%s - %s): Possui %ld Habitantes.\n\n", carta2, cidade2, pessoas2);
         if (pessoas1 > pessoas2) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Populações!\n\n", carta1, cidade1);
         else if (pessoas2 > pessoas1) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Populações!\n\n", carta2, cidade2);
         else 
        printf("O Valor das Cartas Ficaram Empatadas, Tente Novamente!!\n\n");  
      break;
    

    case 2:
//Caso o Usuário escolha o Atributo Áreas.
//O Programa Compara o valor dos Atributos de acordo com as Informações exibidas pelo Usuário.
//E o Programa exibe o valor dessa comparação, revelando qual carta venceu ou se ficou num empate.
        printf("Você escolheu o Atributo 'Áreas'\n");

        printf("A Carta (%s - %s): Possui %.2f Km²\n", carta1, cidade1, area1);
        printf("E a Carta (%s - %s): Possui %.2f Km²\n\n", carta2, cidade2, area2);
         if (area1 > area2) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Área!\n\n", carta1, cidade1);
         else if (area2 > area1) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Área!\n\n", carta2, cidade2);
         else
        printf("O Valor das Cartas Ficaram Empatadas, Tente Novamente!!\n\n");  
      break;


    case 3:
//Caso o Usuário escolha o Atributo PIB.
//O Programa Compara o valor dos Atributos de acordo com as Informações exibidas pelo Usuário.
//E o Programa exibe o valor dessa comparação, revelando qual carta venceu ou se ficou num empate.
        printf("Você escolheu o Atributo 'P.I.B'\n");

        printf("A Carta (%s - %s): Possui %.3f R$\n", carta1, cidade1, dinhero1);
        printf("E a Carta (%s - %s): Possui %.3f R$\n\n", carta2, cidade2, dinhero2);
         if (dinhero1 > dinhero2)
        printf("Então a Carta (%s - %s) Venceu no Atributo PIB!\n\n", carta1, cidade1);
         else if (dinhero2 > dinhero1) 
        printf("Então a Carta (%s - %s) Venceu no Atributo PIB!\n\n", carta2, cidade2);
         else 
        printf("O Valor das Cartas Ficaram Empatadas, Tente Novamente!!\n\n");      
      break;
         
      
    case 4:
//Caso o Usuário escolha o Atributo Pontos Turísticos.
//O Programa Compara o valor dos Atributos de acordo com as Informações exibidas pelo Usuário.
//E o Programa exibe o valor dessa comparação, revelando qual carta venceu ou se ficou num empate.
        printf("Você escolheu o Atributo 'Pontos Turísticos'\n");

        printf("A Carta (%s - %s): Possui %d Pontos Turísticos.\n", carta1, cidade1, turistico1);
        printf("E a Carta (%s - %s): Possui %d Pontos Turísticos.\n\n", carta2, cidade2, turistico2);
         if (turistico1 > turistico2) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Pontos Turísticos!\n\n", carta1, cidade1);
         else if (turistico2 > turistico1) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Pontos Turísticos!\n\n", carta2, cidade2);
         else
        printf("O Valor das Cartas Ficaram Empatadas, Tente Novamente!!\n\n"); 
      break;
        
      
    case 5: 
//Caso o Usuário escolha o Atributo Densidades Demográficas.
//O Programa Compara o valor dos Atributos de acordo com as Informações exibidas pelo Usuário.
//E o Programa exibe o valor dessa comparação, revelando qual carta venceu ou se ficou num empate.
        printf("Você escolheu o Atributo 'Densidades Demográficas'\n");

        printf("A Carta (%s - %s): Possui  %.2f\n", carta1, cidade1, densidade1);
        printf("E a Carta (%s - %s): Possui %.2f\n\n", carta2, cidade2, densidade2);
         if (1/densidade1 < 1/densidade2)
        printf("Então a Carta (%s - %s) Venceu no Atributo Densidades Demográficas!\n\n", carta1, cidade1);
         else if (1/densidade1 > 1/densidade2) 
        printf("Então a Carta (%s - %s) Venceu no Atributo Densidades Demográficas!\n\n", carta2, cidade2);
         else
        printf("O Valor das Cartas Ficaram Empatadas, Tente Novamente!!\n\n");  
      break;


    default:
//Comando em caso de erro nos Outros 'Cases' Anteriores.
        printf("Erro Nº3, Tente Novamente...De novo\n\n");
      break;
    }



//Fim do Programa Super Trunfo.
printf("*__Este foi o Projeto Super Trunfo, Aguarde mais Atualizações__*");
  return 0;
}