#include <iostream>
using namespace std;

// Percabangan IF ELSE
/*
  Struktur

  if (kondisi 1){
    aksi 1;
  }
  else if (kondisi 2){
    aksi 2;
  }
  else {
    aksi 3
  }
*/

int main()
{
  int nilai;
  cout << "Masukan Nilai Anda : ";
  cin >> nilai;

  if (nilai >= 70) // kondisi pertama
  {
    cout << "Selamat Anda Lulus"; // jika kondisi terpenuhi Aksi pada scope ini akan di jalankan
  }
  else //"jika tidak" maksudnya seluruh kondisi tidak terpenuhi
  {
    cout << "Anda Dinyatakan Tidak Lulus";
  }

  // if bersarang (ada if lagi di dalam if)
  int angka;
  cout << "Masukan Angka : ";

  if (angka > 0)
  {
    if (angka % 2 = 0)
    {
      cout << "Bilangan Genap Positif";
    }
    else if (angka % 2 != 0)
    {
      cout << "Bilangan Ganjil Positif";
    }
  }
  else if (angka < 0)
  {
    if (angka % 2 = 0)
    {
      cout << "Bilangan Genap Negatif";
    }
    else if (angka % 2 != 0)
    {
      cout << "Bilangan Ganjil Negatif";
    }
  }
  else
  {
    cout << "Bilangan Null";
  }
  return 0;
}