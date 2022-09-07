// Program bahasa C untuk
// menghasilkan angka secara
// acak
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
// Driver program
int main(void)
{
//    int data,jum;

// Program berikut akan
// menciptakan ukuran angka
// secara acak setiap kali
// program dijalankan
// Menggunakan waktu saat ini
// sebagai sumber generator
// pengacakan angka
    //deklarasi token listrik
    srand(time(0));
    int kode,jum_data,tot_byr=0;
    char id[30],date[12];
    int nom_pem1,nom_pem2,adm_token,sub_tot_token=0,sub_total_trans=0;
    //-----------------
    //deklarasi pulsa elektronik
    //array=>kolom || baris
    int a=0,b,c,d,jum,sub_tot_bayar=0,tot_bayar_pul=0,adm;
	char provider[30][30]={"telkomsel","indosat","xl       ","axis    ","3        ","smartfren"};
	int nominal[30]={5000,10000,20000,25000,50000,100000};
	char nama[20][20],nomor[20][20],opsel[20][20];
	int jawab1,biaya[20],pulsa[20];
	int harga[20]={7000,12000,22000,27000,52000,102000};
	char jawab2;
    //--------------
    puts("|=====================================================|");
    puts("|          Aplikasi Konter Pulsa ELEKTRO-V            |");
    puts("|          Belajar C                                  |");
    puts("|=====================================================|\n");
    puts("Memilih menu pada layanan pulsa elektronik:\n");
    puts("[1] = Token listrik");
    puts("[2] = Pulsa selular");
    printf("\nMasukkan tanggal (format: HH-BB-TTTT) : "); scanf("%s",&date);
    printf("\n *) Masukkan jumlah data pembelian : ");scanf("%d", &jum_data);
    int i=1;
    while(i<=(jum_data)){

        printf("\n\nMasukkan kode pilihan : "); scanf("%d",&kode);
        puts("--------------------------------------");
        printf("|\tData pembelian ke- %d\n|",i);
        puts("-------------------------------------");
        switch(kode){
        case 1:
            puts("\n****Token listrik");
            printf("Masukkan ID Pelanggan        : ");
            scanf("%s",&id);
            printf("Masukkan nominal pembelian   : ");
            scanf("%d",&nom_pem1);
//            printf("Masukkan nominal tarif listrik (kWh)    : ");
  //          scanf("%f",&tarif_lis);
 //           printf("Masukkan admin bank          : "); //nilai biaya admin -> PPN
//            scanf("%f",&biaya_adm);
            //simulasi rumus besaran token kWH
  //          tot_admin= nom_pem1-biaya_adm;
    //        tot_token=((tot_admin*pajak)/(1+pajak));
      //      tot_kwh=tot_token/daya_lis;
 //           tot_token=tot_admin/tarif_lis;

            puts("\n---------------------------");
            puts("Hasil Transaksi Pembelian:");
            puts("---------------------------");
            printf("Tanggal diterima   : %s\n",date);
            printf("Nomor ID Pelanggan : %s\n",id);
//            printf("Alat KWH Meter yang Anda peroleh adalah %.2f kWh\n\n", tot_token);

//Simulasi nomor token metode random
//printf("Jumlah data ke-: ");scanf("%d",&jum);
//while(data<=jum){
//for(int i = 0; i<jum_data; i++)
//    printf(" %d", rand());
//data++;
//}
            tot_byr=tot_byr+nom_pem1;
            printf("Nomor Token Pelanggan : ");
            for(int i = 0; i<5; i++){printf("%d ",rand()%30+1967);}


        break;
        case 2:
            puts("\n----------Pulsa Seluler----------");
            //tambahan script
      //  for(a=0;a<1000;a++){
		printf("masukkan nama: ");
		scanf("%s",&nama[a]);
		printf("daftar operator:\n");
		printf("=================\n");
		printf("|operator\t|\n");
		printf("|---------------|\n");
		for(b=0;b<6;b++)
		{
			printf("|%s\t|\n",provider[b]);
			}
			printf("=================\n");
			printf("masukkan operator(nama): ");
			scanf("%s",&opsel[a]);
		printf("masukkan nomor: ");
		scanf("%s",&nomor[a]);
		printf("daftar nominal:\n");
		printf("=====================\n");
		printf("|No.\t|nominal    |\n");
		printf("|-------------------|\n");
		for(c=0;c<6;c++){
            printf("|%d. \t|%d\t    |\n",c+1,nominal[c]); //urutan data array
        }
		printf("=====================\n");
		ulang1:
		printf("masukkan nominal(1-6): ");
		scanf("%d",&jawab1);
		switch(jawab1)
		{
			case 1:
			pulsa[a]=nominal[0];
			biaya[a]=harga[0];
			break;
			case 2:
			pulsa[a]=nominal[1];
			biaya[a]=harga[1];
			break;
			case 3:
			pulsa[a]=nominal[2];
			biaya[a]=harga[2];
			break;
			case 4:
			pulsa[a]=nominal[3];
			biaya[a]=harga[3];
			break;
			case 5:
			pulsa[a]=nominal[4];
			biaya[a]=harga[4];
			break;
			case 6:
			pulsa[a]=nominal[5];
			biaya[a]=harga[5];
			break;
			default:
			printf("masukkan jawaban yang benar!\n");
			goto ulang1;
			break;
		}
        //-----------------
//break;
  //  }
    //------------
    a++;
    } i++;
}
    //punyanya token
    printf("\n\nMasukkan admin bank token listrik : "); scanf("%d", &adm_token);
    //biaya admin+total token
    sub_tot_token=tot_byr+adm_token;
    printf("Total token listrik yang harus dibayar : %d\n\n",sub_tot_token);

    //punyanya pulsa listrik
        //----script pulsa
    printf("\n------Biaya admin pulsa : "); scanf("%d", &adm);
//	printf("tabel: \n");
//	printf("=========================================================================================\n");
 //   printf("|No.\t|nama\t   |operator\t   |nomor\t\t|nominal\t|harga\t\t|\n");
 //   printf("|-------|----------|---------------|--------------------|---------------|---------------|\n");
    //for(d=0;d<jum;d++){
    //tambahan total keseluruhan dari jumlah pembelian + biaya admin
    //rumus total pembayaran setelah loop while
   // printf("|%d.\t|%s\t   |%s   \t   |%s \t|%d\t\t|%d\t\t|\n",d+1,nama[d],opsel[d],nomor[d],pulsa[d],biaya[d]);
    sub_tot_bayar = sub_tot_bayar+biaya[d];
	//}
	tot_bayar_pul=sub_tot_bayar+adm;
    puts("\n\n\t\t|============================================|");
    printf("Total pulsa Anda yang harus dibayar : %d\n",tot_bayar_pul);
//    printf("\t\t|Total pulsa Anda yang harus dibayar : %d\n",tot_bayar);

    //total keseluruhan setiap transaksi pembelian
    sub_total_trans=sub_tot_token+tot_bayar_pul;
    printf("Total keseluruhan transaksi pembelian yang harus dibayar : Rp. %d\n\n",sub_total_trans);
    system("PAUSE");
    return 0;
}
