// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   int a = 1;
//   cin >> n;
//   int batas = 2 * n;
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Tek kotek kotek kotek anak ayam turun " << a << endl;
//     int b = a * 2;
//     a = a * 2;
//     if (b > batas)
//     {
//       cout << "Tek kotek kotek kotek belah diri mati semua";
//       break;
//     }
//     else if (b <= batas)
//     {
//       cout << "Tek kotek kotek kotek belah diri jadinya " << b << endl;
//     }
//   }
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n, max, min;
//   cin >> n;
//   cin >> min >> max;
//   int umur[n];
//   int output[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> umur[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     if (umur[i] > output[i])
//     {
//       if (umur[i] >= min && umur[i] <= max)
//       {
//         output[i] = umur[i];
//       }
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (output[i] > output[j])
//       {
//         int temp = output[i];
//         output[i] = output[j];
//         output[j] = temp;
//       }
//     }
//   }
//   cout << output[n];
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   cin >> n;
//   for (int i = 0; i < n; i++)
//   {
//     if (i == n - 1)
//     {
//       for (int i = 0; i < n - 1; i++)
//       {
//         cout << "*";
//         if (i == n - 2)
//         {
//           break;
//         }
//       }
//     }
//     cout << "*" << endl;
//   }
//   return 0;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//   int n, min, max, umur, output = -1;
//   cin >> n >> min >> max;
//   for (int i = 1; i <= n; i++)
//   {
//     cin >> umur;
//     if (umur >= min && umur <= max)
//     {
//       output <= umur ? output = umur : output = output;
//     }

//   }
//   cout << output << endl;
// }

// #include <iostream>

// using namespace std;

// int main()
// {
//   int n, a;
//   int output = 0;
//   cin >> n >> a;
//   string peserta[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> peserta[i];
//   }
//   for (int i = n - 1; i >= 0; i--)
//   {
//     for (int j = i - 1; j >= 0; j--)
//     {
//       cout << peserta[i] << " Vs " << peserta[j] << endl;
//       output += a;
//     }
//   }
//   cout << output << endl;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
//   int a, n, total = 0;
//   cin >> a >> n;
//   for (int i = 0; i < n; i++)
//   {
//     int temp;
//     cin >> temp;
//     total = total + temp;
//   }
//   while (true)
//   {
//     if (total * n > a)
//     {
//       total--;
//       break;
//     }
//     else if (total * n == n)
//     {
//       break;
//     }
//     else
//     {
//       total++;
//     }
//   }
//   cout << total << endl;
// }

// PRAKTIKUM MINGGU 2 (SUB PROGRAM)
// #include <iostream>
// using namespace std;

// float luasBelahKetupat(float diagonal1, float diagonal2)
// {
//   float luas = diagonal1 * diagonal2 / 2;
//   return luas;
// }
// float luasLingkaran(float jariJari)
// {
//   float luas = 3.14159265358979323846 * jariJari * jariJari;
//   return luas;
// }
// float trapesium(float alas, float atas, float tinggi)
// {
//   float luas = (alas + atas) * tinggi / 2;
//   return luas;
// }

// int main(int argc, char const *argv[])
// {
//   string rumus;
//   cin >> rumus;
//   if (rumus == "BelahKetupat")
//   {
//     float diagonal1, diagonal2;
//     cin >> diagonal1 >> diagonal2;
//     cout << luasBelahKetupat(diagonal1, diagonal2);
//   }
//   else if (rumus == "Lingkaran")
//   {
//     float jariJari;
//     cin >> jariJari;
//     cout << luasLingkaran(jariJari);
//   }
//   else if (rumus == "Trapesium")
//   {
//     float alas, atas, tinggi;
//     cin >> alas >> atas >> tinggi;
//     cout << trapesium(alas, atas, tinggi);
//   }
//   else{
//     cout<<"Pilihan salah!";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// void ketuaOP(int n)
// {
//   int umur[n],rerata = 0;
//   for (int i = 0; i < n; i++)
//   {
//     cin >> umur[i];
//     rerata += umur[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = i + 1; j < n; j++)
//     {
//       if (umur[i] > umur[j])
//       {
//         int temp = umur[i];
//         umur[i] = umur[j];
//         umur[j] = temp;
//       }
//     }
//   }
//   cout << umur[n - 1] << endl;
//   cout << rerata / n << endl;
// }
// int main()
// {
//   int n;
//   cin >> n;
//   ketuaOP(n);
//   return 0;
// }

// #include <iostream>
// using namespace std;
// void gajelas();
// int main()
// {
//   gajelas();
// }

// void gajelas()
// {
//   int temp = 0, x, xn, y, yn;
//   cin >> x >> xn >> y >> yn;
//   while (true)
//   {
//     if (temp % x == xn && temp % y == yn)
//     {
//       cout << temp << endl;
//       cout << temp * 12000 * 2 << endl;
//       break;
//     }
//     temp++;
//   }
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   for (int i = 0; i < 5; i++)
//   {
//     for (int j = i + 1; j < 5; j++)
//     {
//       if (arr[i] > arr[j])
//       {
//         temp = arr[i];
//         arr[i] = arr[j];
//         arr[j] = temp;
//       }
//     }
//   }
//   if (arr[n - 1] == arr[n - 2])
//   {
//     cout << "Semua nilai sama";
//   }
//   else
//   {
//     cout << arr[n - 2];
//   }

