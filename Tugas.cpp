// // Studi kasus 3
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int a, terkecil, terbesar, ganjil = 0, genap = 0;
//   cout << "Masukan 5 angka : ";
//   for (int i = 0; i < 5; i++)
//   {
//     cin >> a;
//     // mengisi integer terkecil dan terbesar dengan angka inputan pertama
//     if (i == 0)
//     {
//       terkecil = a;
//       terbesar = a;
//     }
//     // menentukan angka yang di inputkan genap atau ganjil
//     if (a % 2 == 0)
//     {
//       genap += 1;
//     }
//     else if (a % 2 == 1)
//     {
//       ganjil += 1;
//     }
//     // mengcek ulang angka terkecil dan terbesar dalam setiap perulangan
//     if (a < terkecil)
//     {
//       terkecil = a;
//     }
//     else if (a > terbesar)
//     {
//       terbesar = a;
//     }
//   }
//   cout << "Nilai terkecil adalah : " << terkecil;
//   cout << "\nNilai terbesar adalah : " << terbesar;
//   cout << "\nJumlah angka genap yang muncul : " << genap;
//   cout << "\nJumlah angka ganjil yang muncul : " << ganjil;

//   return 0;
// }

// // Studi kasus 4
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int a;
//   cout << "Masukan angka : ";
//   cin >> a;
//   while (a > 2)
//   {
//     if (a % 2 == 0)
//     {
//       a = a * 1;
//     }
//     else if (a % 2 == 1)
//     {
//       a = (a + 1);
//     }
//     cout << a << " ";
//     a = a / 2;
//   }
//   return 0;
// }

// // Studi kasus 5

// #include <iostream>
// using namespace std;
// int main()
// {
//   int batasAtas, batasBawah, status, i;

//   cout << "Masukkan batas atas pencarian bil prima :";
//   cin >> batasAtas;

//   batasBawah = 2;
//   do
//   {
//     status = 0;
//     for (i = 2; i < batasBawah; i++)
//       if (batasBawah % i == 0)
//       {
//         status++;
//         break;
//       }
//     if (status == 0)
//       cout << batasBawah << ", ";
//     batasBawah++;
//   } while (batasBawah <= batasAtas);
//   cout << endl;

//   return 0;
// }

// Latihan 1
// #include <iostream>
// using namespace std;
// int main()
// {
//   float nilai[5];
//   int sum = 0, rerata = 0, totalAtas = 0;

//   cout << "= Program Nilai Mahasiswa ==\n";
//   cout << "Masukan Nilai Mahasiswa\n";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << "Nilai ke-" << i + 1 << " : ";
//     cin >> nilai[i];
//     sum = sum + nilai[i];
//   }

//   cout << "\n= Daftar Nilai Seluruh Mahasiswa ==\n";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << "\nNilai ke-" << i + 1 << " : " << nilai[i];
//   }
//   cout << "\n= Detail Nilai Seluruh Mahasiswa ==\n";
//   rerata = sum / 5;
//   cout << "\nTotal Nilai : " << sum << endl;
//   cout << "\nNilai Rata - rata : " << rerata << endl;

//   for (int i = 0; i < 5; i++)
//   {
//     if (nilai[i] > rerata)
//     {
//       cout << "\nNilai diatas Rata-rata : " << nilai[i];
//       totalAtas++;
//     }
//   }
//   cout << "\nJumlah Nilai diatas Rata-rata : " << totalAtas;
// }

// Latihan 2
// #include <iostream>
// using namespace std;
// int main()
// {
//   float nilai[5];
//   float temp;

//   cout << "= Program Nilai Mahasiswa ==\n";
//   cout << "Masukan Nilai Mahasiswa\n";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << "Nilai ke-" << i + 1 << " : ";
//     cin >> nilai[i];
//   }

//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = i + 1; j < 5; j++)
//     {
//       if (nilai[i] > nilai[j])
//       {
//         temp = nilai[i];
//         nilai[i] = nilai[j];
//         nilai[j] = temp;
//       }
//     }
//   }

//   cout << "\nNilai Terbesar Mahasiswa = " << nilai[4];
//   cout << "\nHanya menampilkan 2 Nilai Terendah";
//   cout << "\nNilai ke - 1 = " << nilai[0];
//   cout << "\nNilai ke - 2 = " << nilai[1];
// }

// Latihan 3
// #include <iostream>
// using namespace std;
// int main()
// {
//   float nilai[5];
//   float temp, sum = 0, rerata = 0;

//   cout << "= Program Nilai Mahasiswa ==\n";
//   cout << "Masukan Nilai Mahasiswa\n";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << "Nilai ke-" << i + 1 << " : ";
//     cin >> nilai[i];
//     sum = sum + nilai[i];
//   }

//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = i + 1; j < 5; j++)
//     {
//       if (nilai[i] > nilai[j])
//       {
//         temp = nilai[i];
//         nilai[i] = nilai[j];
//         nilai[j] = temp;
//       }
//     }
//   }
//   cout << "\nNilai Terkecil berada di atas dan terbesar berada di bawah";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << "\nNilai = " << nilai[i];
//   }
//   rerata = sum / 5;
//   cout << "\nJumlah Nilai Total = " << sum;
//   cout << "\nNilai Rata-rata = " << rerata;
// }

