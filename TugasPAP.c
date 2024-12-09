    // ANGGOTA KELOMPOK
    // 1. Muhammad Akbar Suryawan 24106050032
    // 2. Hafizh Nur Fitriansyah 24106050030
    // 3. Muhammad Fajri 24106050007

#include <stdio.h>

int main(){

    printf("=== Sistem Penilaian Akreditasi Program Studi Magister/Magister Terapan ===\n");

    // 1. fungsi skor NDTPS
    int NDTPS1;
    float skorNDTPS;

    printf("\n===== Skor NDTPS =====\n");

    printf("Masukkan Jumlah NDTPS (Dosen tetap yang ditugaskan sesuai bidang): ");
    scanf("%d", &NDTPS1);

    if (NDTPS1 >= 6){
        skorNDTPS = 4;
    } else if (NDTPS1 >= 3){ 
        skorNDTPS = (2.0 * NDTPS1) / 3.0;
    } else {
        skorNDTPS = 0;
    }

    printf("[Skor NDTPS: %.2f]\n", skorNDTPS);

    // 2. fungsi skor jabatan akademik
    int NDGB, NDLK, NDTPS2;
    float PGBLK, skorJabatan;

    printf("\n\n===== Jabatan Akademik DTPS =====\n");

    printf("Masukkan Jumlah DTPS yang memiliki jabatan akademik Guru Besar (NDGB): ");
    scanf("%d", &NDGB);

    printf("Masukkan Jumlah DTPS yang memiliki jabatan akademik Lektor Kepala (NDLK): ");
    scanf("%d", &NDLK);

    printf("Masukkan Jumlah Total NDTPS: ");
    scanf("%d", &NDTPS2);

    PGBLK = ((float)(NDGB + NDLK) / NDTPS2) * 100.0;

    if (PGBLK >= 70.0){
        skorJabatan = 4.0;
    } else if (PGBLK < 70.0){
        skorJabatan = 2.0 + ((20.0 * PGBLK) / 7.0);
    } else {
        skorJabatan = printf("Tidak ada skor kurang dari 2");
    }
    
    printf("[Persentase PGBLK: %.2f%%]\n", PGBLK);
    printf("[Skor jabatan akademik: %.2f]\n", skorJabatan);

    // 3. fungsi kurikulum
    int pil_a,skor_a;
    int pil_b,skor_b;
    int pil_c,skor_c;
    int skor_akhir;

    printf("\n\n======= Kurikulum ========\n");

    printf("A.Keterlibatan pemangku kepentingan dalam proses evaluasi dan pemutakhiran kurikulum.\n");
    printf("1. Evaluasi dan pemutakhiran kurikulum secara berkala tiap 4 s.d. 5 tahun yang melibatkan pemangku kepentingan internal dan eksternal, serta direview oleh pakar bidang ilmu program studi, industri, asosiasi, serta sesuai perkembangan ipteks dan kebutuhan pengguna. (skor = 4)\n2. Evaluasi dan pemutakhiran kurikulum secara berkala tiap 4 s.d. 5 tahun yang melibatkan pemangku kepentingan internal dan eksternal. (skor = 3)\n3. Evaluasi dan pemutakhiran kurikulum melibatkan pemangku kepentingan internal.(skor = 2)\n4. Evaluasi dan pemutakhiran kurikulum tidak melibatkan seluruh pemangku kepentingan internal. (skor = 1)\n5. Evaluasi dan pemutakhiran kurikulum dilakukan oleh dosen program studi. (skor = 0)\n");

    printf("Pilih opsi (1-5): ");
    scanf("%d", &pil_a);

    switch (pil_a){
        case 1:
        skor_a = 4;
        break;

        case 2:
        skor_a = 3;
        break;

        case 3:
        skor_a = 2;
        break;

        case 4:
        skor_a = 1;
        break;

        case 5:
        skor_a = 0;
        break;
    
        default:
        printf("Pilihan tidak valid. Harap masukkan angka antara 1 - 5.\n");
        break;
    }

    printf("\nB. Kesesuaian capaian pembelajaran dengan profil lulusan dan jenjang KKNI/SKKNI.\n");

    printf("1. Capaian pembelajaran diturunkan dari profil lulusan, mengacu pada hasil kesepakatan dengan asosiasi penyelenggara program studi sejenis dan organisasi profesi, dan memenuhi level KKNI, serta dimutakhirkan secara berkala tiap 4 s.d. 5 tahun sesuai perkembangan ipteks dan kebutuhan pengguna. (skor = 4)\n2. Capaian pembelajaran diturunkan dari profil lulusan, memenuhi level KKNI, dan dimutakhirkan secara berkala tiap 4 s.d. 5 tahun sesuai perkembangan ipteks atau kebutuhan pengguna. (skor = 3)\n3. Capaian pembelajaran diturunkan dari profil lulusan dan memenuhi level KKNI. (skor = 2)\n4. Capaian pembelajaran diturunkan dari profil lulusan dan tidak memenuhi level KKNI. (skor = 1)\n5. Capaian pembelajaran tidak diturunkan dari profil lulusan dan tidak memenuhi level KKNI. (skor = 0)\n");

    printf("Pilih opsi (1-5): ");
    scanf("%d", &pil_b);

    switch (pil_b){
        case 1:
        skor_b = 4;
        break;

        case 2:
        skor_b = 3;
        break;

        case 3:
        skor_b = 2;
        break;

        case 4:
        skor_b = 1;
        break;

        case 5:
        skor_b = 0;
        break;
    
        default:
        printf("Pilihan tidak valid. Harap masukkan angka antara 1 - 5.\n");
        break;
    }

    printf("\nC. Ketepatan struktur kurikulum dalam pembentukan capaian pembelajaran.\n");

    printf("1. Struktur kurikulum memuat keterkaitan antara matakuliah dengan capaian pembelajaran lulusan yang digambarkan dalam peta kurikulum yang jelas, capaian pembelajaran lulusan dipenuhi oleh seluruh capaian pembelajaran matakuliah, serta tidak ada capaian pembelajaran matakuliah yang tidak mendukung capaian pembelajaran lulusan. (skor = 4)\n2. Struktur kurikulum memuat keterkaitan antara matakuliah dengan capaian pembelajaran lulusan yang digambarkan dalam peta kurikulum yang jelas, capaian pembelajaran lulusan dipenuhi oleh seluruh capaian pembelajaran matakuliah. (skor = 3)\n3. Struktur kurikulum memuat keterkaitan antara matakuliah dengan capaian pembelajaran lulusan yang digambarkan dalam peta kurikulum yang jelas. (skor = 2)\n4. Struktur kurikulum tidak sesuai dengan capaian pembelajaran lulusan. (skor = 1)\n");

    printf("Pilih opsi (1-5): ");
    scanf("%d", &pil_c);

    switch (pil_c){
        case 1:
        skor_c = 4;
        break;

        case 2:
        skor_c = 3;
        break;

        case 3:
        skor_c = 2;
        break;

        case 4:
        skor_c = 1;
        break;
    
        default:
        printf("Pilihan tidak valid. Harap masukkan angka antara 1 - 4.\n");
        break;
    }

    skor_akhir = (skor_a+(2*skor_b)+(2*skor_c))/5;
    printf("[Skor akhir = %d]\n",skor_akhir);

    // 4. fungsi penjaminan mutu
    int upps1;

    printf("\n\n===== Sistem Penjaminan Mutu Internal =====\n");
    printf("Keterlaksanaan Sistem Penjaminan Mutu Internal (akademik dan nonakademik) yang dibuktikan dengan keberadaan 5 aspek:\n");
    printf("1) dokumen legal pembentukan unsur pelaksana penjaminan mutu. \n2) ketersediaan dokumen mutu: kebijakan SPMI, manual SPMI, standar SPMI, dan formulir SPMI. \n3) terlaksananya siklus penjaminan mutu (siklus PPEPP). \n4) bukti sahih efektivitas pelaksanaan penjaminan mutu. \n5) memiliki external benchmarking dalam peningkatan mutu.\n");
    printf("\nJumlah aspek UPPS yang memenuhi: \n");
    printf("1. UPPS telah melaksanakan SPMI yang memenuhi 5 aspek. (skor = 4)\n");
    printf("2. UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 sampai dengan 4. (skor = 3)\n");
    printf("3. UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 sampai dengan 3. (skor = 2)\n");
    printf("4. UPPS telah melaksanakan SPMI yang memenuhi aspek nomor 1 dan 2, serta siklus kegiatan SPMI baru dilaksanakan pada tahapan penetapan standar dan pelaksanaan standar pendidikan tinggi. (skor = 1)\n");
    printf("5. UPPS telah memiliki dokumen legal pembentukan unsur pelaksana penjaminan mutu tanpa pelaksanaan SPMI. (skor = 0)\n");
    
    printf("Pilih opsi (1-5): ");
    scanf("%d", &upps1);  

    switch(upps1) {
        case 1:
            printf("[Skor = 4]\n");
            break;
        case 2:
            printf("[Skor = 3]\n");
            break;
        case 3:
            printf("[Skor = 2]\n");
            break;
        case 4:
            printf("[Skor = 1]\n");
            break;
        case 5:
            printf("[Skor = 0]\n");
            break;
        default:
            printf("[Pilihan tidak valid. Harap masukkan angka antara 1 - 5.]\n");
    }

    // 5. fungsi pelampauan SN-DIKTI
    int upps2;

    printf("\n\n===== Pelampauan SN-DIKTI =====\n");

    printf("1. UPPS menetapkan standar mutu yang melampaui SN-DIKTI dan memiliki daya saing internasional. Indikator kinerja tambahan mencakup seluruh standar yang ditetapkan. Data indikator kinerja telah diukur, dimonitor, dikaji, dan dianalisis untuk perbaikan berkelanjutan. (skor = 4)\n");
    printf("2. UPPS menetapkan standar mutu yang melampaui SN-DIKTI dan memiliki daya saing nasional. Indikator kinerja tambahan mencakup sebagian standar yang ditetapkan. Data indikator kinerja tambahan telah diukur, dimonitor, dikaji, dan dianalisis untuk perbaikan berkelanjutan. (skor = 3)\n");
    printf("3. UPPS tidak menetapkan indikator kinerja tambahan. (skor = 2)\n");
    printf("Pilih opsi (1-3): ");
    scanf("%d", &upps2);

        switch (upps2) {
            case 1:
                printf("[Skor = 4]\n");
                break;

            case 2:
                printf("[Skor = 3]\n");
                break;

            case 3:
                printf("[Skor = 2]\n");
                break;

            default:
                printf("[Tidak ada skor kurang dari 2].\n");
        }
    
    // 6. pelacakan lulusan
    int upps3,skor;

    printf("\n\n====== Sistem Pelacakan Lulusan ======\n");

    printf("Pelaksanaan studi pelacakan (tracer study) yang mencakup 5 aspek sebagai berikut:\n1) pelaksanaan tracer study terkoordinasi di tingkat PT \n2) kegiatan tracer study dilakukan secara reguler setiap tahun dan terdokumentasi \n3) isi kuesioner mencakup seluruh pertanyaan inti tracer study DIKTI. \n4) ditargetkan pada seluruh populasi (lulusan TS-4 s.d. TS2), \n5) hasilnya disosialisasikan dan digunakan untuk pengembangan kurikulum dan pembelajaran.\n");
    printf("\nJumlah aspek tracer study yang telah dilakukan UPPS: \n");
    printf("1. Tracer study yang dilakukan UPPS telah mecakup 5 aspek. (skor = 4)\n2. Tracer study yang dilakukan UPPS telah mecakup 4 aspek. (skor = 3)\n3. Tracer study yang dilakukan UPPS telah mecakup 3 aspek. (skor = 2)\n4. Tracer study yang dilakukan UPPS telah mecakup 2 aspek. (skor = 1)\n5. melaksanakan tracer study. (skor = 0)\n");

    printf("Input opsi (1-5): ");
    scanf("%d",&upps3);

    if(upps3 = 1){
        skor = 4;
    } else if(upps3 = 2){
        skor = 3;
    } else if(upps3 = 3){
        skor = 2;
    } else if(upps3 = 4){
        skor = 1;
    } else{
        skor = 0;
    }
    printf("[skor: %d]\n",skor);

    // 7. Kesesuaian Bidang Kerja
    int nl, nj;
    float pj, pbs, skor1, prmin, skorakhir;

    printf("\n\n======= Kesesuaian Bidang Kerja ========\n");

    printf("Kesesuaian bidang kerja lulusan saat mendapatkan pekerjaan pertama.\nKET: PBS = Kesesuaian bidang kerja lulusan saat mendapatkan pekerjaan pertama dalam 3 tahun, mulai TS-4 s.d. TS-2.\n");

    printf("Input PBS(%%): ");
    scanf("%f",&pbs);

    printf("pbs = %.2f %%",pbs);

    if(pbs >= 60){
        skor1 = 4;
    } else if(pbs < 60){
        skor1 = (20 * (pbs/100)) / 3;
    }
    printf("\nSkor Awal: %.2f",skor1);

    printf("\nNL = Jumlah lulusan dalam 3 tahun (TS-4 s.d. TS-2): ");
    scanf("%d",&nl);

    printf("NL = Jumlah lulusan dalam 3 tahun (TS-4 s.d. TS-2) yang terlacak: ");
    scanf("%d",&nj);

    pj = ((float)nl / nj);
    printf("PJ = Persentase lulusan yang terlacak: %.2f%%\n",pj);

    if(nl >= 300){
        prmin = 30.0;
    } else if(nl < 300){
        prmin = 50.0 - (((float)nl / 300.0) * 20.0);
    }
    printf("prmin: %.2f %%\n",prmin);
    if(pj >= prmin){
        skorakhir = skor1;
    } else if(pj < prmin){
        skorakhir = (pj/prmin) * skor1;
    }

    printf("[Skor Akhir: %.2f]\n", skorakhir);

    // 8. kepuasan pengguna
    float a[7], b[7], c[7], d[7]; 
    float TKi[7], Skor = 0.0, Skor_akhir;
    int NL, NJ;
    float PJ, Prmin;

    printf("\n\n======= Kepuasan Pengguna ========\n");

    printf("Masukkan persentase tingkat kepuasan untuk 7 aspek (Sangat Baik, Baik, Cukup, Kurang):\n");

    for (int i = 0; i < 7; i++) {
        printf("\nAspek ke-%d:\n", i + 1);

        printf("Persentase 'Sangat Baik' (a%d): ", i + 1);
        scanf("%f", &a[i]);

        printf("Persentase 'Baik' (b%d): ", i + 1);
        scanf("%f", &b[i]);

        printf("Persentase 'Cukup' (c%d): ", i + 1);
        scanf("%f", &c[i]);

        printf("Persentase 'Kurang' (d%d): ", i + 1);
        scanf("%f", &d[i]);
    }


    for (int i = 0; i < 7; i++) {
        TKi[i] = (4 * a[i]) + (3 * b[i]) + (2 * c[i]) + d[i];
        Skor += TKi[i];  
    }

    Skor = Skor / 7;

    printf("\nMasukkan jumlah lulusan (NL) dalam 3 tahun: ");
    scanf("%d", &NL);

    printf("Masukkan jumlah pengguna lulusan yang memberi tanggapan (NJ): ");
    scanf("%d", &NJ);

    PJ = ((float)NJ / NL) * 100;

    if (NL >= 300) {
        Prmin = 30.0;
    } else {
        Prmin = 50.0 - ((NL / 300.0) * 20.0);
    }


    if (PJ >= Prmin) {
        Skor_akhir = Skor;
    } else {
        Skor_akhir = (PJ / Prmin) * Skor;
    }

    printf("\n[Skor akhir: %.2f]\n", Skor_akhir);

    // 9. publikasi ilmiah mahasiswa
    printf("\n\nMONITORING PUBLIKASI ILMIAH MAHASISWA\n");
    printf("======================================\n");

    int NA1, NA2, NA3, NA4, NB1, NB2, NB3, NC1, NC2, NC3, NM;
    float RL, RN, RI, skorPublikasi;

    printf("Masukkan jumlah mahasiswa (NM): ");
    scanf("%d", &NM);

    printf("Masukkan jumlah publikasi di jurnal nasional tidak terakreditasi (NA1): ");
    scanf("%d", &NA1);

    printf("Masukkan jumlah publikasi di jurnal nasional terakreditasi (NA2): ");
    scanf("%d", &NA2);

    printf("Masukkan jumlah publikasi di jurnal internasional (NA3): ");
    scanf("%d", &NA3);

    printf("Masukkan jumlah publikasi di jurnal internasional bereputasi (NA4): ");
    scanf("%d", &NA4);

    printf("Masukkan jumlah publikasi di seminar wilayah/lokal/PT (NB1): ");
    scanf("%d", &NB1);

    printf("Masukkan jumlah publikasi di seminar nasional (NB2): ");
    scanf("%d", &NB2);

    printf("Masukkan jumlah publikasi di seminar internasional (NB3): ");
    scanf("%d", &NB3);

    printf("Masukkan jumlah tulisan di media massa wilayah (NC1): ");
    scanf("%d", &NC1);

    printf("Masukkan jumlah tulisan di media massa nasional (NC2): ");
    scanf("%d", &NC2);

    printf("Masukkan jumlah tulisan di media massa internasional (NC3): ");
    scanf("%d", &NC3);

    RL = ((float)(NA1 + NB1 + NC1) / NM) * 100.0;
    RN = ((float)(NA2 + NA3 + NB2 + NC2) / NM) * 100.0;
    RI = ((float)(NA4 + NB3 + NC3) / NM) * 100.0;

    if (RI >= 2.0) {
        skorPublikasi = 4.0;
    } else if (RI < 2.0 && RN >= 20.0) {
        skorPublikasi = 3.0 + (RI / 2.0);
    } else if (RI == 0 && RN == 0 && RL >= 70.0) {
        skorPublikasi = 2.0;
    } else if (RI < 2.0 && RN < 20.0) {
        skorPublikasi = 2.0 + ((2.0 * RI) / 2.0) + (RN / 20.0) - ((RI * RN) / (2.0 * 20.0));
    } else {
        skorPublikasi = (2.0 * RL) / 70.0;
    }

    printf("\nPersentase RL (Lokal): %.2f%%\n", RL);
    printf("Persentase RN (Nasional): %.2f%%\n", RN);
    printf("Persentase RI (Internasional): %.2f%%\n", RI);
    printf("Skor Publikasi Ilmiah: %.2f\n", skorPublikasi);


    return 0;
}