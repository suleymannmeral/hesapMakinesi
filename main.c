#include<stdio.h>
#include<conio.h>
int main(){

    float sayi1,sayi2,sonuc;  //değişkenlerimizi ondalıklı sayı olarak tanımladık.
    char islem;               // switch casede karakter kullanacağımız için string değişkenimizi tanımladık.

    printf("Lutfen 1.Sayiyi Giriniz:");   
    scanf("%f",&sayi1);
    printf("Lutfen 2.Sayiyi Giriniz:");
    scanf("%f",&sayi2);                    //sayıları kullanıcıdan aldık.

    printf("Yapmak İstediginiz İslemi Seciniz:\n");
    printf("+=TOPLAMA
            -=CIKARMA   
            *=CARPMA
            /=BOLME");
    printf("İsleminiz:")
    scanf("%s",&islem);

    switch(islem)         //switch case islemlerimizi tanımladık. kullanıcı ilgili case tusuna basarsa o işlem yapılacak
    {
        case'+': sonuc=sayi1+sayi2;
                printf("%f",&sonuc);
                break;                //break kullanmamızın sebebi program ilgili işlemi yaptığında diğer caseleri okumayacak.
        case'-': sonuc=sayi1-sayi2; 
                 printf("%f",&sonuc);
                 break;
        case'*': sonuc=sayi1*sayi2;
                 printf("%f",&sonuc);
                 break;
        case'/': sonuc=sayi1/sayi2;         
                 printf("&f",&sonuc);
                 break;
         default: printf("Yanlis Giris Yaptiniz"); // kullanıcı yanlış karakter girerse alacağımız mesaj
    }

    getch();         
}
                  