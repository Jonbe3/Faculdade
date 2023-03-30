#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {

  char ch, res, res_1l, res_2l, r;
  int op, res_m;
  float ps, al, imc;

  do {
    printf("*==================================================*\n");
    printf("|  1. Questao de Matematica                        |\n");
    printf("|  2. Questoes sobre Logica                        |\n");
    printf("|  3. Medir seu IMC ( Indice de Massa Corporal)    |\n");
    printf("|  0. Para voltar ao Menu.                         |\n");
    printf("*==================================================*\n");

    printf("Digite sua opcao aqui: ");

    ch = getchar();
    system("clear");
    switch (ch) {

    case '1':
      printf("Voce ira fazer uma questao de matematica.\n");
      printf("Qual o resultado da seguinte conta: x² - x² + x(2 * 5) = 100");
      printf("\nDigite o Valor aqui: ");
      if (scanf("%d", &res_m) == 10) { // Correção 1
        if (res == 100) {              // Correção 2
          printf("Correto\n");
        } else {
          printf("Errado\n");
        }
      } else {
        printf("Entrada inválida\n"); // Correção 3
      }
      break;

    case '2':
      printf("Voce ira fazer questoes de Logica, Concentre-se e bom "
             "Raciocinio.\n");
      printf("\n1)Todos os marinheiros sao republicanos. Assim sendo,");
      printf(
          "\na) O conjunto dos marinheiros contem o conjunto dos "
          "republicanos;\n"
          "b) O conjunto dos republicanos contem o conjunto dos marinheiros;\n"
          "c) Todos os republicanos sao marinheiros;\n"
          "d) Algum marinheiro nao e republicano");
      printf("\n Digite a sua resposta: ");
      scanf(" %s", &res_1l);
      if (res_1l == 'b') {
        printf(
            "Resultado correto!!, Quer seguir para a proxima questao?\n s/n: ");
        scanf(" %s", &res);
        if (res == 's') {
          printf("\n2) A negacao de “hoje e segunda-feira e amanha nao "
                 "chovera” e\n"
                 "a) hoje nao e segunda-feira e amanha nao chovera\n"
                 "b) hoje nao e segunda-feira ou amanha chovera\n"
                 "c) hoje nao e segunda-feira entao amanha chovera\n"
                 "d) hoje nao e segunda-feira nem amanha chovera\n"
                 "e) hoje e segunda-feira ou amanha chovera");
          printf("\nDigite a sua resposta: ");
          scanf(" %s", &res_2l);
          if (res_2l == 'b') {
            printf("Resposta Correta!!\n\n");
          }
        } else if (res_2l != 'b') {
          printf("Resposta errada!\n\n");
        }
      } else if (res_1l != 'b') {
        printf("Voce errou");
      }
      break; // Correção 4
      break;

    case '3':

      printf("\nVoce ira realizar o teste de IMC.\n");
      printf("\nPor favor informe seu peso e Altura a seguir.\nDigite aqui seu "
             "peso: ");
      scanf("%f", &ps);
      printf("\nDigite sua altura: ");
      scanf("%f", &al);
      al = pow(al, 2);
      imc = ps / al;

      if (imc < 18.5) { // Correção 5
        printf("\nVoce esta abaixo do peso!, tenha uma alimentacao mais "
               "saudavel.\n");
      } else if (imc <= 24.9) { // Correção 6
        printf("\nVoce esta no peso ideal, Muito bem.\n");
      } else if (imc <= 29.9) { // Correção 7
        printf("\nVoce esta com sobrepeso, Tome cuidado.\n");
      } else {
        printf("\nVoce esta obeso, Por favor trate de cuidar de sua saude.\n");
      }
      printf("\nDeseja voltar ao Menu?\nSe sim, digite (0), se nao, digite "
             "qualquer tecla para encerrar.\n"); // Correção 8
      scanf(" %c", &r);                          // Correção 9
      if (r == '0') {                            // Correção 10
        break;
      } else {
        printf("Encerrando Código!!\n");
        return 0; // Correção 11
      }

    case '0': // Correção 12
      return 0;

    default:
      printf("\nOpção Inválida\n\n"); // Correção 13
      break;
    }
  } while (ch != 4);
}