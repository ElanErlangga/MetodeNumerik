#include<conio.h>
#include<stdio.h>
#include<windows.h>

int tambah(int x, int y);
int kurang(int x, int y);
int kali(int x, int y);
int pangkat(int x, int y);
void Fungsi(int x, int y);
void menu();


int main() {
	int x,y,pilih,hasil,z;
	char opsi;

	Home:
	menu();
	printf("\nMasukkan Pilihan : "); scanf("%d", &pilih);
	switch(pilih) {
	case 1:
   		system("cls");
		printf("-- Penjumlahan --");
		printf("\n");
		printf("Masukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		hasil = tambah(x,y);
		printf("\nHasilnya Adalah : %d", hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 2:
   		system("cls");
		printf("-- Pengurangan --");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		hasil = kurang(x,y);
		printf("\nHasilnya Adalah : %d", hasil);
		
		getch();
		system("cls");
		goto Home;
		break;

    case 3:
   		system("cls");
		printf("-- Perkalian --");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		hasil = kali(x,y);
		printf("\nHasilnya Adalah : %d", hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 4:
   		system("cls");
		printf("-- Perpangkatan --");
		printf("\n");
		printf("\nMasukkan Bilangan : "); scanf("%d", &x);
		printf("Masukkan Bilangan pangkat : "); scanf("%d", &y);
		hasil = pangkat(x,y);
		printf("\nHasilnya Adalah : %d", hasil);

		getch();
		system("cls");
		goto Home;
		break;

    case 5:
   		system("cls");
		printf("-- Fungsi f(x) --");
		printf("\n");
		printf("\nMasukkan X : "); scanf("%d", &x);
		printf("Masukkan Y : "); scanf("%d", &y);
		Fungsi(x,y);
		printf("\nHasilnya Adalah : 2x^2 - 4x+1 : %d", hasil);

		getch();
		system("cls");
		goto Home;
		break;
    }
}

void menu() {
	
	int pilih;

	printf("--- Menu ---\n");
	printf("1. Tambah \n");
	printf("2. Kurang \n");
	printf("3. Kali \n");
	printf("4. Pangkat \n");
	printf("5. Fungsi");
}

int tambah(int x, int y) {
	int hasil;
	hasil = x + y;
	return hasil;
}

int kurang(int x, int y) {
	int hasil;
	hasil = x - y;
	return hasil;
}

int kali(int x, int y) {
	int hasil;
	hasil = x * y;
	return hasil;
}

int pangkat(int x, int y) {
	int i, hasil;
	hasil = 1;
	for(i = 1; i <= y; i++) {
		hasil = hasil * x;
	}
	return hasil;
}

void Fungsi(int x, int y){
	int q, hasil;
	for(q = x; q <= y; q++) {
		hasil = (2*(q*q)) - ((4*q) + 1);
	}
}
