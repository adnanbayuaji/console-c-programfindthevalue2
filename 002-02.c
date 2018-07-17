/*PROGRAM FIND THE VALUE*/
// mencari angka dalam sekumpulan bilangan
#include <stdio.h>

void SimpanData (int A[], int n);
int MencariAngka (int A[], int nilai, int n);


main()
{
	/*DEKLARASI*/
	int n, i, A[100], nilai, posisi;									//n masukkan jumlah, i pencacah & A[] array, input nilai, penentu posisi
	char opsi;															//variabel mengulang program

	/*DESKRIPSI*/
	system("cls");														//membersihkan layar
	printf("PROGRAM FIND THE VALUE\n\n");								//judul program
	printf("Input n : ");
	scanf("%i", &n);													//masukkan nilai
	SimpanData (A, n);
	
	do
	{
		posisi=-1;														//penentu ada tidaknya
		printf("\n\n\nInput data that you are looking for : "); 
		scanf("%i", &nilai);											//input
		
		if(MencariAngka(A, nilai, n)!=-1)								//syarat data tidak ditemukan
		{
			printf("\nData found!, the data index is : %i", MencariAngka(A, nilai, n)+1);
		}
		else
		{
			printf("\nData not found!");
		}
		printf("\n\nDo you want to search again[Y/T]? "); scanf("%s", &opsi);
	}
	while(opsi=='Y'||opsi=='y');										//'Y' jika ingin mencari nilai kembali
	printf("Thank you to try this program");
}

void SimpanData (int A[], int n)
{
	int i;
	for(i=0; i<n; i++)													//untuk mengisi nilai
	{
		printf("Data %i : ", i+1);
		scanf("%i", &A[i]);
	}
}

int MencariAngka (int A[], int nilai, int n)
{
	int i, posisi;
	
	for(i=0; i<n; i++)													//perulangan untuk mengecek
	{
		if(nilai==A[i])													//syarat pencarian data
		{
			posisi=i;
			break;
		}
		else
		{
			posisi=-1;
		}
	}
	
	return posisi;
}
