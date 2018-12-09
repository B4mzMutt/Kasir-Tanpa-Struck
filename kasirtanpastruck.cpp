#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

using namespace std;
int main()
{
    int kode,pri,jml,tot,byr,kbl;
    char mad;
    do
    {
        cout<<" Pondok Makan B4mzmutt "<<endl;
        cout<<" Pemadam Kelaparan "<<endl;
        cout<<" Chef Xtreme Ma'nyos Pokoknya "<<endl;
        cout<<" Perum GBP 1&2 , Telajung , Cikarang Barat "<<endl;
        cout<<"======================================================"<<endl;
        cout<<""<<endl;
        cout<<"Menu Makanan                             Harga"<<endl;
        cout<<"1.PAKET AYAM + NASI + AIR MINERAL        Rp. 19.000"<<endl;
        cout<<"2.PAKET NASI GORENG + ES TEH MANIS       Rp. 18.000"<<endl;
        cout<<"3.PAKET MIE AYAM PANGSIT + ES JERUK      Rp. 19.000"<<endl;
        cout<<"4.PAKET PECEL AYAM + ES JERUK            Rp. 19.000"<<endl;
        cout<<"5.AYAM GORENG                            Rp. 10.000"<<endl;
        cout<<"6.NASI GORENG                            Rp. 12.000"<<endl;
        cout<<"7.MIE AYAM PANGSIT                       Rp. 12.000"<<endl;
        cout<<"8.PECEL AYAM                             Rp. 12.000"<<endl;
        cout<<"9.ES TEH MANIS                           Rp. 6.000"<<endl;
        cout<<"10.ES JERUK                              Rp. 7.000"<<endl;
        cout<<"11.AIR MINERAL                           Rp. 5.000"<<endl;
        cout<<'\n'<<"MASUKAN PILIHAN ANDA :";
        cin>>kode;
        switch(kode){
    case 1:
        cout<<'\n'<<"AYAM GORENG + NASI PUTIH + AIR MINERAL"<<endl;
        pri=10000+4000+5000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 2:
        cout<<'\n'<<"NASI GORENG + ES TEH MANIS"<<endl;
        pri=12000+6000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 3:
        cout<<'\n'<<"MIE AYAM PANGSIT + ES JERUK"<<endl;
        pri=12000+7000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 4:
        cout<<'\n'<<"PECEL AYAM + ES JERUK"<<endl;
        pri=12000+7000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 5:
        cout<<'\n'<<"AYAM GORENG"<<endl;
        pri=10000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 6:
        cout<<'\n'<<"NASI GORENG"<<endl;
        pri=12000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 7:
        cout<<'\n'<<"MIE AYAM PANGSIT"<<endl;
        pri=12000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 8:
        cout<<'\n'<<"PECEL AYAM"<<endl;
        pri=12000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 9:
        cout<<'\n'<<"ES TEH MANIS"<<endl;
        pri=6000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 10:
        cout<<'\n'<<"ES JERUK"<<endl;
        pri=7000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    case 11:
        cout<<'\n'<<"AIR MINERAL"<<endl;
        pri=5000;
        cout<<"Masukan jumlah:";
        cin>>jml;
        tot=pri*jml;
        cout<<"Total harganya yaitu: Rp."<<tot<<endl;
        cout<<"DIBAYAR: Rp.";
        cin>>byr;
        kbl=byr-tot;
        cout<<"KEMBALI: Rp."<<kbl<<endl;
        cout<<"Masih ada Y/T:";
        cin>>mad;
        break;
    default:
        cout<<"Kode yang anda masukan tidak ada";
    }
    }
    while(mad/='Y');
    cout<<"Terima kasih Atas Kunjungan Anda di Pondok Makan B4mzmutt";
    getch();
    return 0;
}
