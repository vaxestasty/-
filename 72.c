#include <stdio.h>

int largestPrimeFactor(int num) {
    int largestFactor = 1;

    while (num % 2 == 0) {
        largestFactor = 2;
        num /= 2;
    }

    for (int i = 3; i * i <= num; i += 2) {
        while (num % i == 0) {
            largestFactor = i;
            num /= i;
        }
    }

    if (num > 2) {
        largestFactor = num;
    }

    return largestFactor;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    int result = largestPrimeFactor(num);
    printf("Наибольший простой делитель числа %d: %d\n", num, result);

    return 0;
}
