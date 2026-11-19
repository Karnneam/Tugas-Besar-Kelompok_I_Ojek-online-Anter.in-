#ifndef PENUMPANG_H_INCLUDED
#define PENUMPANG_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct Penumpang
{
    string idPenumpang;
    string nama;
    string noTelepon;
};

typedef Penumpang infotypeP;                   // variabel alias untuk info
typedef struct elmPenumpang *addressP;        // variabel alias untuk pointer

// kerangka dari elemen list
struct elmPenumpang
{
    infotypeP info;
    addressP next;
};

// kerangka dari list
struct ListPenumpang
{
    addressP first;
};

// pengecekan apakah list kosong
bool isEmpty(ListPenumpang LP);
/* I.S. list LP terdefinisi
   F.S. true jika list kosong dan false jika tidak kosong */

// pembuatan list kosong
void CreateList(ListPenumpang &LP);
/* I.S. ~
   F.S. terbentuk list kosong */

// manajemen memori
addressP createElemen(infotypeP x);
/* I.S. info penumpang x terdefinisi
   F.S. mengembalikan alamat elemen berisi x dengan next NULL */

void dealokasi(addressP &P);
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen list
addressP findElm(ListPenumpang LP, string idPenumpang);
/* I.S. list LP dan ID penumpang terdefinisi
   F.S. mengembalikan alamat elemen penumpang yang cocok atau NULL jika tidak ditemukan */

// penambahan elemen *
void insertFirst(ListPenumpang &LP,addressP P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada awal list */

void insertAfter(ListPenumpang &LP,addressP Prec, addressP P);
/* I.S. terdefinisi list LP yang mungkin kosong, elemen list P dan elemen list prec
   F.S. menempatkan elemen beralamat P sesudah elemen beralamat Prec */

void insertLast(ListPenumpang &LP, addressP P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. menempatkan elemen beralamat P pada akhir list */

// penghapusan sebuah elemen
void deleteFirst(ListPenumpang &LP, addressP &P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari elemen pertama list
        yang akan dihapus dan elemen list selanjutnya akan menjadi
        elemen list pertama atau tidak ada elemen list pertama */

void deleteLast(ListPenumpang &LP,addressP &P);
/* I.S. terdefinisi list LP yang mungkin kosong dan elemen list P
   F.S. P adalah alamat dari elemen terakhir list
        yang akan dihapus dan elemen list sebelumnya akan menjadi
        elemen list terakhir atau tidak ada elemen list terakhir */

void deleteAfter(ListPenumpang &LP, addressP Prec, addressP &P);
/* I.S. terdefinisi list LP yang mungkin kosong, elemen list P dan elemen list prec
   F.S. P adalah alamat dari elemen list setelah prec
        yang akan dihapus dan elemen list setelah P akan terhubung
        langsung dengan prec atau tidak ada elemen list setelahnya */

void printInfo(ListPenumpang LP);
/* I.S. terdefinisi list LP yang mungkin kosong
   F.S. jika list tidak kosong menampilkan semua info yang ada pada list */

void inputData(infotypeP &data);
/* I.S. ~
   F.S. meminta data penumpang dari user */

#endif // PENUMPANG_H_INCLUDED
