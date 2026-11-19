#ifndef DRIVER_H_INCLUDED
#define DRIVER_H_INCLUDED
#include "layanan.h"
#include <string>
#include <iostream>

using namespace std;

struct Driver
{
    string idDriver;
    string nama;
    string noKendaraan;
    string jenisKendaraan;
    float rating;
};

typedef Driver infotypeD;                    // variabel alias untuk info
typedef struct elmDriver *addressD;          // variabel alias untuk pointer

// kerangka dari elemen list
struct elmDriver
{
    infotypeD info;
    ListHubunganLayanan LHL;
    addressD next;
    addressD prev;
};

// kerangka dari list
struct ListDriver
{
    addressD first;
    addressD last;
};

// pengecekan apakah list kosong
bool isEmpty(ListDriver LD);
/* I.S. list LD terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void CreateList(ListDriver &LD);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressD createElemen(infotypeD x);
/* I.S. info driver x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan prev/next NULL
        dan daftar hubungan layanan dalam keadaan kosong */

void dealokasi(addressD &P);
/* I.S. pointer P terdefinisi
   F.S. elemen driver dan seluruh elemen hubungan layanan relasinya di-dealokasi;
        elemen penumpang yang dirujuk tidak ikut dihapus */

// pencarian sebuah elemen list
addressD findElm(ListDriver LD, string idDriver);
/* I.S. list LD dan ID driver terdefinisi
   F.S. mengembalikan alamat elemen driver yang cocok atau NULL jika tidak ditemukan */

// penambahan elemen *
void insertFirst(ListDriver &LD,addressD P);
/* I.S. terdefinisi list LD yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(ListDriver &LD,addressD Prec,addressD P);
/* I.S. terdefinisi list LD yang mungkin kosong, elemen list P dan elemen list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(ListDriver &LD, addressD P);
/* I.S. terdefinisi list LD yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(ListDriver &LD,addressD &P);
/* I.S. terdefinisi list LD yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemen list pertama atau tidak ada elemen list pertama */

void deleteLast(ListDriver &LD, addressD &P);
/* I.S. terdefinisi list LD yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari alamat elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemen list terakhir atau tidak ada elemen list terakhir */

void deleteAfter(ListDriver &LD, addressD Prec,addressD &P);
/* I.S. terdefinisi list LD yang mungkin kosong, elemen list P dan elemen list prec
   F.S. P adalah alamat dari alamat elemen list setelah prec
        yang akan dihapus dan elemen list setelah P akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void printInfo(ListDriver LD);
/* I.S. terdefinisi list LD yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

bool isReferenced(ListDriver LD,addressP child);
/* I.S. terdefinisi list driver dan alamat penumpang
   F.S. true jika penumpang masih direferensikan oleh hubungan layanan driver */

void inputData(infotypeD &data);
/* I.S. ~
   F.S. meminta data driver dari user */

#endif // DRIVER_H_INCLUDED
