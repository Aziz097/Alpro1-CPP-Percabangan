/* alpro minggu 1 & 2 */
/****************************************************************************************************************/
/* review percabangan dan perulangan*/

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int p, l, luas;
//   cout << "Masukan panjang (m) : ";
//   cin >> p;
//   cout << "Masukan lebar (m) : ";
//   cin >> l;
//   luas = p * l;
//   cout << "Luas persegi panjang adalah : " << luas << " m2" << endl;

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   float uts, uas, tugas;
//   float nilai_akhir;
//   cout << "Perhitungan nilai akhir mata kuliah\n\n";
//   cout << "Masukan nilai UTS : ";
//   cin >> uts;
//   cout << "Masukan nilai UAS : ";
//   cin >> uas;
//   cout << "Masukan nilai TUGAS : ";
//   cin >> tugas;
//   cout << "Nilai Kehaduran : ";
//   float kehadiran;
//   cin >> kehadiran;
//   nilai_akhir = (uts * 0.3) + (uas * 0.35) + (tugas * 0.25) + (kehadiran * 0.1);
//   // nilai_akhir = (uts * 0.3) + (uas * 0.35) + (tugas * 0.25);
//   cout << "\nNilai Akhir : " << nilai_akhir;

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   float uts, uas, tugas;
//   float nilai_akhir;
//   cout << "Perhitungan nilai akhir mata kuliah\n\n";
//   cout << "Masukan nilai UTS : ";
//   cin >> uts;
//   cout << "Masukan nilai UAS : ";
//   cin >> uas;
//   cout << "Masukan nilai TUGAS : ";
//   cin >> tugas;
//   cout << "Nilai Kehadiran : ";
//   float kehadiran;
//   cin >> kehadiran;
//   nilai_akhir = (uts * 0.3) + (uas * 0.35) + (tugas * 0.25) + (kehadiran * 0.1);
//   // nilai_akhir = (uts * 0.3) + (uas * 0.35) + (tugas * 0.25);
//   cout << "\nNilai Akhir : " << nilai_akhir;
//   if (nilai_akhir >= 80)
//   {
//     cout << "\nIndex : A";
//   }
//   else if (nilai_akhir >= 72 && nilai_akhir < 80)
//   {
//     cout << "\nIndex : AB";
//   }
//   else if (nilai_akhir >= 65 && nilai_akhir < 72)
//   {
//     cout << "\nIndex : B";
//   }
//   else if (nilai_akhir >= 57 && nilai_akhir < 65)
//   {
//     cout << "\nIndex : BC";
//   }
//   else if (nilai_akhir >= 50 && nilai_akhir < 57)
//   {
//     cout << "\nIndex : C";
//   }
//   else if (nilai_akhir >= 40 && nilai_akhir < 50)
//   {
//     cout << "\nIndex : D";
//   }
//   else if (nilai_akhir >= 0 && nilai_akhir < 40)
//   {
//     cout << "\nIndex : E ";
//   }
//   else
//   {
//     cout << "\nIndex tidak valid";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int ans[10];
//   float mean;
//   int sum = 0;
//   cout << "Masukan 10 bilangan : ";
//   for (int i = 0; i < 10; i++)
//   {
//     cin >> ans[i];
//   }
//   for (int i = 0; i < 10; i++)
//   {
//     sum += ans[i];
//   }
//   mean = sum / 10;
//   cout << "Rata-rata nya adalah : " << mean;
//   return 0;
// }

/*PR***************************************************/

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   float a, b;
//   char aritmatika;
//   cout << "Masukan angka pertama : ";
//   cin >> a;
//   cout << "Masukan angka kedua : ";
//   cin >> b;
//   cout << "\n1.Penjumblahan \n2.Pengurangan \n3.Perkalian \n4.Pembagian \nPilih oprasi aritmatika : ";
//   cin >> aritmatika;

//   switch (aritmatika)
//   {
//   case '1':
//     cout << "\nHasil dari " << a << " + " << b << " = " << a + b;
//     break;
//   case '2':
//     cout << "\nHasil dari " << a << " - " << b << " = " << a - b;
//     break;
//   case '3':
//     cout << "\nHasil dari " << a << " * " << b << " = " << a * b;
//     break;
//   case '4':
//     cout << "\nHasil dari " << a << " / " << b << " = " << a / b;
//     break;
//   default:
//     cout << "\nKesalahan memasukan pilihan";
//     break;
//   }

