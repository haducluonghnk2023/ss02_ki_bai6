#include <stdio.h>

int main() {
    int n, m;

    // Nh?p s? lu?ng ph?n t? c?a m?ng 1 (0 < n <= 1000)
    do {
        printf("Nhap so luong phan tu cua mang 1 (0 < n <= 1000): ");
        scanf("%d", &n);
        if (n <= 0 || n > 1000) {
            printf("So luong phan tu cua mang 1 phai trong khoang tu 1 den 1000.\n");
        }
    } while (n <= 0 || n > 1000);

    int arr1[n];
	//mang1
    printf("Nhap cac phan tu cua mang 1:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr1[i]);
    }

    do {
        printf("Nhap so luong phan tu cua mang 2 (0 < m <= 1000): ");
        scanf("%d", &m);
        if (m <= 0 || m > 1000) {
            printf("So luong phan tu cua mang 2 phai trong khoang tu 1 den 1000.\n");
        }
    } while (m <= 0 || m > 1000);

    int arr2[m];
	//mang 2
    printf("Nhap cac phan tu cua mang 2:\n");
    for (int i = 0; i < m; i++) {
        printf("Phan tu [%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    //mang ket hop
    int combined[n + m];
    for (int i = 0; i < n; i++) {
        combined[i] = arr1[i];
    }
    for (int i = 0; i < m; i++) {
        combined[n + i] = arr2[i];
    }
    
    printf("Mang ket hop la:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", combined[i]);
    }
    printf("\n");

    return 0;
}

