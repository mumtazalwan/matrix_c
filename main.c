#include <stdio.h>

void penjumlahanMatriks() {
    float matriks_A[3][3], matriks_B[3][3], hasil[3][3];
    int jml_bar_matA, jml_bar_matB, jml_kol_matA, jml_kol_matB;

    printf("\n===== PENJUMLAHAN MATRIKS =====");
    printf("\nMasukan Jumlah Baris Matriks A :");
    scanf("%d", &jml_bar_matA);
    printf("Masukan Jumlah Kolom Matriks A :");
    scanf("%d", &jml_kol_matA);

    printf("\nMasukan Jumlah Baris Matriks B :");
    scanf("%d", &jml_bar_matB);
    printf("Masukan Jumlah Kolom Matriks B :");
    scanf("%d", &jml_kol_matB);

    if (jml_bar_matA != jml_kol_matB) {
        printf("\nMatriks can't be multiplied eachother");
    } else {
        printf("\nMasukan elemen matriks A:\n");
        for (int baris = 0; baris < jml_bar_matA; baris++) {
            for (int kolom = 0; kolom < jml_kol_matA; kolom++) {
                scanf("%g", &matriks_A[baris][kolom]);
            }
        }

        printf("\nMasukan elemen matriks B:\n");
        for (int baris = 0; baris < jml_bar_matB; baris++) {
            for (int kolom = 0; kolom < jml_kol_matB; kolom++) {
                scanf("%g", &matriks_B[baris][kolom]);
            }
        }

        // operasi penjumlahan
        for (int baris = 0; baris < jml_bar_matA; baris++) {
            for (int kolom = 0; kolom < jml_kol_matB; kolom++) {
                hasil[baris][kolom] = (matriks_A[baris][kolom] + matriks_B[baris][kolom]);
            }
        }

        printf("\nHasil penjumlahan matriks:\n");
        for (int baris = 0; baris < jml_bar_matA; baris++) {
            for (int kolom = 0; kolom < jml_kol_matB; kolom++) {
                printf("%g\t", hasil[baris][kolom]);
            }
            printf("\n");
        }

    }
}

void penguranganMatriks() {
    float matriks_A[3][3], matriks_B[3][3], hasil[3][3];
    int jml_bar_matA, jml_bar_matB, jml_kol_matA, jml_kol_matB;

    printf("\n===== PENGURANGAN MATRIKS =====");
    printf("\nMasukan Jumlah Baris Matriks A :");
    scanf("%d", &jml_bar_matA);
    printf("Masukan Jumlah Kolom Matriks A :");
    scanf("%d", &jml_kol_matA);

    printf("\nMasukan Jumlah Baris Matriks B :");
    scanf("%d", &jml_bar_matB);
    printf("Masukan Jumlah Kolom Matriks B :");
    scanf("%d", &jml_kol_matB);

    if (jml_bar_matA != jml_kol_matB) {
        printf("\nMatriks can't be multiplied eachother");
    } else {
        printf("\nMasukan elemen matriks A:\n");
        for (int baris = 0; baris < jml_bar_matA; baris++) {
            for (int kolom = 0; kolom < jml_kol_matA; kolom++) {
                scanf("%g", &matriks_A[baris][kolom]);
            }
        }

        printf("\nMasukan elemen matriks B:\n");
        for (int baris = 0; baris < jml_bar_matB; baris++) {
            for (int kolom = 0; kolom < jml_kol_matB; kolom++) {
                scanf("%g", &matriks_B[baris][kolom]);
            }
        }

        // operasi pengurangan
        for (int baris = 0; baris < jml_bar_matA; baris++) {
            for (int kolom = 0; kolom < jml_kol_matB; kolom++) {
                hasil[baris][kolom] = (matriks_A[baris][kolom] - matriks_B[baris][kolom]);
            }
        }

        printf("\nHasil pengrangan matriks:\n");
        for (int baris = 0; baris < jml_bar_matA; baris++) {
            for (int kolom = 0; kolom < jml_kol_matB; kolom++) {
                printf("%g\t", hasil[baris][kolom]);
            }
            printf("\n");
        }

    }
}