//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int a, b, min, max;
//   cout << "Masukan jumlah angka yang akan dimasukan : ";
//   cin >> b;
//   cout << "Silakan masukan angka : ";
//   cin >> a;
//   min = a;
//   max = a;
//   for (int i = 1; i < b; i++)
//   {
//     cin >> a;
//     if (a < min)
//     {
//       min = a;
//     }
//     if (a > max)
//     {
//       max = a;
//     }
//   }
//   cout << " \nNilai terkecil adalah : " << min;
//   cout << " \nNilai terbesar adalah : " << max;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int a, b, ganjil = 0, genap = 0;
//   cout << "Masukan jumlah angka yang ingin dimasukan : ";
//   cin >> a;
//   cout << "Silakan masukan angka : ";
//   for (int i = 1; i <= a; i++)
//   {
//     cin >> b;
//     if (b % 2 == 0)
//     {
//       genap += 1;
//     }
//     else
//     {
//       ganjil += 1;
//     }
//   }
//   cout << "Jumlah angka genap yang muncul : " << genap;
//   cout << "\nJumlah angka ganjil yang muncul : " << ganjil;
//   return 0;
// }

/* alpro kuis */
/****************************************************************************************************************/
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n;
//   cout << "Masukan Jumlah Bilangan Bulat Yang ingin Dimasukan = ";
//   cin >> n;
//   int nilai[n];
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Masukan Bilangan Bulat Ke-" << i + 1 << " = \n";
//     cin >> nilai[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (nilai[i] % 2 == 0)
//     {
//       cout << nilai[i] << " Adalah bilangan genap " << endl;
//     }
//     else if (nilai[i] % 2 != 0)
//     {
//       cout << nilai[i] << " Adalah bilangan ganjil " << endl;
//     }
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// struct spek
// {
//   string merk;
//   float ukuranLayar;
//   int ram;
//   int storage;
//   int tahunBeli;
// };

// int main()
// {
//   cout < "Masukan Jumlah Laptop yang ingin diinput datanya : ";
//   int n;
//   cin >> n;
//   spek laptop[n];
//   cout << "===============================================" << endl;
//   cout << "Input Data Laptop" << endl;
//   cout << "===============================================" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Input Data Laptop ke-" << i + 1 << endl;
//     cout << "Merk Laptop                    = ";
//     cin >> laptop[i].merk;
//     cout << "Ukuran Layar Laptop dalam inci = ";
//     cin >> laptop[i].ukuranLayar;
//     cout << "Ram Laptop                     = ";
//     cin >> laptop[i].ram;
//     cout << "Kapasitas Storage Laptop       = ";
//     cin >> laptop[i].storage;
//     cout << "Tahun Beli Laptop              = ";
//     cin >> laptop[i].tahunBeli;
//   }
//   cout << "==============================================" << endl;
//   cout << "Output Data Laptop LENOVO diatas tahun 2020" << endl;
//   cout << "==============================================" << endl;
//   for (int i = 0; i < n; i++)
//   {
//     if (laptop[i].merk == "lenovo" || laptop[i].merk == "Lenovo" || laptop[i].merk == "LENOVO")
//     {
//       if (laptop[i].tahunBeli > 2020)
//       {
//         cout << "Merk Laptop                 = " << laptop[i].merk << endl;
//         cout << "Ukuran Layar Laptop         = " << laptop[i].ukuranLayar << endl;
//         cout << "Ram Laptop                  = " << laptop[i].ram << endl;
//         cout << "Kapasitas Storage Laptop    = " << laptop[i].storage << endl;
//         cout << "Tahun Beli Laptop           = " << laptop[i].tahunBeli << endl;
//         cout << endl;
//       }
//     }
//   }
// }

// #include <iostream>
// using namespace std;
// struct format
// {
//   string mode;
//   int a;
//   int b;
// };

// int deret(int n)
// {
//   if (n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n + deret(n - 1);
//   }
// }

// int pangkat(int n, int m)
// {
//   int temp = n;
//   for (int i = 1; i < m; i++)
//   {
//     temp *= n;
//   }
//   return temp;
// }

