#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {

    char ch;
    int res_m, res_1l, res_2l, res;
    float ps, al, imc;


    do {
        printf("*==================================================*\n");
        printf("|  1. Questao de Matematica                        |\n");
        printf("|  2. Questoes sobre Logica                        |\n");
        printf("|  3. Medir seu IMC ( Indice de Massa Corporal)    |\n");
        printf("|  5. Encerar Codigo                               |\n");
        printf("*==================================================*\n");

        printf("Digite sua opcao aqui: ");
        ch = getchar();

        switch (ch) {

            case '1' :
                printf("Voce ira fazer questoes de Matematica, Bons Calculos.\n");
                printf("Qual o resultado da seguinte conta?\n");
                printf("\nwx^2 - x^2 + x(2*5) = 100");
                    printf("\nDigite o Valor aqui: ");
                        scanf("%d", &res_m);
                        if( res_m == 10){
                        printf("Correto!!\n");

                    }
                        else if(res_m!= 10){
                        printf("Resultado errado!\n");

                    }

                break;

            case '2' :
                printf("\nVoce ira fazer questoes de Logica, Concentre-se e bom Raciocinio.\n");
                    printf("1)Todos os marinheiros sao republicanos. Assim sendo,");
                    printf("\na) O conjunto dos marinheiros contem o conjunto dos republicanos;\n"
                       "b) O conjunto dos republicanos contem o conjunto dos marinheiros;\n"
                       "c) Todos os republicanos sao marinheiros;\n"
                       "d) Algum marinheiro nao e republicano");
                    printf("\n Digite a sua resposta: ");
                    scanf("%s", &res_1l);
                    if(res_1l == 'b'){
                        printf("Resultado correto!!, Quer seguir para a proxima questao?\n s/n: ");
                        scanf("%s", &res);
                        if(res == 's'){
                            printf("\n2) A negacao de “hoje e segunda-feira e amanha nao chovera” e\n"
                                   "a) hoje nao e segunda-feira e amanha nao chovera\n"
                                   "b) hoje nao e segunda-feira ou amanha chovera\n"
                                   "c) hoje nao e segunda-feira entao amanha chovera\n"
                                   "d) hoje nao e segunda-feira nem amanha chovera\n"
                                   "e) hoje e segunda-feira ou amanha chovera");
                            printf("\nDigite a sua resposta: ");
                            scanf("%s", &res_2l);
                            if(res_2l == 'b'){
                                printf("Resposta Correta!!");
                            }
                        }   else if(res_2l != 'b'){
                            printf("Resposta errada!");
                        }
                    }else if(res_1l != 'b'){
                        printf("Voce errou");
                    }
                    break;
            case '3' :

                printf("Voce ira realizar o teste de IMC.");
                printf("\nPor favor informe seu peso e Altura a seguir.\nDigite aqui seu peso: ");
                scanf("%f", &al);
                printf("Digite sua altura: ");
                scanf("%f", &ps);
                ps = pow(ps,2);
                imc = ps / al;

                    if (18.4 < imc) {
                        printf("Voce esta abaixo do peso!, tenha uma alimentacao mais saudavel. %f", imc);
                }   else if (18.5 < imc < 24.9) {
                        printf("Voce esta no peso ideal, Muito bem. %f", imc);
                }   else if (25.0 < imc > 29.9) {
                        printf("Voce esta com sobrepeso, Tome cuidado. %f", imc);
                }   else {
                        printf("Voce esta obeso, Por favor trate de cuidar de sua saude. %f", imc);
                }

                    printf("\nEncerrando Codigo...\n");
                break;
        }

        }while (ch != '5');
return 0;
}