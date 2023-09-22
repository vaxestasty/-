#include <stdio.h>

int main() {
    int n;
    
    printf("Введите n: ");
    scanf("%d", &n);

    int sumOfCubes = 0;
    int sum = 0;

    for (int i = 1; i <= n; ++i) {
        sumOfCubes += i * i * i;
        sum += i;
    }

    int cubeOfSum = sum * sum * sum;
    int result = cubeOfSum - sumOfCubes;
    printf("Разница: %d\n", result);

    return 0;
}
