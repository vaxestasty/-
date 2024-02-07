#include <stdio.h>

int countTrailingZerosInFactorial(int num) {
    int count = 0;

    for (int i = 5; num / i >= 1; i *= 5) {
        count += num / i;
    }

    return count;
}

int main() {
    int num;
    
    printf("Введите число: ");
    scanf("%d", &num);

    int result = countTrailingZerosInFactorial(num);
    printf("Количество нулей в конце факториала %d: %d\n", num, result);

    return 0;
}
