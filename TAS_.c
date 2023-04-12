#include <stdio.h>
#include<string.h>
#define MAX 256

int main(){
int nim,pil,pil1,baris,i,j,k=0,spasi,s=1,ul,ulang;
char nama[20];
 printf("input nim: ");
 scanf("%d",&nim);
 printf("input nama lengkap: ");
 scanf(" %[^\n]s",nama);

 printf("NIM anda:%d\n",nim);
 printf("Nama anda: %s",nama);
 printf("\nInput pilihan 1,2 atau 3:\n");
 scanf("%d",&pil);


 if(pil==1){
    printf("Anda memilih pilihan 1,sekarang pilih lagi dari 1,2 atau 3\n");
    scanf("%d",&pil1);
    if(pil1==1){
        printf (" Masukkan jumlah baris: \n ");
        scanf("%d", &baris);
        printf("\n");
        for (i = 1; i <= baris; i++)
        {
            for (spasi = 1; spasi <= baris-i; spasi++)
            {
                printf(" ");
            }
            for(k=1;k<=(2*i-1);k++)
            {
                printf("%d ", s);
                s += 1;
            }
            printf("\n");
        }
    }
   else if(pil1==2){
    int n, c, k;

  printf("Masukkan banyak baris\n");
  scanf("%d", &n);

  for (k = 1; k <= n; k++)
  {
    for (c = 1; c <= n-k; c++)
      printf(" ");

    for (c = 1; c <= 2*k-1; c++)
      printf("*");

    printf("\n");
  }

  for (k = 1; k <= n - 1; k++)
  {
    for (c = 1; c <= k; c++)
      printf(" ");

    for (c = 1 ; c <= 2*(n-k)-1; c++)
      printf("*");

    printf("\n");
        }
    }
    else if(pil1==3){
    int ch=65;
    int i,j,k,m;
    for(i=1;i<=5;i++)
    {
        for(j=5;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("%c",ch++);
            ch--;
        for(m=1;m<i;m++)
            printf("%c",--ch);
        printf("\n");
        ch=65;
    }
    }
}
//printf("ulangi?\n");
//scanf("%d",&ul);
//if(ul==y|| ul==Y){
//    goto back;
//}
//else
//    printf("Terima kasih %d %s FTI UKSW salatiga\n",nim,nama);


else if(pil==2){
    int baris, kolom, spasi;
	for(baris=1; baris<=5; baris++){
		for(kolom=1; kolom<=5; kolom++){
			if((kolom==1 && baris==1) || (baris==2&&kolom==1)||(kolom==1&&baris==3)||(baris==4&&kolom==2)||(baris==5&&kolom==3)||(baris==4&&kolom==5)||(baris==3&&kolom==5)||(baris==2&&kolom==5)||(baris==1&&kolom==5))
				printf("*");
			else
				printf(" ");
		}
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		for(kolom=1; kolom<=5; kolom++){
			if(kolom==3)
				printf("*");
			else
				printf(" ");
		}
		for(spasi=1; spasi<=3; spasi++)
		printf(" ");
		for(kolom=1; kolom<=5; kolom++){
			if((kolom==1)||(baris==1)||(kolom==5))
				printf("*");
			else
				printf(" ");
		}
	printf("\n");
	}
    printf("Terima kasih %d,%s FTI UKSW salatiga\n",nim,nama);
}
else if(pil==3){
int i,jum=0,input;
char text[MAX];
char str[]="FTIUKSW";
char* tes;

puts("Silahkan inputkan kalimat: \n");
scanf(" %[^\n]s",&input);

tes=strstr(text,str);
if(tes){
    printf("\nAda tulisan FTIUKSW\n");
}
else{
    printf("\nTidak ada tulisan FTIUKSW");
}
}
printf("\nTerima kasih %d,%s FTI UKSW salatiga\n",nim,nama);

}

