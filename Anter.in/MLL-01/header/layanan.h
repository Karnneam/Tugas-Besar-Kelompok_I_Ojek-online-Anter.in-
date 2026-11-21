#ifndef HUBUNGANLAYANAN_H_INCLUDED
#define HUBUNGANLAYANAN_H_INCLUDED
#include "penumpang.h"
#include <string>
#include <iostream>

using namespace std;

struct HubunganLayanan
{
    int jumlahPerjalanan;
    string tanggalTerakhir;
};

typedef HubunganLayanan infotypeHL;              // variabel alias untuk info
typedef struct elmHubunganLayanan *addressHL;    // variabel alias untuk pointer

// kerangka dari elemen list
struct elmHubunganLayanan
{
    infotypeHL info;
    addressHL next;
    addressP child;                              // pointer ke elemen penumpang
};

// kerangka dari list
struct ListHubunganLayanan
{
    addressHL first;
};

// pengecekan apakah list kosong
bool isEmpty(ListHubunganLayanan LHL);
/* I.S. list LHL terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void CreateList(ListHubunganLayanan &LHL);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressHL createElemen(infotypeHL x, addressP pPenumpang);
/* I.S. info hubungan layanan x dan alamat penumpang terdefinisi
   F.S. mengembalikan alamat elemen hubungan layanan berisi x, next NULL, dan menunjuk pPenumpang */

void dealokasi(addressHL &P);
/* I.S. pointer P terdefinisi
   F.S. elemen hubungan layanan di-dealokasi; elemen penumpang yang ditunjuk tidak ikut dihapus */

// pencarian sebuah elemen list
addressHL findElm(ListHubunganLayanan LHL, string idPenumpang);
/* I.S. list LHL milik driver dan ID penumpang terdefinisi
   F.S. mengembalikan alamat elemen hubungan layanan yang cocok atau NULL jika tidak ditemukan */

// penambahan elemen *
void insertFirst(ListHubunganLayanan &LHL, addressHL P);
/* I.S. terdefinisi list LHL yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(ListHubunganLayanan &LHL, addressHL Prec, addressHL P);
/* I.S. terdefinisi list LHL yang mungkin kosong, elemen list P dan elemen list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(ListHubunganLayanan &LHL, addressHL P);
/* I.S. terdefinisi list LHL yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(ListHubunganLayanan &LHL, addressHL &P);
/* I.S. terdefinisi list LHL yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemen list pertama atau tidak ada elemen list pertama */

void deleteLast(ListHubunganLayanan &LHL, addressHL &P);
/* I.S. terdefinisi list LHL yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemen list terakhir atau tidak ada elemen list terakhir */

void deleteAfter(ListHubunganLayanan &LHL, addressHL Prec, addressHL &P);
/* I.S. terdefinisi list LHL yang mungkin kosong, elemen list P dan elemen list prec
   F.S. P adalah alamat dari elemen list setelah prec
        yang akan dihapus dan elemen list setelah P akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void printInfo(ListHubunganLayanan LHL);
/* I.S. terdefinisi list LHL yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

void inputData(infotypeHL &data);
/* I.S. ~
   F.S. meminta data hubungan layanan dari user */

#endif // HUBUNGANLAYANAN_H_INCLUDED
