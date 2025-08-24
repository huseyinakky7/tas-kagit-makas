#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main()
{
    char bilgisayarsecim; //bilgisayarýn rastgelesayi ile seçeceði 0 1 2 rakamlarý eþitleyip if e sokacaðýz
    int rastgelesayi; //bilgisayar random ekilde 3 rakamdan birini seçecek
    int i; //for döngüsü
    int puan = 0; // oyun sonunda toplam puana göre kazanan belirlenecek
    char secim; //kullanýcýnýn seçimi

    srand(time(0));

    for(i=0;i<3;i++) // oyunu fora sokup 3 tekrar hale getir
    {

    printf("\n");

    printf("\nLutfen bir secim yap\n Tas icin T \n Kagit icin K \n Makas icin M\n");
    scanf(" %c",&secim);

    printf("\n");
    if (secim != 'K' && secim != 'T' && secim != 'M') //yanlýþ tuþlamayý ayýr
    {
        printf("Yanlis tuslama yatpiniz \n");
        i--;
        continue;
    }



    rastgelesayi = rand()%3; //bilgisayara 3 rakam seçtir 0 1 2 seçecek

    if(rastgelesayi==0) // tek tek harfle rakamý eþitle
    {
        bilgisayarsecim = 'T';
        if(secim == 'K')
        {
            printf("Bilgisayar Tas secti tebrikler kagit tasi sarar kazandiniz");
            puan++; //oyuncu her kazandýðýnda +1 arttýr
        }
        else if(secim == 'T')
        {
            printf("Bilgisayar Tas secti berabere");
        }
         else if(secim == 'M')
        {
            printf("Bilgisayar Tas secti Tas makasi ezdi maalesef kaybettiniz");

        }
    }
    else if(rastgelesayi==1) //oyunun mantýðýný tanýt
    {
        bilgisayarsecim = 'K';
        if(secim == 'K')
        {
            printf("Bilgisayar Kagit secti berabere");
        }
        else if(secim == 'T')
        {
            printf("Bilgisayar Kagit secti Tas kagidi sardi maalesef kaybettiniz");

        }
         else if(secim == 'M')
        {
            printf("Bilgisayar Kagit secti Makas kagidi kesti tebrikler kazandiniz");
            puan++;
        }
    }
    else
    {
        bilgisayarsecim = 'M';
        if(secim == 'K')
        {
            printf("Bilgisayar Makas secti Makas Kagidi kesti maalesef kaybettiniz");

        }
        else if(secim == 'T')
        {
            printf("Bilgisayar Makas secti Tas makasi ezdi tebrikler kazandiniz");
            puan++;
        }
         else if(secim == 'M')
        {
            printf("Bilgisayar Makas secti berabere");
        }
    }

    }

    //oyun sonu derlemesi

    printf("\n--- Oyun bitti! ---\n");
    printf("Toplam Puaniniz: %d\n", puan);

    if (puan == 1)
    {
        printf("Maci kaybettiniz");
    }
    else if (puan == 2)
    {
        printf("Mac berabere");
    }
    else if (puan == 3)
    {
        printf("Maci kazandiniz");
    }

    return 0;
}
