#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main ()
{
    char currency[4][20] = {"EUR", "USD", "RUB", "BYN"};
    int input;
    int multiplicity;
    float num, formula;
    float cpRUB,cpEUR, cpBYN, output,qqq,cpUS;

    multiplicity = 1;

    do {
        printf("Какую валюту использвать?\n");
        printf("1. BYN\n");
        printf("2. RUB\n");
        printf("3. USD\n");
        printf("4. EUR\n");
        scanf("%d", &input);

        switch(input) {
            case 1:
                cpBYN=1;
                cpUS=0.4;
                cpEUR=0.33;
                cpRUB=29.27;

                printf("Введите сколько хотите перевести лукашистких рублей\n");
                scanf("%f", &num);
                formula=(cpBYN*num); //BYN
                printf("%.2f %s\n", formula, currency[3]);


                formula=(cpUS*num); //USD
                printf("%.2f %s\n", formula, currency[1]);

                formula=(cpEUR*num); //EUR
                printf("%.2f %s\n", formula, currency[0]);

                formula=(cpRUB*num);
                printf("%.2f %s\n", formula, currency[2]);
                break;
            case 2:
                cpBYN=3.42;
                cpUS=1.36;
                cpEUR=1.11;
                cpRUB=100;

                printf("Введите сколько хотите перевести путинских рублей\n");
                scanf("%f", &num);
                formula=(cpBYN*num)/100; //BYN
                printf("%.2f %s\n", formula, currency[3]);


                formula=(cpUS*num)/100; //USD
                printf("%.2f %s\n", formula, currency[1]);

                formula=(cpEUR*num)/100; //EUR
                printf("%.2f %s\n", formula, currency[0]);

                formula=(cpRUB*num)/100; //RUS
                printf("%.2f %s\n", formula, currency[2]);
                break;
            case 4: //ТУТ ЕВРО, Я ПРОСТО ОБОСРАЛСЯ. АААА
                cpBYN=3.07;
                cpUS=1.22;
                cpEUR=1;
                cpRUB=89.52;

                printf("Pls enter numberki\n");
                scanf("%f", &num);
                formula=(cpBYN*num); //BYN
                printf("%.2f %s\n", formula, currency[3]);


                formula=(cpUS*num); //USD
                printf("%.2f %s\n", formula, currency[1]);

                formula=(cpEUR*num); //EUR
                printf("%.2f %s\n", formula, currency[0]);

                formula=(cpRUB*num);
                printf("%.2f %s\n", formula, currency[2]);
                break;
                case 3:
                cpBYN=2.51;
                cpUS=1;
                cpEUR=0.82;
                cpRUB=73.38;

                printf("Pls enter numberki\n");
                scanf("%f", &num);
                formula=(cpBYN*num); //BYN
                printf("%.2f %s\n", formula, currency[3]);


                formula=(cpUS*num); //USD
                printf("%.2f %s\n", formula, currency[1]);

                formula=(cpEUR*num); //EUR
                printf("%.2f %s\n", formula, currency[0]);

                formula=(cpRUB*num);
                printf("%.2f %s\n", formula, currency[2]);
                break;
        }
    } while (input <0);

    return 0;
}