// void input(format rek[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     cin >> rek[i].mode;
//     if (rek[i].mode == "deret")
//     {
//       cin >> rek[i].a;
//     }
//     else if (rek[i].mode == "pangkat")
//     {
//       cin >> rek[i].a >> rek[i].b;
//     }
//   }
// }

// void output(format rek[], int n)
// {
//   for (int i = 0; i < n; i++)
//   {
//     if (rek[i].mode == "deret")
//     {
//       cout << deret(rek[i].a);
//       cout << endl;
//     }
//     else if (rek[i].mode == "pangkat")
//     {
//       cout << pangkat(rek[i].a, rek[i].b);
//       cout << endl;
//     }
//   }
// }

// int main()
// {
//   int n;
//   cin >> n;
//   format rek[n];
//   input(rek, n);
//   output(rek, n);
// }

// #include <iostream>
// using namespace std;

// int rek(int n)
// {
//   int reverse = 0, reminder;

//   if (n != 0)
//   {
//     reminder = n % 10;
//     reverse = reverse * 10 + reminder;
//     return reverse & rek(n / 10);
//   }
// }

// int main()
// {
//   int n = 89;
//   cout << rek;
//   // int n, reverse = 0, reminder;
//   // cin >> n;
//   // while (n != 0)
//   // {
//   //   reminder = n % 10;
//   //   reverse = reverse * 10 + reminder;
//   //   n /= 10;
//   // }
//   // cout << reverse;
// }

// #include <iostream>
// using namespace std;

// // Proses Program
// // didapat n = 5
// // pada basis yang ada dengan kondisi n == 0 dan 1 maka tidak memasukin basis tersebut
// // jadi menjalankan aksi pada else
// // return 7*f(5-1)-6*f(5-2)
// // return 7*f(4-1)-6*f(3-2)
// // return 7*f(3-1)-6*f(1-1)
// // return 7*f(2-1)-6*f(0)
// // return 7*f(1-1=0)

// /*
//   refkursif(7) = 7 * rekursif(6) - 6 * rekursif(5) = 16079
//   refkursif(6) = 7 * rekursif(5) - 6 * rekursif(3) = 2303
//   refkursif(5) = 7
//   refkursif(4) = 7 * rekursif(3) - 6 * rekursif(2) = -2322
//   refkursif(3) = 7 * rekursif(2) - 6 * rekursif(1) = -378
//   refkursif(2) = 7 * rekursif(1) - 6 * rekursif(0) = -54
//   refkursif(1) = 0
//   refkursif(0) = 9
// */

// int rekursif(int n)
// {
//   if (n == 0)
//   {
//     return 9; // basis pada n == 0 mengembalikan nilai 9 karena angka terakhir kedua pada nim saya 9
//   }
//   else if (n == 1)
//   {
//     return 0; // basis pada n == 0 mengembalikan nilai 0 karena angka terakhir ketiga pada nim saya 0
//   }
//   else if (n == 5)
//   {
//     return 7;
//   }
//   else
//   {
//     return 7 * rekursif(n - 1) - 6 * rekursif(n - 2); // perulangan rekursif  yang sesuai pada soal
//   }
// }

// int main()
// {
//   int n = 5;           // deklarasi variabel dengan nilai yang di ingin kan karena akhir nim saya ganjil maka  nilai n = 5
//   cout << rekursif(n); // pemanggilan fungsi rekursif menggunankan cout karena ini fungsi bukan prosedur
//   return 0;
// }

// #include <iostream>
// using namespace std;

// void rekursif(int n, int m)
// {
//   if (m <= 5)
//   {
//     if (m == 5)
//     {
//       cout << n;
//     }
//     else
//     {
//       cout << n << ",";
//     }
//   }
//   rekursif(n + 3, m + 1);
// }

// int main()
// {
//   int n = 3, m = 1;
//   rekursif(n, m);
//   return 0;
// }

#include <iostream>
using namespace std;

int rek(int m, int n)
{
  if (n == 1)
  {
    return 1;
  }
  else if (n % 2 == 0)
  {
    return m + rek(m - 1, n / 2);
  }
  else
  {
    return rek(m, n - 1);
  }
}

int main()
{
  int m, n;
  cin >> m >> n;
  cout << rek(m, n);
  return 0;
}
