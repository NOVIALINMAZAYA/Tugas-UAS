#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<cmath>

int main()
{
	int ao, bo;
	int aa, ba;
	
	printf("--------------------------\n");
	printf("Mencari titik tengah\n\n");
	
	printf("Masukkan X koordinat A :");scanf("%d",&aa);
	printf("Masukkan Y koordinat A :");scanf("%d",&ao);
	printf("Masukkan X koordinat B :");scanf("%d",&ba);
	printf("Masukkan Y koordinat B :");scanf("%d",&bo);
	printf("\n\n");
	
	int absis, ordinat, pencerminan;
	
	absis=(aa+bo)/2;
	ordinat=(ao+bo)/2;
	
	printf("Absis 	:%d",absis);printf("\n");
	printf("Ordinat :%d",ordinat);
	printf("\n\n");
	
	pencerminan=(absis+ordinat)/2;
	
	printf("pencerminan sumbu X dan Y :%d", pencerminan);printf("\n\n");
	
	return 0;
}

