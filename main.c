#include <stdio.h>

#define BYN 1.0
#define RUB 0.034
#define USD 2.52
#define EUR 3.08

char currency_type[4][20] = {"EUR", "USD", "RUB", "BYN"};
float currency[4] = { 0 };

/* Что бы избежать повторения одного и того же кода лучше перенести информацию в отдельную функцию */
void display_currency(void) {
    for(int i = 0; i < 4; ++i) {
        printf("%.2f %s\n", currency[i], currency_type[i]);
    }
}

int main (void) {

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

                printf("Введите сколько хотите перевести лукашистких рублей\n");
                scanf("%f", &num);

                currency[0] = num / (float)EUR;
                currency[1] = num / (float)USD;
                currency[2] = num / (float)RUB;
                currency[3] = num;

                display_currency();

                break;
            case 2:

                printf("Введите сколько рублей хотите конвертировать\n");
                scanf("%f", &num);

                currency[0];
                currency[1];
                currency[2] = num;
                currency[3];

                break;

            case 3:

                printf("Введите сколько долларов хотите конвертировать\n");
                scanf("%f", &num);

                currency[0];
                currency[1] = num;
                currency[2];
                currency[3];

                break;

            case 4:

                printf("Введите сколько евро хотите конвертировать\n");
                scanf("%f", &num);

                currency[0] = num;
                currency[1];
                currency[2];
                currency[3];

                break;

            /* At any other digit, the program exits */
            default:
                printf("Exit\n");
                break;
        }
    } while (input < 0);

    return 0;
}