void perkalianMatriks() {

    int matriks_A[3][3], matriks_B[3][3], hasil[3][3];
    int baris, kolom, loop_kali, jml_bar_matA, jml_bar_matB, jml_kol_matA, jml_kol_matB;

    printf("\n===== PERKALIAN MATRIKS =====");
    printf("\nMasukan Jumlah Baris Matriks A :");
    scanf("%d", &jml_bar_matA);
    printf("Masukan Jumlah Kolom Matriks A :");
    scanf("%d", &jml_kol_matA);

    printf("\nMasukan Jumlah Baris Matriks B :");
    scanf("%d", &jml_bar_matB);
    printf("Masukan Jumlah Kolom Matriks B :");
    scanf("%d", &jml_kol_matB);

    if (jml_bar_matA != jml_kol_matB) {
        printf("\nMatriks can't be multiplied eachother");
    } else {
        printf("\nMasukan elemen matriks A:\n");
        for (baris = 0; baris < jml_bar_matA; baris++) {
            for (kolom = 0; kolom < jml_kol_matA; kolom++) {
                scanf("%d", &matriks_A[baris][kolom]);
            }
        }

        printf("\nMasukan elemen matriks B:\n");
        for (baris = 0; baris < jml_bar_matB; baris++) {
            for (kolom = 0; kolom < jml_kol_matB; kolom++) {
                scanf("%d", &matriks_B[baris][kolom]);
            }
        }

        for (baris = 0; baris < jml_bar_matA; baris++) {
            for (kolom = 0; kolom < jml_kol_matB; kolom++) {
                hasil[baris][kolom] = 0;
                for (loop_kali = 0; loop_kali < jml_bar_matB; loop_kali++) {
                    hasil[baris][kolom] =
                            hasil[baris][kolom] + (matriks_A[baris][loop_kali] * matriks_B[loop_kali][kolom]);
                }
            }
        }

        printf("\nHasil perkalian matriks:\n");
        for (baris = 0; baris < jml_bar_matA; baris++) {
            for (kolom = 0; kolom < jml_kol_matB; kolom++) {
                printf("%d\t", hasil[baris][kolom]);
            }
            printf("\n");
        }
    }
}

int main() {
    char Y = 0;

    printf("===============");
    printf("\nMATRIKS\n");
    printf("===============");
    printf("\n");
    printf("\n KETERANGAN KODE\n");
    printf("1 = Penjumlaan Matriks\n");
    printf("2 = Pengurangan Matriks\n");
    printf("3 = Perkalian Matriks\n");
    printf("\n");
    printf("Masukan Kode Pemilihan :");

    do {
        int pilihan;

        scanf("%d", &pilihan);

        if (pilihan == 1) {
            penjumlahanMatriks();

            printf("\n===========================\n");
            printf("ingin mencoba lagi? (ketik (Y/y) jika iya , ketik (N/n) jika tidak :");
            scanf(" %c", &Y);
            if (Y == 'y' || Y == 'Y') {
                printf("===============");
                printf("\nMATRIKS\n");
                printf("===============");
                printf("\n");
                printf("\n KETERANGAN KODE\n");
                printf("1 = Penjumlaan Matriks\n");
                printf("2 = Pengurangan Matriks\n");
                printf("3 = Perkalian Matriks\n");
                printf("\n");
                printf("Masukan Kode Pemilihan :");
            } else {
                printf("\n===== DONE =====");
            }
        } else if (pilihan == 2) {
            penguranganMatriks();

            printf("\n===========================\n");
            printf("ingin mencoba lagi? (ketik (Y/y) jika iya , ketik (N/n) jika tidak :");
            scanf(" %c", &Y);
            if (Y == 'y' || Y == 'Y') {
                printf("\nMATRIKS\n");
                printf("===============");
                printf("\n");
                printf("\n KETERANGAN KODE\n");
                printf("1 = Penjumlaan Matriks\n");
                printf("2 = Pengurangan Matriks\n");
                printf("3 = Perkalian Matriks\n");
                printf("\n");
                printf("Masukan Kode Pemilihan :");
            } else {
                printf("\n===== DONE =====");
            }
        } else if (pilihan == 3) {
            perkalianMatriks();

            printf("\n===========================\n");
            printf("ingin mencoba lagi? (ketik (Y/y) jika iya , ketik (N/n) jika tidak :");
            scanf(" %c", &Y);
            if (Y == 'y' || Y == 'Y') {
                printf("===============");
                printf("\nMATRIKS\n");
                printf("===============");
                printf("\n");
                printf("\n KETERANGAN KODE\n");
                printf("1 = Penjumlaan Matriks\n");
                printf("2 = Pengurangan Matriks\n");
                printf("3 = Perkalian Matriks\n");
                printf("\n");
                printf("Masukan Kode Pemilihan :");
            } else {
                printf("\n===== DONE =====");
            }
        }
    } while (Y == 'y' || Y == 'Y');
    return 0;
}

