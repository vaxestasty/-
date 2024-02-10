#include <stdio.h>

int isPrime(int num) {
    if (num <= 1) {
        return 0;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int sumOfPrimeDivisors(int num) {
    int sum = 0;

    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0 && isPrime(i)) {
            sum += i;
        }
    }

    return sum;
}

int main() {
    int num;
    
    printf("¬ведите число: ");
    scanf("%d", &num);

    int result = sumOfPrimeDivisors(num);
    printf("—умма простых делителей числа %d: %d\n", num, result);

    return 0;
}
