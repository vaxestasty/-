#include <stdio.h>

int main() {
    int num;
    printf("Введите число: ");
    scanf("%d", &num);

    int digit, sum = 0, product = 1;

    while (num > 0) {
        digit = num % 10;
        sum += digit;
        product *= digit;
        num /= 10;
    }

    printf("Сумма цифр: %d\n", sum);
    printf("Произведение цифр: %d\n", product);

    return 0;
}
