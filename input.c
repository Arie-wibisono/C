#include <stdio.h>
int main() {
	//deklarasi variabel
	char nama[20], umur[3];
	printf("Input nama anda : ");
	scanf("%[^\n]s", &nama);

	printf("Input Umur anda : ");
        scanf("%s", &umur);

	printf("\n===========================\n");
	printf("Selamat datang : %s",nama);
	printf("\nUsia anda sekarang adalah : %s tahun",umur);

	return 0;
}
