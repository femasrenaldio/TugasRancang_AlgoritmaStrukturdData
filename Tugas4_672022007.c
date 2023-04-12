#include <stdio.h>
#include <conio.h>
char nama[100];
long nim[100];
void mainMenu(){
    int p;
    system("cls");
    printf("****************************************\n");
    printf("*           WELCOME TRAVELER!          *\n");
    printf("*   YOU HAVE REACHED YOUR DESTINATION  *\n");
    printf("*   PLEASE ENTER YOUR IDENTIFICATION   *\n");
    printf("****************************************\n");
    printf("Your Name: ");
    scanf(" %[^\n]s", &nama);
    printf("Your NIM: ");
    scanf(" %[^\n]s", &nim);
    printf("****************************************\n");
    while(!kbhit())
    {
        printf("PRESS ANY KEY TO CONTINUE");
        for (p = 0; p < 3; p++)
        {
            if (kbhit())
            {
                secondMenu(nama, nim);
                break;
            }
            printf(".");
            sleep(1); 
        }
        printf("\33[2K\r");
    }
}

void secondMenu(){
    int key = 0;
    int menuSelect = 0;
    int confirmMenu = 0;
    system("cls");
    printf("*******************************************************************************\n");
    printf("             Welcome to the safehouse, %s - %s                                 \n", nama, nim);
    printf("Use your facilities wisely, use your WASD keys to navigate and enter to confirm\n");
    printf("*******************************************************************************\n");
    printf("*                       1. Hourglass                                          *\n");
    printf("*                       2. Currency Converter                                 *\n");
    printf("*                       3. Exit                                               *\n");
    printf("*******************************************************************************\n");
    while ((key = getch()) != 27){
        if (key == 's')
        {
            menuSelect += 1;
            if (menuSelect >= 4)
            {
                menuSelect = 1;
            }
            
        }
        else if (key == 'w')
        {
            menuSelect -= 1;
            if (menuSelect <= 0)
            {
                menuSelect = 3;
            }
        }   
        if (menuSelect == 1)
        {
            system("cls");
            printf("*******************************************************************************\n");
            printf("             Welcome to the safehouse, %s - %s                                 \n", nama, nim);
            printf("Use your facilities wisely, use your WASD keys to navigate and enter to confirm\n");
            printf("*******************************************************************************\n");
            printf("*                   --> 1. Hourglass                                          *\n");
            printf("*                       2. Currency Converter                                 *\n");
            printf("*                       3. Exit                                               *\n");
            printf("*******************************************************************************\n");
            confirmMenu = 1;
        }
        else if (menuSelect == 2)
        {
            system("cls");
            printf("*******************************************************************************\n");
            printf("             Welcome to the safehouse, %s - %s                                 \n", nama, nim);
            printf("Use your facilities wisely, use your WASD keys to navigate and enter to confirm\n");
            printf("*******************************************************************************\n");
            printf("*                       1. Hourglass                                          *\n");
            printf("*                   --> 2. Currency Converter                                 *\n");
            printf("*                       3. Exit                                               *\n");
            printf("*******************************************************************************\n");
            confirmMenu = 2;

        }
        else if (menuSelect == 3)
        {
            system("cls");
            printf("*******************************************************************************\n");
            printf("             Welcome to the safehouse, %s - %s                                 \n", nama, nim);
            printf("Use your facilities wisely, use your WASD keys to navigate and enter to confirm\n");
            printf("*******************************************************************************\n");
            printf("*                       1. Hourglass                                          *\n");
            printf("*                       2. Currency Converter                                 *\n");
            printf("*                   --> 3. Exit                                               *\n");
            printf("*******************************************************************************\n");
            confirmMenu = 3;
        }
        if (key == 13 || key == 'd')
        {
            switch (confirmMenu)
            {
            case 1:
            jamPasir();
            break;
            case 2:
            mataUang();
            break;
            case 3:
            _Exit(0);
            break;
            default:
            break;
            }
        }
    }
    
}

void jamPasir(p){
    int panjang, bintang, i, j;
    system("cls");
    printf("How tall do you want it to be?(odd numbers only!) ");
    scanf("%i", &panjang);
    if (panjang % 2 == 0)
    {
        printf("ODD NUMBERS ONLY!1!1!1!1!");
        sleep(1);
        jamPasir();
    }
    else
    {
        for (bintang = 0; bintang < panjang; bintang++)
        {
            printf(" * ");
        }
        printf("\n");
        int m = panjang;

        for (i = 1; i <= m; i++)
        {
            for (j = 1; j <= m; j++)
            {
                if (i == j || j == (m - i + 1))
                {
                printf(" X ");
                }
                else
                {
                printf("   ");
                }
            }
            printf("\n");
        }
        for (bintang = 0; bintang < panjang; bintang++)
        {
            printf(" * ");
        }
        printf("\n");
        while(!kbhit())
        {
        printf("Press enter to start over");
        for (p = 0; p < 3; p++)
        {
            if (kbhit())
            {
                secondMenu();
                break;
            }
            printf(".");
            sleep(1); 
        }
        printf("\33[2K\r");
        }
        getch();
        
    }
}

void mataUang(){
    long double idr, aus, usd, jpy, rub;
    int pilihan, key = 0;
    system("cls");
    printf("1. IDR to AUD\n");
    printf("2. IDR to USD\n");
    printf("3. IDR to JPY\n");
    printf("4. IDR to RUB\n");
    printf("5. Return\n");
    printf("Your Choice: ");
    scanf("%i", &pilihan);
    switch (pilihan)
    {
    case 1:
        printf("IDR: ");
        scanf("%Lf", &idr);
        printf("AUD: %Lf\n", idr/10309);
        printf("Press enter key to start again");
        key = getch();
        mataUang();
        break;
    case 2:
        printf("IDR: ");
        scanf("%Lf", &idr);
        printf("USD: %Lf\n", idr/14285);
        printf("Press enter key to start again");
        key = getch();
        mataUang();
        break;
    case 3:
        printf("IDR: ");
        scanf("%Lf", &idr);
        printf("JYP: %Lf\n", idr/128);
        printf("Press enter key to start again");
        key = getch();
        mataUang();
        break;
    case 4:
        printf("IDR: ");
        scanf("%Lf", &idr);
        printf("RUB: %Lf\n", idr/196);
        printf("Press enter key to start again");
        key = getch();
        mataUang();
        break;
    case 5:
        secondMenu();
        break;
    
    default:
        mataUang();
        break;
    }
    
}

int main(){
    mainMenu();
    return 0;
}