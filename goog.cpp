#include <iostream>
using namespace std;
void line(){
    cout << "-------|-------------------------------" << endl;
}


int main(){
string nama;
char ans;
int ukuran_lens[4] = {180,150,90,70};
string tipe[4] = {"FT01X","FT22A","FT20T","FT22B"};

int harga_teleskop[4][4]= {{500000,430000,390000,370000},{620000,550000,465000,420000},{570000,540000,490000,370000},{520000,470000,430000,380000}};
int out =1;
while(out != 0){
cout << "Selamat datang di FotonAstro"  << endl;
cout << "kami menyediakan alat penelitian berupa Teleskop" << endl;

cout << "masukkan nama anda : ";cin >> nama;
cout << "apakah anda ingin membeli teleskop? ";cin >> ans;

if(ans == 'y' || ans == 'Y'){
    cout << "ini adalah produk yang kami tawarkan"<< endl;
    cout<< "ukuran |" <<"\t" << "Tipe dan harga" << endl;
    cout <<"Lensa  |";
    for(int x =0;x < 4;++x){
        cout << tipe[x] << "\t";
    }
    cout << endl;
    line();
    for(int x = 0;x < 4;++x){
        cout <<ukuran_lens[x]<< "\t";
        for(int z = 0;z<4;++z){
            cout << harga_teleskop[z][x] << "\t";
        }
        cout << endl;
    }
    int a,b;
    int ukuran;
    string tels;
    cout << "masukkan pilihan anda!" << endl;
    do{
    cout << "masukkan jenis teleskop: ";cin>> tels;
        if(tels == tipe[0]){
            a = 0;
        }
        else if(tels == tipe[1]){
            a = 1;
        }
        else if(tels == tipe[2]){
            a = 2;
        }
        else if(tels == tipe[3]){
            a = 3;
        }
        else{
            cout << "produk tidak tersedia " << endl;
        }
    }
    while(tels != tipe[0]&&tels != tipe[1]&&tels != tipe[2]&&tels != tipe[3]);

    //cout << "tentukan ukuran diameter lensanya : ";cin >> ukuran;
    while(ukuran != ukuran_lens[0]&&ukuran != ukuran_lens[1]&&ukuran != ukuran_lens[2]&&ukuran != ukuran_lens[3]){
    cout << "tentukan ukuran diameter lensanya : ";cin >> ukuran;
        if(ukuran == ukuran_lens[0]){
            b = 0;
        }
        else if(ukuran == ukuran_lens[1]){
            b = 1;
        }
        else if(ukuran == ukuran_lens[2]){
            b = 2;
        }
        else if(ukuran == ukuran_lens[3]){
            b = 3;
        }
        else{
            cout << "produk tidak tersedia " << endl;
        }
    }
    cout << "Anda telah memilih teleskop bertipe " << tipe[a] << " dengan ukuran lensa ber diameter " << ukuran_lens[b] <<"mm"<< endl;
    cout << "Pembayaran yang harus anda berikan adalah seberar Rp." << harga_teleskop[a][b] << endl;

}
else{
    cout << "Terima kasih";
}cout << endl<< endl<< endl;
cin >> out;

//KODINGAN INI TIDAK AKAN BERHENTI KECUALI DIMASUKKAN ANGKA 0
}

return 0;
}