// Latihan 4
// #include <iostream>
// using namespace std;
// int main()
// {
//   int n, hapus, found, sum = 0;

//   cout << "= PENGHAPUSAN DATA PADA ARRAY =\n";
//   cout << "===============================\n";
//   cout << "Jumlah Mahasiswa = ";
//   cin >> n;
//   float nilai[n];
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Nilai ke-" << i + 1 << " = ";
//     cin >> nilai[i];
//   }

//   cout << "\n= Seluruh Nilai Mahasiswa =\n";
//   for (int i = 0; i < 5; i++)
//   {
//     cout << "\nNilai ke-" << i + 1 << " : " << nilai[i];
//   }
//   cout << "\nNilai Yang Akan Dihapus =  ";
//   cin >> hapus;
//   cout << "\nNilai " << hapus << " Berhasil Dihapus";
//   for (int i = 0; i < n; i++)
//   {
//     if (nilai[i] == hapus)
//     {
//       for (int j = i; j < (n - 1); j++)
//         nilai[j] = nilai[j + 1];
//       found = 1;
//       i--;
//       n--;
//       sum++;
//     }
//   }
//   cout << "\nNilai Yang Di Hapus Sebanyak : " << sum << " Nilai";
//   if (found == 0)
//     cout << "\n\nNilai Tidak Ada Di Dalam Array!";
//   else
//   {
//     cout << "\n\nNilai Terbaru :\n";
//     for (int i = 0; i < n; i++)
//       cout << "Nilai = " << nilai[i] << endl;
//   }
// }

// Latihan 5
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   string nama;
//   float uts, uas, rerata = 0;
//   cout << "Masukan Jumlah Mahasiswa : ";
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     cout << "\nData mahasiswa ke-" << i + 1 << endl;
//     cout << "Masukan Nama Mahasiswa : ";
//     cin >> nama;
//     cout << "Masukan Nilai UTS : ";
//     cin >> uts;
//     cout << "Masukan Nilai UAS : ";
//     cin >> uas;
//     cout << "Total Nilai : " << uts + uas << endl;
//     rerata = (uts + uas) / 2;
//     cout << "Nilai Rata-rata : " << rerata << endl;
//     if (rerata > 80)
//     {
//       cout << "Grade : A" << endl;
//     }
//     else if (rerata > 70)
//     {
//       cout << "Grade : B" << endl;
//     }
//     else if (rerata > 60)
//     {
//       cout << "Grade : C" << endl;
//     }
//     else if (rerata < 60)
//     {
//       cout << "Grade : D" << endl;
//     }
//   }
// }

// #include <iostream>
// using namespace std;
// int Data[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

// int kokbisa(int apaini, int apaitu)
// {
//   apaini -= apaitu;
//   return apaini;
// }

// int main()
// {
//   int apaini = 0;
//   int dataku[9] = {2, 3, 5, 6, 1, 4, 9, 10, 7};
//   for (int i = 0; i < 10; i++)
//   {
//     apaini += Data[i];
//   }
//   for (int i = 0; i < 9; i++)
//   {
//     apaini = kokbisa(apaini, dataku[i]);
//   }
//   cout << apaini << endl;
//   return 0;
// }

// #include <iostream>
// using namespace std;
// struct mahasiswa
// {
//   string nim;
//   string nama;
//   string mk;
//   int sks;
//   string hm;
//   float ksm;
// };
// void input(mahasiswa mhs[], int n)
// {
//   cout << "===================================\n";
//   cout << "\tINPUT DATA MAHASISWA\n";
//   cout << "===================================\n";
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Input Data ke-" << i + 1 << endl;
//     cout << "Masukan NIM         : ";
//     cin >> mhs[i].nim;
//     cin.ignore();
//     cout << "Masukan Nama        : ";
//     getline(cin, mhs[i].nama);
//     cout << "Masukan Mata Kuliah : ";
//     getline(cin, mhs[i].mk);
//     cout << "Masukan SKS         : ";
//     cin >> mhs[i].sks;
//     cin.ignore();
//     cout << "Masukan Huruf Mutu  : ";
//     cin >> mhs[i].hm;
//     cin.ignore();
//   }
// }

// float getKSM(string hm, int sks)
// {
//   float ksm;
//   if (hm == "A")
//   {
//     ksm = 4 * sks;
//   }
//   else if (hm == "AB")
//   {
//     ksm = 3.5 * sks;
//   }
//   else if (hm == "B")
//   {
//     ksm = 3 * sks;
//   }
//   else if (hm == "BC")
//   {
//     ksm = 2.5 * sks;
//   }
//   else if (hm == "C")
//   {
//     ksm = 2 * sks;
//   }
//   else if (hm == "D")
//   {
//     ksm = 1 * sks;
//   }
//   else if (hm == "E")
//   {
//     ksm = 0 * sks;
//   }
//   return ksm;
// }

