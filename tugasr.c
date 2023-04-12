#include <stdio.h>
#include <windows.h>
#include <stdlib.h>
#include <conio.h>

void setcolor(WORD color)
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),color);
    return;
}
//HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
//SetConsoleTextAttribute(hConsole, 10);



void rumah(); void kasir();
void menu()
{
    char men[3];
    system("cls");
    printf("1. Rumah\n");
    printf("2. Kasir\n");
    printf("3. Keluar\n");
    printf("Inputkan Pilihan : "); scanf(" %s", men);
    if (strlen(men)>1)
    {
        printf("Inputkan Satu Karakter Saja !!\n"); system("pause"); menu();
    }else{
        switch (men[0])
        {
        case '1':
            rumah();
            break;
        case '2':
            kasir();
            break;
        case '3':
            exit(0);
            break;
        default:
            printf("Tidak Tersedia Ulangi !!\n"); system("pause");
            menu();
            break;
        }
    }

}
int main()
{
    menu();
}
void rumah()
{
    int rum, h, j; char kom[3];
    printf("Tentukan tinggi dari cerobong, atap, dan dinding : "); scanf("%d", &rum);
    printf("Masukan komponen rumah : "); scanf(" %s", kom);
    if(strlen(kom)>1){
        printf("Inputkan 1 karakter saja!\n"); rumah();
    }else {
        for (h = 0; h < rum; h++)
        {
            for (j = 0; j < rum; j++)
            {
                printf(" ");
            }
            for (j = 0; j < rum; j++)
            {
                printf("\033[31m");printf("%c", kom[0]);printf("\033[0m");
            }
            printf("\n");
        }
        for (h = 0; h < rum; h++)
        {
            for (j = rum-1; j > h; j--)
            {
                printf(" ");
            }
            for (j = 0; j <= 2*h; j++)
            {
                printf("\x1b[36m");printf("%c", kom[0]);printf("\033[0m");
            }
            for (j = 0; j < rum; j++)
            {
                printf("\x1b[32m");printf("%c%c%c", kom[0], kom[0], kom[0]);printf("\x1b[0m");
            }
            printf("\n");
        }
        for (h = 0; h < rum; h++)
        {
            for (j = 0; j < 2*rum-1; j++)
            {
                printf("\x1b[35m");printf("%c", kom[0]);printf("\x1b[0m");
            }
            for (j = 0; j < rum; j++)
            {
                printf("\x1b[33m");printf("%c%c%c", kom[0], kom[0], kom[0]);printf("\x1b[0m");
            }
            printf("\n");
        }
        system("pause");
        menu();
    }

}
void kasir()
{
    {
        int beli, batal, kode[10], j_brg[10]; char ulang;
        double total, uang;
        char barang[][25] = { "Keyboard", "Mouse", "HDD 1TB",
                                "Printer AIO", "SSD 1TB", "Jack RJ45/PCS",
                                "Kabel UTP/M", "Kabel Audio", "Kabel USB 5m",
                                "Kabel USB 1m" };
        float harga[10] = { 80000, 50000, 1250000, 550000, 1500000, 3500, 3000, 15000, 45000,  15000};
        char nomor[][15] = { "Pertama", "Kedua", "Ketiga", "Keempat", "Kelima", "Keenam", "Ketujuh", "Kedelepan", "Kesembilan", "Kesepuluh"};
        do
        {
            system("cls");
            printf("%1s%-50s%1s\n", "+", "==================================================", "+");
            printf("%-4s%-44s%4s\n", "|", "Selamat Datang di Toko Komputer FTI UKSW!!!", "|");
            printf("%52s\n","+==================================================+");
            printf("|%-5s|%-20s|%-23s|\n", "No.", "Nama Barang", "Harga Barang(Rp.)");
            printf("|%-5s+%-20s+%-23s|\n", "-----", "--------------------", "-----------------------");
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "1", barang[0], "Rp.", harga[0]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "2", barang[1], "Rp.", harga[1]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "3", barang[2], "Rp.", harga[2]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "4", barang[3], "Rp.", harga[3]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "5", barang[4], "Rp.", harga[4]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "6", barang[5], "Rp.", harga[5]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "7", barang[6], "Rp.", harga[6]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "8", barang[7], "Rp.", harga[7]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "9", barang[8], "Rp.", harga[8]);
            printf("|%-5s|%-20s|%-5s%18.2f|\n", "10", barang[9], "Rp.", harga[9]);
            printf("+%-5s+%-20s+%-23s+\n", "-----", "--------------------", "-----------------------");
            printf("0. Keluar\n");

            printf("Berapa Jenis Barang yang ingin di Beli: "); scanf("%d", &beli);
            if(beli == 0){
                main();
            }else if (beli >= 1 && beli <=10){
                for (int i = 0; i < beli; i++)
                {
                    do
                    {
                        printf("Masukan Nomor Barang %s: ", nomor[i]); scanf("%d", &kode[i]);
                        if (kode[i] > 0 && kode[i] <= 10)
                        {
                            do {
                                printf("Masukan Jumlah Barang: "); scanf("%d", &j_brg[i]);
                                if (j_brg[i] < 0)
                                {
                                    printf("Minimal 0 !!!\n");
                                }
                            } while (j_brg[i] < 0);
                        }else{
                            printf("Kode Barang Tidak Ada!!\n");
                        }
                    } while (kode[i] < 1 || kode[i] > 10);
                }
                system("cls");
                printf("Daftar Belanja Anda: \n");
                printf("+%84s+\n","====================================================================================");
                printf("|%-5s|%-20s|%-20s|%-15s|%-20s|\n", "Kode", "Nama Barang", "Harga Barang(Rp.)", "Jumlah Barang", "      Subtotal");
                printf("|%-5s+%-20s+%-20s+%15s+%20s|\n", "-----", "--------------------", "--------------------", "---------------", "--------------------");
                for (int i = 0; i < beli; i++)
                {
                    total += harga[kode[i]-1]*j_brg[i];
                    printf("|  %-3d|%-20s|%-4s%16.2f|%15d|%-4s%16.2f|\n", kode[i], barang[kode[i]-1], "Rp.", harga[kode[i]-1], j_brg[i], "Rp.", (double)(harga[kode[i]-1]*j_brg[i]));
                }
                printf("+%-5s+%-20s+%-20s+%15s+%20s+\n", "-----", "--------------------", "--------------------", "---------------", "--------------------");
                printf(" 0. Lanjutkan Pembelian\n");
                printf("-1. Batalkan Pembelian\n");
                do
                {
                    printf("\nTotal Belanja Anda\t: Rp. %.2lf\n", total);
                    printf("Masukan Uang Anda\t: Rp. "); scanf("%lf", &uang);
                    if(uang == total){
                        printf("UANG PAS\n");
                        printf("\n\t\tTerimakasih Telah Berbelanjaaaa\n");
                    }else if (uang == 0)
                    {
                        kasir();
                    }
                    else if (uang == -1)
                    {
                        int ck = 0;
                        do{
                            printf("Kode Barang Yang Tidak Jadi Di Beli: "); scanf("%d", &batal);
                            for (int i = 0; i < beli; i++)
                            {
                                if(batal == kode[i]){
                                    printf("\x1B[31m%s\033[0m Tidak Jadi Di Beli\n", barang[batal-1]);
                                    total -= harga[batal-1]*j_brg[i]; ck = 1;
                                    printf("+%84s+\n","====================================================================================");
                                    printf("|%-5s|%-20s|%-20s|%-15s|%-20s|\n", "Kode", "Nama Barang", "Harga Barang(Rp.)", "Jumlah Barang", "      Subtotal");
                                    printf("|%-5s+%-20s+%-20s+%15s+%20s|\n", "-----", "--------------------", "--------------------", "---------------", "--------------------");
                                    printf("|  %-3d|%-20s|%-4s%16.2f|%15d|%-4s%16.2f|\n", kode[i], barang[batal-1], "Rp.", harga[batal-1], j_brg[i], "Rp.", (double)(0 - harga[batal-1]*j_brg[i]));
                                    printf("+%-5s+%-20s+%-20s+%15s+%20s+\n", "-----", "--------------------", "--------------------", "---------------", "--------------------");
                                }
                            }
                            if(ck == 0){
                                printf("Barang bukan belanjaan anda\n");
                            }
                        }while ( ck == 0);

                    }
                    else if (uang < total)
                    {
                        printf("Uang Anda Kurang !! Silahkan Masukan Lagi Uang Anda!!\n");
                    }
                    else{
                        printf("Kembalian Anda\t\t: Rp. %.2lf\n", uang-total);
                        printf("\n\t\tTerimakasih Telah Berbelanjaaaa\n\n");
                    }
                } while (uang < total);
                do
                {
                    printf("Apakah Anda Ingin Melakukan Transaksi Lagi(y/n): "); scanf(" %c", &ulang);
                    if (ulang != 'y' && ulang != 'n')
                    {
                        printf("Input Tidak Dimengerti\n");
                        getch();
                    }
                } while (ulang != 'y' && ulang != 'n');

            }else {
                printf("Pilihan anda salah!!!\n");
            }
            system("pause");
        } while (ulang == 'y' || ulang != 'n');

    }
}
