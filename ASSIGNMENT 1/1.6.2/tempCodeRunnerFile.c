#include <stdio.h>

long long int linearRecursion(long long int n) {
    if (n == 1) {
        return 1;
    }
    return n + linearRecursion(n - 1);
}

int main() {
    // Deklarasi array dengan angka-angka yang diminta
    long long int numbers[] = {100000, 500000, 1000000, 5000000, 10000000, 50000000};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Iterasi untuk setiap angka dalam array
    for (int i = 0; i < size; i++) {
        long long int n = numbers[i];
        printf("Hasil rekursi linear untuk n = %lld adalah: %lld\n", n, linearRecursion(n));
    }

    return 0;
}