//   return 0;
// }

// program menghitung huruf vokal
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   string kata;
//   cin >> kata;
//   int a = 0;
//   for (int j = 0; j < kata.length(); j++)
//   {
//     if (kata[j] == 'a')
//     {
//       a++;
//     }
//     else if (kata[j] == 'i')
//     {
//       a++;
//     }
//     else if (kata[j] == 'u')
//     {
//       a++;
//     }
//     else if (kata[j] == 'e')
//     {
//       a++;
//     }
//     else if (kata[j] == 'o')
//     {
//       a++;
//     }
//   }
//   cout << a << endl;
// }

// program pengurangan
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
// int temp = 0;
// for (int i = 0; i < n; i++)
// {
//   temp -= arr[i];
// }
// cout << temp << endl;
// }
// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   cin >> n;
//   int arr1[n];
//   int arr2[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr1[i];
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr2[i];
//   }
//   int arr3[n];
//   for (int i = 0; i < n; i++)
//   {
//     arr3[i] = arr1[i] + arr2[i];
//   }
//   for ( int i = 0; i <n; i++)
//   {
//     cout << arr3[i] << " ";
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;
// int main(int argc, char const *argv[])
// {
//   int n;
//   int max = 0;
//   cin >> n;
//   int arr[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> arr[i];
//   }
//   // menentukan nilai maksimal ke 2
//   for (int i = 0; i < n; i++)
//   {
//     if (arr[i] > max)
//     {
//       max = arr[i];
//     }
//   }
//   return 0;
// }

// #include <iostream>
// using namespace std;

// void anjay(int n, int m)
// {
//   int anjay1[n][m];
//   int anjay2[n][m];
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> anjay1[i][j];
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cin >> anjay2[i][j];
//     }
//   }
//   for (int i = 0; i < n; i++)
//   {
//     for (int j = 0; j < m; j++)
//     {
//       cout << anjay1[i][j] + anjay2[i][j] << " ";
//     }
//     cout << endl;
//   }
// }

// int main()
// {
//   int n, m;
//   cin >> n >> m;
//   anjay(n, m);
// }

// #include <iostream>
// using namespace std;
// struct desk
// {
//   string jenis;
//   string tipe;
//   int ram;
//   int storage;
//   int kamera;
//   int baterai;
// };
// int main(int argc, char const *argv[])
// {
//   desk hp;
//   cin >> hp.jenis >> hp.tipe >> hp.ram >> hp.storage >> hp.kamera >> hp.baterai;
//   cout << "Handphone terbaru " << hp.jenis << " " << hp.tipe << ", dengan spesifikasi Ram " << hp.ram << " Gb, Storage  " << hp.storage << " Gb, kamera " << hp.kamera << " Mb, dan batrai " << hp.baterai << " Mah." << endl;
//   // Handphone terbaru Samsung M10, dengan spesifikasi Ram 6 Gb, Storage 64 Gb, kamera 16 Mb, dan batrai 4000 Mah.
//   // Handphone terbaru Samsung M10 dengan spesifikasi Ram 6 Gb, Storage  64 Gb, kamera 16 Mb, dan baterai sebesar 4000 Mah.
//   return 0;
// }

// #include <iostream>
// using namespace std;
// struct Data
// {
//   string merk;
//   string tipe;
//   int tahun;
//   string warna;
//   int harga;
// };
// int main()
// {
//   int n;
//   cin >> n;
//   Data mobil[n];
//   for (int i = 0; i < n; i++)
//   {
//     cin >> mobil[i].merk >> mobil[i].tipe >> mobil[i].tahun >> mobil[i].warna;
//   }
//   for (int i = 0; i < n; i++)
//   {
//     cout << "Merk mobil : " << mobil[i].merk << endl;
//     cout << "Tipe mobil : " << mobil[i].tipe << endl;
//     cout << "Tahun keluaran : " << mobil[i].tahun << endl;
//     cout << "Warna mobil : " << mobil[i].warna << endl;
//   }
// }

// #include <iostream>
// using namespace std;

// int faktorial(int n)
// {
//   if (n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n * faktorial(n - 1);
//   }
// }

// int main()
// {
//   int a;
//   cin >> a;
//   cout << faktorial(a);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int faktorial(int n)
// {
//   if (n == 1)
//   {
//     return 1;
//   }
//   else
//   {
//     return n + faktorial(n - 1);
//   }
// }

// int main()
// {
//   int a;
//   cin >> a;
//   cout << faktorial(a);
//   return 0;
// }

// #include <iostream>
// using namespace std;

// int faktorial(int n)
// {
//   if (n == 1)
//   {
//     return 2;
//   }
//   else
//   {
//     return (2 * n) + faktorial(n - 1);
//   }
// }

// int main()
// {
//   int a;
//   cin >> a;
//   cout << faktorial(a);
//   return 0;
// }

#include <iostream>
using namespace std;

int fibo(int n)
{
  if (n == 1)
  {
    return 1;
  }
  else if (n == 2)
  {
    return 2;
  }
  else
  {
    return (fibo(n - 1) + fibo(n - 2));
  }
}

int main()
{
  int n;
  cin >> n;
  cout << fibo(n);
  return 0;
}
