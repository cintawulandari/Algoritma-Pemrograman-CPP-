#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char lanjut='y';
    int menu,porsi;
    int totalkotor=0;
    double diskon=0;
    cout << "             WARUNG MAKAN MAJU JAYA" << endl;


    do {
        cout<<endl;
        cout<<"  DAFTAR MENU"<<endl;
        cout<<"1. Nasi goreng  - Rp 15.000"<<endl;
        cout<<"2. Ayam goreng  - Rp 20.000"<<endl;
        cout<<"3. Es teh manis - Rp 5.000"<<endl;
        cout<<"4. Kopi hitam   - Rp 7.000"<<endl;
        cout<<"Pilih Menu (1-4)= ";cin>>menu;
        cout<<"Jumlah porsi = ";cin>>porsi;
        cout<<"Tambah pesanan lagi (y/n) = ";cin>>lanjut;

        switch (menu){
        case 1:
        totalkotor+=15000*porsi;
        break;
        case 2:
        totalkotor+=20000*porsi;
        break;
        case 3:
        totalkotor+=5000*porsi;
        break;
        case 4:
        totalkotor+=7000*porsi;
        break;
        default:
        cout<<"Pilihan tidak tersedia, coba lagi."<<endl;
        continue;
    }
    } while (lanjut=='y' || lanjut=='Y');

    if (totalkotor>=50000)
        diskon=totalkotor*0.1;

    double totalbayar=totalkotor-diskon;

    cout<<endl;
    cout<<"          RINGKASAN DATA "<<endl;
    cout << fixed << setprecision(0);
    cout<<"Total Kotor  = "<<totalkotor<<endl;
    if (totalkotor>=50000)
        cout<<"Diskon (10%) = "<<diskon<<endl;
    cout<<"Total Bayar  = "<<totalbayar<<endl;

    return 0;
}
