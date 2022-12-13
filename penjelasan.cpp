#include <iostream>
#include <conio.h>
using namespace std;

void jumlah()
{
    // input baris dan kolom pada matriks 1
    cout << "Masukkan jumlah baris pada matriks 1: ";
    int baris1;
    cin >> baris1; // untuk input baris pada matriks 1
    cout << "Masukkan jumlah kolom pada matriks 1: ";
    int kolom1;
    cin >> kolom1; // untuk input kolom pada matriks 1
    cout << endl
         << endl;
    // input baris dan kolom pada matriks 2
    cout << "Masukkan jumlah baris pada matriks 2: ";
    int baris2;
    cin >> baris2; // untuk input baris pada matriks 2
    cout << "Masukkan jumlah kolom pada matriks 2: ";
    int kolom2;
    cin >> kolom2; // untuk input kolom pada matriks 2
    cout << endl
         << endl;
    // pengecekan apakah jumlah baris dan kolom pada matriks 1 dan matriks 2 sama
    if (baris1 == baris2 && kolom1 == kolom2)
    {
        // input elemen matriks 1
        int matriks1[baris1][kolom1];
        cout << "Masukkan elemen matriks 1: " << endl;
        for (int i = 0; i < baris1; i++) // untuk melooping baris pada matriks 1
        {
            for (int j = 0; j < kolom1; j++) // untuk melooping kolom pada matriks 1
            {
                cout << "Masukkan elemen matriks 1 baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
                cin >> matriks1[i][j]; // untuk input elemen matriks 1
            }
        }
        cout << endl
             << endl;
        // input elemen matriks 2
        int matriks2[baris2][kolom2];
        cout << "Masukkan elemen matriks 2: " << endl;
        for (int i = 0; i < baris2; i++) // untuk melooping baris pada matriks 2
        {
            for (int j = 0; j < kolom2; j++) // untuk melooping kolom pada matriks 2
            {
                cout << "Masukkan elemen matriks 2 baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
                cin >> matriks2[i][j]; // untuk input elemen matriks 2
            }
        }
        cout << endl
             << endl;
        // menampilkan matriks 1
        cout << "Matriks 1: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << matriks1[i][j] << " ";
                getch();
            }
            cout << endl;
        }
        cout << endl
             << endl;
        // menampilkan matriks 2
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                cout << matriks2[i][j] << " ";
                getch();
            }
            cout << endl;
        }
        cout << endl
             << endl;
        // menampilkan hasil penjumlahan matriks 1 dan matriks 2
        cout << "Hasil penjumlahan matriks 1 dan matriks 2: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {

                cout << "Hasil penjumlahan matriks 1 baris ke-" << i + 1 << " kolom ke-" << j + 1 << " yaitu " << matriks1[i][j] << " ditambahkan dengan matriks 2 baris ke-" << i + 1 << " kolom ke-" << j + 1 << " yaitu " << matriks2[i][j] << " adalah " << matriks1[i][j] + matriks2[i][j] << endl;
                getch();
                cout << endl;
            }
            cout << endl;
        }
        cout << "Maka hasilnya adalah: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {

                cout << matriks1[i][j] + matriks2[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Jumlah baris dan kolom pada matriks 1 dan matriks 2 tidak sama" << endl;
    }
}
void kurang()
{
    // input baris dan kolom pada matriks 1
    cout << "Masukkan jumlah baris pada matriks 1: ";
    int baris1;
    cin >> baris1;
    cout << "Masukkan jumlah kolom pada matriks 1: ";
    int kolom1;
    cin >> kolom1;
    cout << endl
         << endl;
    // input baris dan kolom pada matriks 2
    cout << "Masukkan jumlah baris pada matriks 2: ";
    int baris2;
    cin >> baris2;
    cout << "Masukkan jumlah kolom pada matriks 2: ";
    int kolom2;
    cin >> kolom2;
    cout << endl
         << endl;
    // pengecekan apakah jumlah baris dan kolom pada matriks 1 dan matriks 2 sama
    if (baris1 == baris2 && kolom1 == kolom2)
    {
        // input elemen matriks 1
        int matriks1[baris1][kolom1];
        cout << "Masukkan elemen matriks 1: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << "Masukkan elemen matriks 1 baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
                cin >> matriks1[i][j];
            }
        }
        cout << endl
             << endl;
        // input elemen matriks 2
        int matriks2[baris2][kolom2];
        cout << "Masukkan elemen matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                cout << "Masukkan elemen matriks 2 baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
                cin >> matriks2[i][j];
            }
        }
        cout << endl
             << endl;
        // menampilkan matrix 1
        cout << "Matriks 1: " << endl;
        for (int i = 0; i < baris1; i++) // untuk melooping baris pada matriks 1
        {
            for (int j = 0; j < kolom1; j++) // untuk melooping kolom pada matriks 1
            {
                cout << matriks1[i][j] << " ";
                getch();
            }
            cout << endl;
        }
        cout << endl
             << endl;
        // menampilkan matrix 2
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++) // untuk melooping baris pada matriks 2
        {
            for (int j = 0; j < kolom2; j++) // untuk melooping kolom pada matriks 2
            {
                cout << matriks2[i][j] << " ";
                getch();
            }
            cout << endl;
        }
        cout << endl
             << endl;
        // menampilkan hasil pengurangan matriks 1 dan matriks 2
        cout << "Hasil pengurangan matriks 1 dan matriks 2: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << "Hasil pengurangan matriks 1 baris ke-" << i + 1 << " kolom ke-" << j + 1 << " yaitu " << matriks1[i][j] << " dikurangkan dengan matriks 2 baris ke-" << i + 1 << " kolom ke-" << j + 1 << " yaitu " << matriks2[i][j] << " adalah " << matriks1[i][j] - matriks2[i][j] << endl;
                getch();
            }
            cout << endl;
        }
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << matriks1[i][j] - matriks2[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Jumlah baris dan kolom pada matriks 1 dan matriks 2 tidak sama" << endl;
    }
}
void kali()
{
    // input baris dan kolom pada matriks 1
    cout << "Masukkan jumlah baris pada matriks 1: ";
    int baris1;
    cin >> baris1;
    cout << "Masukkan jumlah kolom pada matriks 1: ";
    int kolom1;
    cin >> kolom1;
    cout << endl
         << endl;
    // input baris dan kolom pada matriks 2
    cout << "Masukkan jumlah baris pada matriks 2: ";
    int baris2;
    cin >> baris2;
    cout << "Masukkan jumlah kolom pada matriks 2: ";
    int kolom2;
    cin >> kolom2;
    cout << endl
         << endl;

    // jika jumlah kolom pada matriks 1 sama dengan jumlah baris pada matriks 2
    if (kolom1 == baris2)
    {
        // input elemen matriks 1
        int matriks1[baris1][kolom1];
        cout << "Masukkan elemen matriks 1: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << "Masukkan elemen matriks 1 baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
                cin >> matriks1[i][j];
            }
        }
        cout << endl
             << endl;
        // input elemen matriks 2
        int matriks2[baris2][kolom2];
        cout << "Masukkan elemen matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                cout << "Masukkan elemen matriks 2 baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
                cin >> matriks2[i][j];
            }
        }
        cout << endl
             << endl;
        // menampilkan matriks 1
        cout << "Matriks 1: " << endl;
        for (int i = 0; i < baris1; i++)
        {
            for (int j = 0; j < kolom1; j++)
            {
                cout << matriks1[i][j] << " ";
                // getch();
            }
            cout << endl;
        }
        cout << endl
             << endl;
        // menampilkan matriks 2
        cout << "Matriks 2: " << endl;
        for (int i = 0; i < baris2; i++)
        {
            for (int j = 0; j < kolom2; j++)
            {
                cout << matriks2[i][j] << " ";
                // getch();
            }
            cout << endl;
        }
        cout << endl
             << endl;
        // menampilkan hasil perkalian matriks 1 dan matriks 2
        cout << "Hasil perkalian matriks 1 dan matriks 2: " << endl;
        for (int i = 0; i < baris1; i++) // untuk menghitung baris matriks 1
        {
            for (int j = 0; j < kolom2; j++) // untuk menghitung kolom matriks 2
            {
                // menghitung perkalian terlebih dahulu
                int hasil = 0;
                int hitung_kali = 0;
                // pengulangan untuk menghitung perkalian pada masing-masing anggota matriks 1 dan matriks 2
                for (int k = 0; k < kolom1; k++)
                {
                    cout << matriks1[i][k] << " X " << matriks2[k][j] << " = " << matriks1[i][k] * matriks2[k][j] << endl;
                    getch();
                }
                // pengulangan untuk menghitung penjumlahan hasil perkalian dengan menampilkan hasil perkalian dari pengulangan perkalian sebelumnya
                // tampilannya yaitu perkalian + perkalian + perkalian = hasil
                for (int k = 0; k < kolom1; k++)
                {
                    if (k == 0)
                    {
                        cout << matriks1[i][k] * matriks2[k][j];
                    }
                    else
                    {
                        cout << " + " << matriks1[i][k] * matriks2[k][j];
                    }
                    hasil = hasil + matriks1[i][k] * matriks2[k][j];
                }
                cout << " = " << hasil << endl;
                getch();

                cout << endl;
            }
            cout << endl;
        }
        // getch();
        for (int i = 0; i < baris1; i++) // untuk menghitung baris matriks 1
        {
            for (int j = 0; j < kolom2; j++) // untuk menghitung kolom matriks 2
            {
                int hasil = 0;
                for (int k = 0; k < kolom1; k++) // untuk menghitung kolom matriks 1
                {
                    hasil += matriks1[i][k] * matriks2[k][j]; // menghitung perkalian matriks 1 dan matriks 2
                }
                cout << hasil << " "; // menampilkan hasil perkalian matriks 1 dan matriks 2
                getch();
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Jumlah kolom pada matriks 1 tidak sama dengan jumlah baris pada matriks 2" << endl;
    }
}
void transpose()
{
    // input baris dan kolom pada matriks
    cout << "Masukkan jumlah baris pada matriks: ";
    int baris;
    cin >> baris;
    cout << "Masukkan jumlah kolom pada matriks: ";
    int kolom;
    cin >> kolom;
    cout << endl
         << endl;
    // input elemen matriks
    int matriks[baris][kolom];
    cout << "Masukkan elemen matriks: " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << "Masukkan elemen matriks baris ke-" << i + 1 << " kolom ke-" << j + 1 << ": ";
            cin >> matriks[i][j];
        }
    }
    cout << endl
         << endl;
    // menampilkan matriks
    cout << "Matriks: " << endl;
    for (int i = 0; i < baris; i++)
    {
        for (int j = 0; j < kolom; j++)
        {
            cout << matriks[i][j] << " ";
        }
        getch();
        cout << endl;
    }
    cout << endl
         << endl;
    // menampilkan hasil transpose matriks
    cout << "Hasil transpose matriks: " << endl;
    for (int i = 0; i < kolom; i++)
    {
        for (int j = 0; j < baris; j++)
        {
            cout << matriks[j][i] << " ";
            // getch();
        }
        getch();
        cout << endl;
    }
}

int main()
{
    int pilih;
    do
    {
        system("cls"); // fungsi system("cls") untuk membersihkan layar
        cout << "Masukkan perhitungan matriks yang akan dilakukan: " << endl;
        cout << "Baris posisinya horizontal, kolom posisinya vertikal" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Pengurangan" << endl;
        cout << "3. Perkalian" << endl;
        cout << "4. Transpose" << endl;
        cout << "5. Keluar" << endl;
        cout << endl;
        cout << "Masukkan pilihan: ";
        cin >> pilih;
        switch (pilih)
        {
        case 1:
            jumlah();
            getch(); // fungsi getch() untuk menahan layar
            break;
        case 2:
            kurang();
            getch();
            break;
        case 3:
            kali();
            getch();
            break;
        case 4:
            transpose();
            getch();
            break;
        case 5:
            cout << "Terima kasih telah menggunakan program ini" << endl;
            break;
        default:
            cout << "Pilihan tidak tersedia" << endl;
            break;
        }
    } while (pilih != 5);
    return 0;
}