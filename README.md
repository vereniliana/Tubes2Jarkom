# Tugas Besar 2 IF3130 - Distance Vector Simulation

## Petunjuk penggunaan program
1. Ekstrak file TB2_K03_15_SnowWhitoon.zip
2. Buka direktori TB2_K03_15_SnowWhitoon di terminal
3. Masukan perintah "make" (tanpa kutip) untuk melakukan kompilasi program
4. Jalankan program dengan perintah "make run" (tanpa kutip)  

## Penjelasan program
#### Bagaimana anda mensimulasikan sebuah node dalam program anda?

Pada program ini, node disimulasikan dalam bentuk indeks matriks. Matriks berisi pasangan distance dan nextHop yang menunjukkan keterhubungan antar node.  

Misalnya, matriks\[1\]\[2\] berisi vektor (distance dan nextHop) dari node 1 ke node 2.

#### Bagaimana proses pengiriman pesan antar node terjadi? Jelaskan dengan menggunakan nama fungsi dan/atau struktur data yang anda gunakan.

Pengiriman pesan antar node dilakukan dengan memperbaharui nilai distance dan nilai nextHop pada suatu vektor elemen matriks. Proses pengiriman pesan dilakukan berdasarkan input skenario. Pasangan x,y menandakan pengiriman informasi dari node x ke node y. Jika pada kolom j, nilai matriks[x][j].distance + 1 < matriks[y][j].distance, atau matriks[x][j].distance + 1 dan matriks[y][j].distance bernilai sama namun x < matriks[y][j].nextHop, maka elemen matriks\[y\][j] akan diperbaharui sehingga distancenya menjadi matriks[x][j].distance + 1, dan nextHopnya menjadi x. Proses ini merepresentasikan pencatatan oleh node y agar paket yang datang selalu dikirimkan melalui x terlebih dahulu.  

## Pembagian tugas
* 13515078 Veren Iliana Kurniadi mengerjakan inisialisasi awal matriks update serta print.
* 13515087 Audry Nyonata mengerjakan inisialisasi node berdasarkan input dan update serta print.
* 13515129 Annisa Nurul Azhar mengerjakan struktur data dan update serta print.


## Jawaban Pertanyaan 
#### 1. Apakah perbedaan dari routing protocol distance-vector dan link state? Manakah yang lebih baik untuk digunakan?
##### Jawab: 
*Distance Vector* hanya memiliki informasi routing dari router tetangganya, sedangkan *Link State* memiliki informasi *routing* dari setiap *node* yang ada. Selain itu, untuk mendapatkan lintasan/rute yang terbaik, *Distance Vector* menggunakan algoritma *Bellman-Ford*, sedangkan *Link State* menggunakan algoritma *Djikstra*.
Untuk menentukan yang mana yang lebih baik digunakan, dapat dilihat dari situasinya. Jika desain *network*-nya *hierarchial*, kecepatan *network* untuk konvergen sangat krusial, dan *network administrator*-nya memiliki pengetahuan yang mumpuni untuk implementasi *link state protocol* maka gunakan *link state protocol*. Sementara jika desain networknya *simple* dan *flat*, *convergence time* tidak menjadi masalah, dan pengetahuan admin terbatas maka gunakan *distance vector protol*.


#### 2. Pada implementasinya saat ini manakah yang lebih banyak digunakan, distance-vector atau  link state? Kenapa?
##### Jawab:
Saat ini yang paling banyak digunakan adalah OSPF yang menggunakan *link state protocol*. *Link state* paling banyak digunakan karena *nature*nya yang cepat konvergen, *update* yang periodik dan inkremental, serta pengetahuan tentang *map* jaringan yang menyeluruh.
