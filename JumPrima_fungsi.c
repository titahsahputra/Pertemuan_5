/* Nama File    : JumPrima_fungsi.c */
/* Deskripsi    : Mengecek apakah bilangan prima atau bukan   */
/* Pembuat      : Titah Mohamad Sahputra - 24060122120007 */
/* Tanggal Pembuatan : 24 Maret  2023 */

#include <stdio.h>
#include <stdlib.h>


int isPrime(int n) {
    if(n <= 1) {
        return 0;
    }
    for(int i = 2; i < n ; i++) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main()
{
    /* Kamus */
    int sum = 0;
    int N ; //{bilangan yang akan ditentukan prima atau bukan}
    int i ;

    /* Algoritma */
    printf("Masukkan nilai N: ");
    scanf("%d", &N);

    if (N <= 1){
        printf("Tidak ada bilangan Prima ");
    }
    for (i=2; i <= N ;i++){
        if (isPrime(i)){
            sum = sum + i;

        }
    }

    printf("Sn :%d",sum);


    return 0;
}
