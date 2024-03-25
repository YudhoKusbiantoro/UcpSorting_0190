// UCP 1 ALGORITMA TIPE1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
// soal tipe 1
//1. Insertion Sort membandingkan serta menukar elemen-elemen dengan cara mensortir data dengan Arr j besar sama 0 maka Arr j ditukar dengan Arr j+1
//2. algoritma Selection Sort membandingkan serta menukar elemen-elemen dengan cara mengurutkan data mulai dari yng paling kecil ke data yang paling besar, caranya x sebagai Arr j lalu Arr j di isi sebagai Arr j + 1 , kemudian Arr j + 1 di isi kembali dengan Arr j.
// 3. cara untuk mengetahui jumlah langkah yang dilakukan dalam algoritma sortir adalah dengan mengetahui jumlah data lalu dikurang 1 atau ( n - 1 ) karena sortir data dimulai dari data ke 1 sampai ke data n - 1 jika selesai sampai data ke n - 1 maka data kita sudah keseluruhan kita sortir.
// 
// 
// 
#include <iostream>
using namespace std;
int main() 
{

}
int yudho[90];
int n;


void input() {                                                     //prosedur input
	while (true)
	{
		cout << "Masukan jumlah dta pada Array : ";                 //Membuat inputan jumlah element Array
		cin >> n;

		if (n <= 90) {                                              //Membuat kondisi n tidak lebih dari 90
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan minimal 20 elemen.\n";
		}
	}
	cout << endl;                                                     //Membuat jarak per garis program
	cout << "====================" << endl;                           //Membuat tampilan susunan data element array
	cout << "Masukan element Array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)                                       //Menggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";                        //Memasukan atau menginputkan nilai data ke-n
		cin >> yudho[i];                                                //Menyimpan nilai data ke-n kedalam array arr
	}
}
void display() {                                             // prosedur untuk menampilkan hasil
	cout << endl;                                            // output baris kosong
	cout << "====================" << endl;                  // output ke layar        
	cout << "Elemen Arrayy yang telah tersusun" << endl;     // output ke layar
	cout << "====================" << endl;                  // output ke layar
	for (int j = 0; j < n; j++) {                            // looping dengan j dimulai dari 0 hingga n-1
		cout << "Data Ke-" << j - 1 << ": ";
		cout << yudho[j] << endl;
	}
	cout << endl;
}
void selectionsort() {                               //prosedur untuk mengurutkan Array dengan metode selectionsort
	int pass = 1;                                     // step 1

	for (pass; pass <= n - 1; pass++) {             //looping dengan i dimulai dari 1 hingga n-1
		for (int j = 0; j <= n - 1 - pass; j++) {    //looping dengan j dimulai dari  0 hingga n-1
			if (yudho[j] > yudho[j - 1]) {                   // jika nilai pada a[j] lebih besar dari a[j-1]
				int temp = yudho[j];                     //simpan nilai a[j] ke variable sementara temp
				yudho[j] = yudho[j - 1];                     //assign nilai a[j-1] ke a[j] 
				yudho[j - 1] = temp;                     //assign nilai temp ke a[j-1]

			}
		}
	}
}        
                                     
int main() {
	input();             //memanggil read()
	selectionsort();    //memanggil  selectionsort()
	display();           //memanggil display ()
	return 0;

}







		