// #include <iostream>
// using namespace std;
// int main()
// {
//   float jarak, waktu;
//   int kecepatan;
//   cout << "Program Menghitung Kecepatan\n";
//   cout << "Masukan Jarak yang ditempuh (m) : ";
//   cin >> jarak;
//   cout << "Masukan Waktu yang diperlukan (s) : ";
//   cin >> waktu;
//   kecepatan = jarak / waktu;
//   cout << "Kecepatan yang diperlukan adalah = " << kecepatan<< endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   float tinggi, sum = 0, rerata = 0;
//   cout << "Masukan Jumlah Mahasiswa : ";
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Masukan Tinggi Badan Mahasiswa ke-" << i + 1 << " : ";
//     cin >> tinggi;
//     sum = sum + tinggi;
//   }
//   rerata = sum / n;
//   cout << "Rata-rata Tinggi Badan Mahasiswa : " << rerata;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   string nama;
//   int nilai;
//   cout << "Masukan Nama Mahasiswa : ";
//   cin >> nama;
//   cout << "Masukan Nilai : ";
//   cin >> nilai;

//   if (nilai >= 80)
//   {
//     cout << "Nilai adalah A";
//   }
//   else if (nilai >= 70)
//   {
//     cout << "Nilai adalah B";
//   }
//   else if (nilai >= 60)
//   {
//     cout << "Nilai adalah C";
//   }
//   else if (nilai >= 50)
//   {
//     cout << "Nilai adalah D";
//   }
//   else
//   {
//     cout << "Nilai adalah E";
//   }
// }

// pprogram menentukan bilangan positif atau negatif atau nol
// #include <iostream>
// using namespace std;
// int main()
// {
//   float bilangan;
//   cout << "Masukan Bilangan : ";
//   cin >> bilangan;
//   if (bilangan > 0)
//   {
//     cout << "Bilangan Positif";
//   }
//   else if (bilangan < 0)
//   {
//     cout << "Bilangan Negatif";
//   }
//   else
//   {
//     cout << "Bilangan Nol";
//   }
// }

// #include <iostream>
// using namespace std;
// int main() //membuat priramida
// {
//   int n;
//   cout << "Masukan Jumlah Baris : ";
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < n - i; j++)
//     {
//       cout << " ";
//     }
//     for (int k = 0; k < 2 * i + 1; k++)
//     {
//       cout << "*";
//     }
//     cout << endl;
//   }
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int bil1;
//   int bil2;
//   int terbesar;
//   cin >> bil1;
//   cin >> bil2;
//   if (bil1 > bil2)
//   {
//     terbesar = bil1;
//   }
//   else if (bil1 < bil2)
//   {
//     terbesar = bil2;
//   }
//   cout << terbesar << " adalah bilangan terbesar";

//   return 0;
// }

#include <iostream>
using namespace std;
int main()
{
  float uts, uas, kuis, tugas_kecil, tugas_besar;
  float nilai_akhir;
  cout << "Perhitungan nilai akhir mata kuliah\n\n";
  cout << "Masukan nilai UTS : ";
  cin >> uts;
  cout << "Masukan nilai UAS : ";
  cin >> uas;
  cout << "Masukan nilai TUGAS BESAR : ";
  cin >> tugas_besar;
  cout << "Masukan nilai TUGAS KECIL : ";
  cin >> tugas_kecil;
  cout << "Masukan nilai KUIS : ";
  cin >> kuis;

  nilai_akhir = (uts * 0.25) + (uas * 0.25) + (kuis * 0.15) + (tugas_besar * 0.2) + (tugas_kecil * 0.15);
  if (nilai_akhir >= 80)
  {
    cout << "Nilai adalah A\n";
    cout << "Anda LULUS";
  }
  else if (nilai_akhir >= 70)
  {
    cout << "Nilai adalah B\n";
    cout << "Anda LULUS";
  }
  else if (nilai_akhir >= 60)
  {
    cout << "Nilai adalah C\n";
    cout << "Anda LULUS";
  }
  else if (nilai_akhir >= 50)
  {
    cout << "Nilai adalah D\n";
    cout << "Anda TIDAK LULUS";
  }
  else
  {
    cout << "Nilai adalah E\n";
    cout << "Anda TIDAK LULUS";
  }

  return 0;
}