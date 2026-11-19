#ifndef PESANANBST_H_INCLUDED
#define PESANANBST_H_INCLUDED
#include <string>
#include <iostream>

using namespace std;

struct Pesanan
{
    string idDriver;
    string idPenumpang;
    string tanggal;
    string lokasiJemput;
    string lokasiTujuan;
    float jarak;                 // Key BST
    int tarif;
    float ratingPerjalanan;
};

typedef Pesanan infotypeBST;                        // variabel alias untuk info
typedef struct nodePesanan *addressNodePesanan;    // variabel alias untuk pointer

// kerangka dari elemen node
struct nodePesanan
{
    infotypeBST info;
    addressNodePesanan left;
    addressNodePesanan right;
};

// kerangka dari BST
struct BST
{
    addressNodePesanan root;
};

bool isBefore(infotypeBST left, infotypeBST right);
/* I.S. record pesanan left dan right terdefinisi
   F.S. true jika record left berada sebelum record right sesuai urutan BST (key jarak) */

int hitungTarif(float jarak);
/* I.S. jarak perjalanan terdefinisi
   F.S. mengembalikan estimasi tarif perjalanan berdasarkan jarak */

// pengecekan apakah BST kosong
bool isEmpty(BST T);
/* I.S. BST T terdefinisi
   F.S. true jika BST kosong dan false jika tidak kosong */

// pembuatan BST kosong
void CreateBST(BST &T);
/* I.S. ~
   F.S. terbentuk BST kosong */

// manajemen memori
addressNodePesanan createElemen(infotypeBST x);
/* I.S. info x terdefinisi
   F.S. mengembalikan alamat node berisi x dengan anak kiri dan kanan NULL */

void dealokasi(addressNodePesanan &P);
/* I.S. pointer P terdefinisi
   F.S. memori yang digunakan P dikembalikan ke sistem */

// pencarian sebuah elemen node
addressNodePesanan findNode(BST T, float jarak);
/* I.S. BST T dan key jarak terdefinisi
   F.S. mengembalikan alamat node yang cocok atau NULL jika tidak ditemukan */

// penambahan elemen *
void insertNode(BST &T, addressNodePesanan P);
/* I.S. terdefinisi BST T yang mungkin kosong dan elemen node P
   F.S. menempatkan elemen beralamat P menurut key jarak */

// penghapusan node yang sudah diketahui alamatnya
void deleteNode(BST &T, addressNodePesanan &P);
/* I.S. terdefinisi BST T yang mungkin kosong dan elemen node P
   F.S. P adalah alamat dari elemen yang akan dihapus,
        elemen lain menggantikan posisi elemen P yang dihapus sesuai aturan BST */

void deleteNodeByKey(BST &T, float jarak);
/* I.S. terdefinisi BST T dan key jarak
   F.S. record pesanan perjalanan yang cocok dihapus jika ditemukan */

// penelusuran traversal
void inOrder(addressNodePesanan root);
/* I.S. terdefinisi root BST T
   F.S. seluruh record pesanan ditampilkan dengan traversal in-order */

void preOrder(addressNodePesanan root);
/* I.S. terdefinisi root BST T
   F.S. seluruh record pesanan ditampilkan dengan traversal pre-order */

void postOrder(addressNodePesanan root);
/* I.S. terdefinisi root BST T
   F.S. seluruh record pesanan ditampilkan dengan traversal post-order */

addressNodePesanan findMin(BST T);
/* I.S. terdefinisi BST T
   F.S. mengembalikan node dengan jarak minimum atau NULL jika BST kosong */

addressNodePesanan findMax(BST T);
/* I.S. terdefinisi BST T
   F.S. mengembalikan node dengan jarak maksimum atau NULL jika BST kosong */

int treeHeight(addressNodePesanan root);
/* I.S. terdefinisi root BST T
   F.S. mengembalikan tinggi BST; tinggi pohon kosong adalah 0 */

int countNode(addressNodePesanan root);
/* I.S. terdefinisi root BST T
   F.S. mengembalikan jumlah node dalam BST */

void inputData(infotypeBST &data);
/* I.S. ~
   F.S. meminta data pesanan perjalanan dari user */

#endif // PESANANBST_H_INCLUDED
