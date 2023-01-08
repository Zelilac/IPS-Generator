#include <stdio.h>
#include <stdlib.h>

char name[20], nim[20], prodi[20], smst[40], kelas[10];
float nilai[6];
int sk[6];

void generate_marksheet()
{
    int sks, v;
    char yesNo;
    float X, presentage, grand_total, i[6];
    sks = sk[0] + sk[1] + sk[2] + sk[3] + sk[4] + sk[5] + sk[6];
    i[0] = sk[0] * nilai[0], i[1] = sk[1] * nilai[1], i[2] = sk[2]* nilai[3];
    i[3] = sk[3] * nilai[3], i[4] = sk[4] * nilai[4], i[5] = sk[5] * nilai[5], i[6] = sk[6] * nilai[6];
    grand_total = i[0] + i[1] + i[2] + i[3] + i[4] + i[5] + i[6];
    X = grand_total / sks;

    system("cls");
    printf("IP SEMESTER SEDANG DIHITUNG, SILAHKAN TUNGGU.....");
    Sleep(8000);
    system("cls");
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");
    printf("|                       UNIVERSITAS HAYAM WURUK PERBANAS SURABAYA                           |\n");
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");
    printf("|Nama         : %s\tKelas: %s\t\n", name, kelas);
    printf("|NIM          : %s\n", nim);
    printf("|Prodi        : %s\n", prodi);
    printf("|Jumlah SKS   : %d\n", sks);
    printf("|Semester     : %s\n", smst);
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");
    printf("|\tMATA KULIAH                     \t  SKS       BOBOT NILAI  \t    K X N   |\n");
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");
    printf("|\tBAHASA INGGRIS                  \t  %d      \t  %.2f       \t    %.2f\n",sk[0], nilai[0],i[0]);
    printf("|\tPENGANTAR BISNIS MANAJEMEN      \t  %d      \t  %.2f       \t    %.2f\n",sk[1], nilai[1],i[1]);
    printf("|\tMATEMATIKA DASAR                \t  %d      \t  %.2f       \t    %.2f\n",sk[2], nilai[2],i[2]);
    printf("|\tFISIKA DASAR                    \t  %d      \t  %.2f       \t    %.2f\n",sk[3], nilai[3],i[3]);
    printf("|\tETIKA                           \t  %d      \t  %.2f       \t    %.2f\n",sk[4], nilai[4],i[4]);
    printf("|\tPENGANTAR TEKNOLOGI INFORMASI   \t  %d      \t  %.2f       \t    %.2f\n",sk[5], nilai[5],i[5]);
    printf("|\tPROGRAM DASAR                   \t  %d      \t  %.2f       \t    %.2f\n",sk[6], nilai[6],i[6]);
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");
    printf("|\t                                \t  %d       | NILAI TOTAL \t    %.2f\n",sks, grand_total);
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");
    printf("|                               IP SEMESESTER = %.2f\n",X);
    for(v=0;v<93;v++)
    printf("-");
    printf("\n");

    printf("\nTekan 'Y' untuk membuat laporan lagi. Tekan 'T' untuk Exit: ");
    fflush(stdin);
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        take_user_info();
    }
    else
    {
        exit(0);
    }
}
void take_user_info()
{
    char yesNo;
    system("cls");
    printf("Masukkan Nama: ");
    fflush(stdin);
    gets(name);
    printf("Masukkan NIM: ");
    fflush(stdin);
    gets(nim);
    printf("Masukkan PRODI: ");
    fflush(stdin);
    gets(prodi);
    printf("Masukkan SEMESTER: ");
    fflush(stdin);
    gets(smst);
    printf("Masukkan Kelas: ");
    fflush(stdin);
    gets(kelas);
    system("cls");
    printf("Masukkan Nilai Mata Kuliah\n");
repeate:
    printf("Masukkan Nilai BAHASA INGGRIS: ");
    scanf("%f", &nilai[0]);
    printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[0]);
    if (nilai[0] > 4 && nilai[0] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate;
    }
repeate2:
    printf("Masukkan Nilai PENGANTAR BISNIS MANAJEMEN: ");
    scanf("%f", &nilai[1]);
        printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[1]);
    if (nilai[1] > 4 && nilai[1] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate2;
    }
repeate3:
    printf("Masukkan Nilai MATEMATIKA DASAR: ");
    scanf("%f", &nilai[2]);
        printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[2]);
    if (nilai[2] > 4 && nilai[2] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate3;
    }
repeate4:
    printf("Masukkan Nilai FISIKA DASAR: ");
    scanf("%f", &nilai[3]);
        printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[3]);
    if (nilai[3] > 4 && nilai[3] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate4;
    }
repeate5:
    printf("Masukkan Nilai ETIKA: ");
    scanf("%f", &nilai[4]);
        printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[4]);
    if (nilai[4] > 4 && nilai[4] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate5;
    }
repeate6:
    printf("Masukkan Nilai PENGANTAR TEKNOLOGI INFORMASI: ");
    scanf("%f", &nilai[5]);
        printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[5]);
    if (nilai[5] > 4 && nilai[5] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate6;
    }
repeate7:
    printf("Masukkan Nilai PROGRAM DASAR: ");
    scanf("%f", &nilai[6]);
        printf("Masukkan Jumlah SKS:");
    scanf("%d", &sk[6]);
    if (nilai[6] > 4 && nilai[6] < 0)
    {
        printf("Bobot nilai tidak valid! Input ulang!\n");
        goto repeate7;
    }

    printf("\nTekan 'Y' untuk membuat laporan. Tekan 'T' untuk Exit: ");
    fflush(stdin);
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        generate_marksheet();
    }
    else
    {
        exit(0);
    }
}
void main()
{
    char yesNo;

    printf("\n             *PROJECT MENGHITUNG IP SEMESTER 1*               \n");
    printf("\n                    *PRODI INFORMATIKA*               \n\n");
    Sleep(2000);
    printf("JIKA KAMU INGIN MENGHITUNG IP SEMESTER\n");
    printf("KAMU HARUS BERSEDIA MENYEDIAKAN INFORMASI TERKAIT BOBOT NILAI\n");
    printf("TEKAN 'Y' UNTUK MENGHITUNG IP SEMESTER. TEKAN 'T' BILA TIDAK: ");
    scanf("%c", &yesNo);
    if (yesNo == 'y' || yesNo == 'Y')
    {
        take_user_info();
    }
    else
    {
        exit(0);
    }
}
