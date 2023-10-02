#define aula2ex1

#ifdef aula2ex1
#include <stdio.h>

void main() {
    int hora1, minuto1, segundo1, hora2, minuto2, segundo2;

    printf("Digite o primeiro instante (hh:mm:ss): ");
    scanf("%d:%d:%d", &hora1, &minuto1, &segundo1);

    printf("Digite o segundo instante (hh:mm:ss): ");
    scanf("%d:%d:%d", &hora2, &minuto2, &segundo2);

    int segundosTotais1 = hora1 * 3600 + minuto1 * 60 + segundo1;
    int segundosTotais2 = hora2 * 3600 + minuto2 * 60 + segundo2;

    int diferencaSegundos = segundosTotais2 - segundosTotais1;

    int hora, minuto, segundo;

    hora = diferencaSegundos / 3600;
    minuto = (diferencaSegundos % 3600) / 60;
    segundo = diferencaSegundos % 60;

    printf("Intervalo de tempo decorrido: %02d:%02d:%02d\n", hora, minuto, segundo);

    printf("\nDigite X para sair  \n");
    char saida;
    while(saida != 'X' && saida != 'x')
    {
        scanf(" %c", &saida);

        if(saida != 'X' && saida != 'x') {
            printf("Erro, digite novamente  \n");
        }
    }

    return;
}

#endif

#ifdef aula2ex2
#include <stdio.h>

void main() {
    char a;
    int num;

    num = 99;

    for (;;) {
        printf("Seu numero e %d? ", num);
        a = getchar();
        getchar();

        if (a == '=') {
            printf("O seu numero e %d\n", num);
            break;
        } else if (a == '<') {
            num /= 2;
        } else if (a == '>') {
            num += num / 2;
        } else {
            printf("Entrada invalida. Use '=', '<' ou '>'\n");
        }
    }

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

    return;
}

#endif

#ifdef aula2ex3
#include <stdio.h>

void main() {
    char a;
    int num, cont;

    num = 99;
    cont = 0;

    for (;;) {
        printf("Seu numero e %d? ", num);
        a = getchar();
        getchar();

        switch (a) {
            case '=':
                printf("O seu numero e %d\n", num);
                printf("Numero de tentativas: %d\n", cont);
                return;
            case '<':
                if (num % 2 != 0) {
                    num = (num / 2) + 1;
                } else {
                    num = num / 2;
                }
                break;
            case '>':
                if (num % 2 != 0) {
                    num = ((num + (num / 2)) + 1);
                } else {
                    num = (num + (num / 2));
                }
                break;
            default:
                printf("Entrada invalida. Use '=', '<' ou '>'\n");
        }

        cont++;
    }

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }
        return;
}

#endif

#ifdef aula2ex4
main()
{

    /*4 - Receba via teclado a distancia em km e a quantidade de litros de gasolina
    consumidos por um carro em um percurso.
    Calcule o consumo em km/l e escreva uma mensagem de acordo com a tabela
    abaixo:
    CONSUMO (km/l) MENSAGEM
    menor que 8    Venda o carro!
    entre 8 e 14   Economico!
    maior que 14   Super economico!*/

    float km, l, cons;

    printf("Digite a distancia ( KM ) percorrida pelo o carro! " );
    scanf("%f", &km);

     printf("Digite a quantidade de combustivel ( L ) consumidas pelo o carro no percurso! " );
    scanf("%f", &l);

    cons = km / l;


    if ( cons < 8 )
        {
            printf("Venda o carro!");
        }
    else
            if( cons > 14)
                {
                    printf("Super economico!");
                }
            else
                {
                    printf("Economico!");
                }

               printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

}

#endif

#ifdef aula2ex5

main()
{
    /*5 - Escreva um programa que receba via teclado numeros inteiros positivos.
    Quando o numero digitado for negativo o programa deve parar e calcula a
    media dos valores positivos digitados. */

    int num, cont, soma;
    float media;

    soma = 0;
    cont = 0;

    for(;;)
    {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);

        if ( num < 0)
        {
            break;
        }
        else
        {
            soma = soma + num;
            cont = cont + 1;
        }
    }

    media = soma / cont;


    printf("A media dos numeros positivos e: %f", media);

       printf("\nDigite X para sair  \n");
        char saida;
        while(saida != 'X' && saida != 'x')
            {
                scanf(" %c", &saida);

                if(saida != 'X' && saida != 'x') {
                printf("Erro, digite novamente  \n");
                }
            }

}

#endif

