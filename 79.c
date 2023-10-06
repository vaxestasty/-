#include <stdio.h>

int main() {
    int sum = 0;
    int power = 1;

    for (int i = 1; i <= 10; ++i) {
        power *= 2;
        sum += power;
    }

    printf("Сумма десяти первых степеней числа 2: %d\n", sum);

    return 0;
}
