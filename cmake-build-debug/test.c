//#include <stdio.h>
//
//int main() {
//    // menggunakan array 2 dimensi
//
//    int matriks1[0][0], matriks2[0][0], hasil[0][0];
//    int i, j, k, m, n, p, q, jumlah = 0;
//    // i = baris
//    // j = kolom
//    // k = perkalian
//    // m = jumlah baris matriks 1
//    // n = jumlah kolom matriks 1
//    // p = jumlah baris matriks 2
//    // 1 = jumlah kolom matriks 2
//
//    printf("Masukkan jumlah baris matriks pertama: ");
//    scanf("%d",&m);
//    printf("Masukkan jumlah kolom matriks pertama: ");
//    scanf("%d",&n);
//
//    printf("Masukkan jumlah baris matriks kedua: ");
//    scanf("%d",&p);
//    printf("Masukkan jumlah kolom matriks kedua: ");
//    scanf("%d",&q);
//
//    if(n != p){
//        printf("Matriks tidak dapat dikalikan satu sama lain.\n");
//    } else {
//
//        // i = baris
//        // j = kolom
//        printf("Masukkan elemen matriks pertama: \n");
//        for(i = 0; i < m; i++){
//            for(j = 0; j < n; j++){
//                scanf("%d", &matriks1[i][j]);
//            }
//        }
//
//
//        printf("Masukkan elemen matriks kedua: \n");
//        for(i = 0; i < p; i++){
//            for(j = 0; j < q; j++){
//                scanf("%d", &matriks2[i][j]);
//            }
//        }
//
//        for(i = 0; i < m; i++){
//            for(j = 0; j < q; j++){
//                for(k = 0; k < p; k++){
//                    jumlah = jumlah + matriks1[i][k] * matriks2[k][j];
//                }
//                hasil[i][j] = jumlah;
//                jumlah = 0;
//            }
//        }
//
//        printf("Hasil perkalian matriks: \n");
//        for(i = 0; i < m; i++){
//            for(j = 0; j < q; j++){
//                printf("%d\t", hasil[i][j]);
//            }
//            printf("\n");
//        }
//
//    }
//
//    return 0;
//}