#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#define MAX_SIZE 100

FILE *fp;
char dataToread[250];
int i, n;

struct penduduk {
    int nik, noHP, tglahir;
    char nama[50];
    char email[20];
};

void addData() {
    struct penduduk pdd;
    int i, n, chars;
    fp=fopen("data.txt", "a");

    if(fp==NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    printf("-------------------------------------\n");
	printf("-       TAMBAH DATA PENDUDUK        -\n");
	printf("-------------------------------------\n");

    fflush(stdin);

    printf("NIK: ");
    scanf("%d", &pdd.nik);

    printf("Name: ");
    scanf("%s", &pdd.nama);

    printf("Tanggal lahir: ");
    scanf("%d", &pdd.tglahir);

    printf("No Hp: ");
    scanf("%d", &pdd.noHP);

    printf("Email :");
    scanf("%s", pdd.email);

    fprintf(fp, "%d %s %d %d %s\n", pdd.nik, pdd.nama, pdd.tglahir, pdd.noHP, pdd.email);

    i++;
    printf("Number of items written to the file: %d\n", i);

    fclose(fp);
}

void readData(){
    struct penduduk pdd;
    fp = fopen("data.txt", "r");
    if(fp==NULL)
    {
        printf("Error opening file");
        exit(1);
    }

    printf("-------------------------------------0\n");
    printf("-         LIHAT DATA PENDUDUK        -\n");
    printf("--------------------------------------\n");
    printf("NIK\||Nama\t||Tanggal Lahir\t||No. HP\t||Email\n");
    printf("------------------------------------------------\n");

    // baca dan tampilkan data dari file
    while (fscanf(fp, "%d %s %d %d %s\n", &pdd.nik, &pdd.nama, &pdd.tglahir, &pdd.noHP, &pdd.email) != EOF) {
        printf("%d\t||%s\t||%d\t||%d\t||%s\n", pdd.nik, pdd.nama, pdd.tglahir, pdd.noHP, pdd.email);
    }

    fclose(fp);
    system("pause");
}

void clearInputBuffer() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}


int main(){
    system ("color 9");
    int choice;
    do{
        system ("cls");
        menuawal:
        printf("---------------------------------------------------------------\n");
        printf("=         SISTEM INFORMASI KEPENDUDUKAN KARANGJATI            -\n");
        printf("---------------------------------------------------------------\n");
        printf("-1. TAMBAH DATA PENDUDUK                                      -\n");
        printf("-2. LIHAT DATA PENDUDUK                                       -\n");
        printf("-3. EXIT                                                      -\n");
        printf("---------------------------------------------------------------\n");
        printf("Pilih menu  :"); scanf("%d", &choice);
        switch(choice){
            case 1:
                system("cls");
                addData();
                clearInputBuffer();
                break;
            case 2:
                system ("cls");
                readData();
                clearInputBuffer();
                break;
            case 3:
                system ("cls");
                printf("Terimakasih ");
                exit(0);
                break;
            default:
                printf("Pilihan tidak tersedia\n");

        }
    }while (choice !=3);
    return 0;
}