// void output(mahasiswa mhs[], int n)
// {
//   cout << "=====================================\n";
//   cout << "\tOUTPUT DATA MAHASISWA\n";
//   cout << "=====================================\n";
//   for (int i = 0; i < n; i++)
//   {
//     mhs[i].ksm = getKSM(mhs[i].hm, mhs[i].sks);
//     cout << "Data ke-" << i + 1 << endl;
//     cout << "NIM          : " << mhs[i].nim << endl;
//     cout << "Nama         : " << mhs[i].nama << endl;
//     cout << "Mata Kuliah  : " << mhs[i].mk << endl;
//     cout << "SKS          : " << mhs[i].sks << endl;
//     cout << "Huruf Mutu   : " << mhs[i].hm << endl;
//     cout << "KSM          : " << mhs[i].ksm << endl;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     float ksm = 0;
//     int sks = 0;
//     for (int j = i + 1; j < n; j++)
//     {
//       if (mhs[i].nim == mhs[j].nim)
//       {
//         ksm += mhs[j].ksm + mhs[i].ksm;
//         sks += mhs[j].sks + mhs[i].sks;
//       }
//     }
//     cout << "Total sks mahasiswa " << mhs[i].nim << "  :  " << sks << endl;
//     cout << "Total ksm mahasiswa " << mhs[i].nim << "  :  " << ksm << endl;
//   }
// }

// void searching(mahasiswa mhs[], int n)
// {
//   string nimGuess;
//   char key = 'y';
//   output(mhs, n);
//   while (key != 'n')
//   {
//     bool ketemu = false;
//     float ksm = 0;
//     int sks = 0;
//     cout << "Masukan NIM yang ingin dicari : ";
//     cin >> nimGuess;
//     for (int i = 0; i < n; i++)
//     {
//       if (mhs[i].nim == nimGuess)
//       {
//         ketemu = true;
//         ksm += mhs[i].ksm;
//         sks += mhs[i].sks;
//       }
//     }
//     float rerata = ksm / sks;
//     if (true)
//     {
//       cout << "NIM " << nimGuess << " Ditemuka dengan NR : " << rerata << endl;
//     }
//     else
//     {
//       cout << "NIM " << nimGuess << " Tidak Ditemukan" << endl;
//     }
//     cout << "Cari Lagi? (y/n) : ";
//     cin >> key;
//   }
//   cout << "Terima Kasih :o";
// }

// int main()
// {
//   int n;
//   cin >> n;
//   mahasiswa mhs[n];
//   input(mhs, n);
//   searching(mhs, n);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// struct mahasiswa
// {
//   string nim;
//   string nama;
//   string mk;
//   int sks;
//   string hm;
// };
// void input(mahasiswa mhs[], int n)
// {
//   cout << "===================================\n";
//   cout << "\tINPUT DATA MAHASISWA\n";
//   cout << "===================================\n";
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Input Data ke-" << i + 1 << endl;
//     cout << "Masukan NIM         : ";
//     cin >> mhs[i].nim;
//     cin.ignore();
//     cout << "Masukan Nama        : ";
//     getline(cin, mhs[i].nama);
//     cout << "Masukan Mata Kuliah : ";
//     getline(cin, mhs[i].mk);
//     cout << "Masukan SKS         : ";
//     cin >> mhs[i].sks;
//     cin.ignore();
//     cout << "Masukan Huruf Mutu  : ";
//     cin >> mhs[i].hm;
//     cin.ignore();
//   }
// }

// void output(mahasiswa mhs[], int n)
// {
//   cout << "=====================================\n";
//   cout << "\tOUTPUT DATA MAHASISWA\n";
//   cout << "=====================================\n";
//   for (int i = 0; i < n; i++)
//   {

//     cout << "Data ke-" << i + 1 << endl;
//     cout << "NIM          : " << mhs[i].nim << endl;
//     cout << "Nama         : " << mhs[i].nama << endl;
//     cout << "Mata Kuliah  : " << mhs[i].mk << endl;
//     cout << "SKS          : " << mhs[i].sks << endl;
//     cout << "Huruf Mutu   : " << mhs[i].hm << endl;
//   }
// }

// void searching(mahasiswa mhs[], int n)
// {
//   string nimGuess;
//   char key = 'y';
//   output(mhs, n);
//   while (key != 'n')
//   {
//     cout << "Masukan NIM yang ingin dicari : ";
//     cin >> nimGuess;

//     for (int i = 0; i < n; i++)
//     {
//       if (mhs[i].nim == nimGuess)
//       {
//         cout << "NIM " << nimGuess << " Ditemuka dengan Nama : " << mhs[i].nama << endl;
//       }
//     }
//     cout << "Cari Lagi? (y/n) : ";
//     cin >> key;
//   }
// }

// int main()
// {
//   int n;
//   cout << "Masukan Jumlah Data : ";
//   cin >> n;
//   mahasiswa mhs[n];
//   input(mhs, n);
//   searching(mhs, n);
//   return 0;
// }

#include <iostream>
using namespace std;

int main()
{
  cout << "hell";
  return 0;
}