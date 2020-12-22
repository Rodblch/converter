#include <stdio.h>

char currency_type[4][20] = {"EUR", "USD", "RUB", "BYN"};
float currency[4] = { 0 };

/* Что бы избежать повторения одного и того же кода лучше перенести информацию в отдельную функцию */
void display_currency(void) {
    for(int i = 0; i < 4; ++i) {
        printf("%.2f %s\n", currency[i], currency_type[i]);
    }
}

int main (void) {
    float cpEUR, cpRUB,cpBYN,cpUSD;
    int input;
    float num;

    do {
        printf("Какую валюту использвать?\n");
        printf("1. BYN\n");
        printf("2. RUB\n");
        printf("3. USD\n");
        printf("4. EUR\n");
        scanf("%d", &input);

        switch(input) {
            case 1:
                cpBYN = 1.0;
                cpRUB = 29.05;
                cpUSD = 0.39;
                cpEUR = 0.32;

                printf("Введите сколько хотите перевести лукашистких рублей\n");
                scanf("%f", &num);

                currency[0] = num * cpEUR;
                currency[1] = num * cpUSD;
                currency[2] = num * cpRUB;
                currency[3] = num;

                display_currency();

                break;
            case 2:

                printf("Введите сколько рублей хотите конвертировать\n");
                scanf("%f", &num);

                cpBYN = 3.4;
                cpRUB = 100;
                cpUSD = 1.34;
                cpEUR = 1.1;

                currency[0] = num * cpEUR/100;
                currency[1] = num * cpUSD/100;
                currency[2] = num;
                currency[3] = num * cpBYN/100;

                display_currency();

                break;

            case 3:

                printf("Введите сколько долларов хотите конвертировать\n");
                scanf("%f", &num);

                cpBYN = 2.53;
                cpRUB = 74.43;
                cpUSD = 1;
                cpEUR = 0.82;

                currency[0] = num * cpEUR;
                currency[1] = num;
                currency[2] = num * cpRUB;
                currency[3] = num * cpBYN;

                display_currency();

                break;

            case 4:

                printf("Введите сколько евро хотите конвертировать\n");
                scanf("%f", &num);


                cpBYN = 3.09;
                cpRUB = 91.02;
                cpUSD = 1;
                cpEUR = 1.22;

                currency[0] = num;
                currency[1] = num * cpUSD;
                currency[2] = num * cpRUB;
                currency[3] = num * cpBYN;

                display_currency();

                break;

                /* At any other digit, the program exits */
            default:
                printf("Exit\n");
                break;
        }
    } while (input < 0);

    return 0;
}
