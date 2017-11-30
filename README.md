# Tugas Besar 2 IF3130 - Distance Vector Simulation

## Petunjuk penggunaan program.
1. Ekstrak file TB2_K03_15_SnowWhitoon.zip
2. Buka direktori TB2_K03_15_SnowWhitoon/src di terminal
3. Masukan perintah "make" (tanpa kutip)
4. Jalankan program *jarkom ./jarkom*

## Penjelasan program
*Bagaimana anda mensimulasikan sebuah node dalam program anda?*

Pada program ini, node disimulasikan dalam bentuk indeks matriks. Matriks berisi pasangan distance dan nextHop yang menunjukkan keterhubungan antar node.

*Bagaimana proses pengiriman pesan antar node terjadi? Jelaskan dengan menggunakan nama fungsi dan/atau struktur data yang anda gunakan.*

Pengiriman pesan antar node dilakukan dengan memperbaharui distance dan nextHop pada matriks keterhubungan node. 

## Pembagian tugas
*Sampaikan dalam list pengerjaan untuk setiap mahasiswa. Sebagai contoh: XXXX mengerjakan fungsi YYYY, ZZZZ, dan YYZZ.*
* 13515078 Veren Iliana Kurniadi
* 13515087 Audry Nyonata
* 13515xxx Annisa Nurul Azhar


## Jawaban Pertanyaan 
#### 1. Apakah perbedaan dari routing protocol distance-vector dan link state? Manakah yang lebih baik untuk digunakan?
Jawab: *Distance Vector* hanya memiliki informasi routing dari router tetangganya, sedangkan *Link State* memiliki informasi *routing* dari setiap *node* yang ada. Selain itu, untuk mendapatkan lintasan/rute yang terbaik, *Distance Vector* menggunakan algoritma *Bellman-Ford*, sedangkan *Link State* menggunakan algoritma *Djikstra*.
Untuk menentukan yang mana yang lebih baik digunakan, dapat dilihat dari situasinya. Jika desain *network*-nya *hierarchial*, kecepatan *network* untuk konvergen sangat krusial, dan *network administrator*-nya memiliki pengetahuan yang mumpuni untuk implementasi *link state protocol* maka gunakan *link state protocol*. Sementara jika desain networknya *simple* dan *flat*, *convergence time* tidak menjadi masalah, dan pengetahuan admin terbatas maka gunakan *distance vector protol*.


#### 2. Pada implementasinya saat ini manakah yang lebih banyak digunakan, distance-vector atau  link state? Kenapa?
Jawab: Saat ini yang paling banyak digunakan adalah OSPF yang menggunakan *link state protocol*. *Link state* paling banyak digunakan karena *nature*nya yang cepat konvergen, *update* yang periodik dan inkremental, serta pengetahuan tentang *map* jaringan yang menyeluruh.
