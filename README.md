# Tugas Besar 2 IF3130 Jaringan Komputer

## Distance Vector Simulation

### Petunjuk penggunaan program.
1. Ekstrak file TB2_K03_15_SnowWhitoon.zip
2. Buka direktori TB2_K03_15_SnowWhitoon/src di terminal
3. Masukan perintah "make" (tanpa kutip)
4. Jalankan program *jarkom ./jarkom*

### Penjelasan program
*Bagaimana anda mensimulasikan sebuah node dalam program anda?*

Pada program ini, node disimulasikan dalam bentuk indeks matriks. Matriks berisi pasangan distance dan nextHop yang menunjukkan keterhubungan antar node.

*Bagaimana proses pengiriman pesan antar node terjadi? Jelaskan dengan menggunakan nama fungsi dan/atau struktur data yang anda gunakan.*

Pengiriman pesan antar node dilakukan dengan memperbaharui distance dan nextHop pada matriks keterhubungan node. 

### Pembagian tugas.
*Sampaikan dalam list pengerjaan untuk setiap mahasiswa. Sebagai contoh: XXXX mengerjakan fungsi YYYY, ZZZZ, dan YYZZ.*


### Pertanyaan dan Jawaban 
#### Apakah perbedaan dari routing protocol distance-vector dan link state? Manakah yang lebih baik untuk digunakan?

#### Pada implementasinya saat ini manakah yang lebih banyak digunakan, distance-vector atau  link state? Kenapa?