# Tugas-Besar-Kelompok_I_Ojek-online-Anter.in-

## Deskripsi
Aplikasi pengelolaan layanan ojek online (Anter.in) mencatat driver dan penumpang yang menggunakan layanan. Seorang driver dapat melayani banyak penumpang dan seorang penumpang dapat dilayani oleh beberapa driver bergantung pada jumlah pemesanan dalam sehari. Setiap pasangan driver dan penumpang dapat memiliki beberapa riwayat perjalanan. Data hubungan layanan driver dan penumpang dikelola melalui Multi Linked List, sedangkan pesanan perjalanan dicatat dalam Binary Search Tree.
---

## Struktur Data

| List | Deskripsi |
|----------|--------|
| Parent | Driver (id driver, nama, nomor kendaraan, jenis kendaraan, rating) |
| Child | Penumpang (id penumpang, nama, nomor telepon) |
| Relasi | Hubungan Layanan (jumlah perjalanan, tanggal terakhir dilayani) |
| Binary Search Tree | Pesanan perjalanan dengan key jarak (id driver, id penumpang, tanggal, lokasi penjemputan, lokasi tujuan, jarak, tarif, rating perjalanan) |

---

## Arsitektur
Arsitektur pada topik tugas besar ini menggunakan multi linked list tipe-01 dan binary search tree

### 1. Multi Linked List Tipe-01

![Images](https://i.imgur.com/iBBVDiM.png)

### 2. Binary Search Tree

![Images](https://i.imgur.com/45lFeWK.png)

---

## Fitur / Fungsional Program
### Fungsional Umum
Fungsionalitas yang harus terpenuhi untuk **Multi-Linked list** adalah 
1. Menyisipkan elemen parent, child dan relasi (first, last, after)
2. Menghapus elemen parent, child dan relasi (first, last, after)
3. Mencari elemen parent, child dan relasi
4. Menampilkan seluruh data pada list (parent, child, relasi)
5. Membuat data dummy untuk masing-masing list minimal 5 data (parent,child) dan 10 data (relasi)
6. Melengkapi Main Program (interface) 

Fungsionalitas yang harus terpenuhi untuk **Binary Search tree** adalah 
1. Menyisipkan node berdasarkan key pada masing-masing topik
2. Menghapus node berdasarkan key pada masing-masing topik
3. Mencari node berdasarkan key pada masing-masing topik
4. Menampilkan seluruh data traversal (in-order, pre-order, dan post-order).
5. Menampilkan nilai minimum, maksimum, tinggi pohon, dan jumlah node.
6. Membuat data dummy untuk BST minimal 10 node.
7. Melengkapi Main Program (interface)

### Fungsional khusus
Fungsionalitas / studi kasus yang dipilih dari topik ini adalah
1. Melakukan pemesanan perjalanan dengan pengemudi dan penumpang yang tersedia serta memperbarui rating, jumlah perjalanan, dan tanggal terakhir dilayani setelah perjalanan selesai.
2. Menyimpan pemesanan perjalanan ke BST berdasarkan jarak.
3. Menampilkan informasi pengemudi dengan pendapatan terbanyak serta jumlah perjalanannya.
4. Menampilkan total pendapatan aplikasi jika potongan pendapatan sebesar 5%.

### Fungsional tambahan (Bonus)
Fungsionalitas / studi kasus bonus yang dipilih dari topik ini adalah
1. Menampilkan informasi penumpang dengan penggunaan layanan terbanyak.
2. Menampilkan rata-rata tarif perjalanan setiap pengemudi.
3. Menampilkan histori penggunaan layanan berdasarkan pengemudi atau penumpang.

---

## Struktur Folder
```bash
├── Tugas-Besar-Kelompok_I
│   Anter.in
│   │   interface.cpp
│   │   interface.h
│   │   main.cpp
│   │   Anter.in.cbp
│   │   Anter.in.layout
│   │
│   ├───Bonus
│   │   ├───header
│   │   │       bonus.h
│   │   │
│   │   └───implementation
│   │           bonus.cpp
│   │
│   ├───BST
│   │   ├───header 
│   │   │       pesananBST.h
│   │   │
│   │   └───implementation
│   │           pesananBST_[nim_anggota_1].cpp
│   │           pesananBST_[nim_anggota_2].cpp
│   │
│   ├───Khusus
│   │   ├───header
│   │   │       khusus.h
│   │   │
│   │   └───implementation
│   │           khusus.cpp
│   │
│   └───MLL-01
│       ├───header
│       │       driver.h
│       │       penumpang.h
│       │       layanan.h
│       │
│       └───implementation
│           ├───driver
│           │       driver_[nim_anggota_1].cpp
│           │       driver_[nim_anggota_2].cpp
│           │
│           ├───penumpang
│           │       penumpang_[nim_anggota_1].cpp
│           │       penumpang_[nim_anggota_2].cpp
│           │
│           └───layanan
│                   layanan_[nim_anggota_1].cpp
│                   layanan_[nim_anggota_2].cpp
├── README.md
└── .gitignore
```

