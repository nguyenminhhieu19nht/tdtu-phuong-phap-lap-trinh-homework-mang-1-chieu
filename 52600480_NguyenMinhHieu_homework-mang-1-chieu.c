//Nguyễn Minh Hiếu
//MSSV: 52600480
//Bai tap mang

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

#define MAX 100

int tongSoChan(const int a[], int n) {
    int tong = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 0) {
            tong += a[i];
        }
    } printf ("Tong so chan cua mang la: %d\n", tong);

    return tong;
}

int demSoLe(const int a[], int n) {
    int dem = 0;

    for (int i = 0; i < n; i++)
        if (a[i] % 2 != 0) {
            dem += 1;
        } printf ("Tong so le cua mang la %d\n", dem);

    return dem;
}

bool laNguyenTo(int x) {

    if (x < 2) {
        return false;
    }
    for (int i = 2; i < x; i++) {
        if (x % i == 0) {
            return false;
        }
        return true;
    }
}

void lietKeSoNguyenTo(const int a[], int n) {
    printf ("Cac so nguyen to trong mang la: ");

    for (int i = 0; i < n; i++) {
        if (laNguyenTo(a[i]) == true) {
            printf ("[%d] ", a[i]);
        }
    }
}

double trungBinhSoLe(const int a[], int n) {
    int tong = 0;
    int dem = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            tong += a[i];
            dem += 1;
        }
    } if (dem == 0) {
        printf("\nMang khong co so le de tinh trung binh.\n");
        return 0.0;
    }

    double tb = (double)tong / dem;
    printf ("\nTong trung binh so le cua mang la %.2f\n", tb);
    return tb;
}

bool laChinhPhuong(int x) {

    if (x < 0) return false;

    for (int i = 0; i*i <= x; i++) {
        if (i*i == x) {
            return true;
        }
    } return false;
}

bool coSoChinhPhuong(const int a[], int n) {

    for (int i = 0; i < n; i++) {
        if (laChinhPhuong(a[i]) == true) {
            return true;
        }
    }
    return false;
}

bool mangToanChan(const int a[], int n) {

    for (int i = 0; i < n; i++) {
        if (a[i] % 2 != 0) {
            return false;
        }
    } return true;
}

bool mangTangDan(const int a[], int n) {

    for (int i = 0; i < n - 1; i++) {
        if (a[i] > a[i+1]) {
            return false;
        }
    }         return true;
}

bool mangDoiXung(const int a[], int n) {
    if (n <= 1) return true;

    for (int i = 0; i < n; i++) {
        if ( a[i] != a[n - 1 -i]) return false;

    } return true;
}

int main(void) {
    int a[MAX];
    int n;

    do {
        printf ("Vui long nhap gia tri n so luong phan tu ( 0 < n < 100 )!: "); scanf("%d", &n);
        if ( n < 0 || n > 100 ) {
            printf ("Gia tri dau vao khong hop le ! Vui long nhap lai gia tri dung dieu kien !\n\n");
        }
    } while (n < 0 || n > 100);

    printf ("Vui long nhap gia tri cac phan tu trong n !\n");
    for (int i = 0; i < n; i++) {
        printf ("Nhap a[%d] = ", i);
        scanf ("%d", &a[i]);
    }

    printf ("Mang vua nhap la:");
    for (int i = 0; i < n; i++) {
        printf (" - [%d]", a[i]);
    } printf ("\n");

    tongSoChan(a, n);
    demSoLe(a, n);
    lietKeSoNguyenTo(a, n);
    trungBinhSoLe(a, n);
    if (coSoChinhPhuong(a, n) == true) {
        printf ("Mang co so chinh phuong !");
    } else {
        printf ("Mang khong co so chinh phuong !");
    }
    printf ("\n");
    if (mangToanChan(a, n) == true) {
        printf ("Mang toan so chan !\n");
    } else {
        printf ("Mang khong toan chan !\n");
    }
    if (mangTangDan(a, n) == true) {
        printf ("Mang tang dan !");
    } else {
        printf ("Mang khong tang dan !");
    }
    printf ("\n");
    if (mangDoiXung(a, n) == true) {
        printf ("Mang doi xung !");
    } else {
        printf ("Mang khong doi xung !");
    }

    return 0;
}