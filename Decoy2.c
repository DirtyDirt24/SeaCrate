#include <stdio.h>
#include <string.h>

struct data{
	char nama[200];
	int umur, tinggiBadan;
};

int main()
{
	struct data karyawan[5];
	
	for(int i = 0; i < 5; i++)
	{
		printf("Masukan data karyawan ke-%d:\n", i+1);
		printf("Nama: "); scanf("%[^\n]", karyawan[i].nama); getchar();
		printf("Umur: "); scanf("%d", &karyawan[i].umur); getchar();
		printf("Tinggi badan: "); scanf("%d", &karyawan[i].tinggiBadan); getchar();
		printf("==========================================\n");
	}
	
	float rataTinggi = 0;
	for(int i = 0; i < 5; i++)
	{
		rataTinggi+=karyawan[i].tinggiBadan;
	}
	rataTinggi/=5;
	printf("Rata-rata tinggi badan karyawan: %.2f\n", rataTinggi);

	return 0;
}
