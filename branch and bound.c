#include <stdio.h>
#include <limits.h>

// Fungsi untuk menentukan maksimal antara dua bilangan
int max(int a, int b) {
    return (a > b) ? a : b;
}

// Fungsi untuk menentukan harga maksimal dari stik kayu yang dipotong
int cuttingRod(int price[], int n) {
    int i, j;
    int maxValue[n+1];
    maxValue[0] = 0;

    // Mencari harga maksimal dari stik kayu dengan panjang i
    for (i = 1; i <= n; i++) {
        int max_value = INT_MIN;
        for (j = 0; j < i; j++) {
            max_value = max(max_value, price[j] + maxValue[i-j-1]);
        }
        maxValue[i] = max_value;
    }

    // Mengembalikan harga maksimal dari stik kayu dengan panjang n
    return maxValue[n];
}

int main () {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price)/sizeof(price[0]);
    printf("Harga maksimal yang bisa didapat adalah %d", cuttingRod(price, n));
    return 0;
}
