#include <iostream>
#include <fstream>
// sizeof(arr)/sizeof(int)
// sizeof(arr)/sizeof(arr[0])
// sizeof(arr[0])/sizeof(int)
using namespace std;
// fungsi untuk menghitung total pengunjung 
// int data sebagai parameter untuk representasi array yang dibuat pada fungsi main()
int total_pengunjung(int data[][4], int p){
    int total = 0;
    for(int x = 0;x < p;++x){
        for(int z = 0; z < 4;++z){
            total += data[x][z];
        }
    }
    return total;
}
// fungsi untuk menentukan bulan dengan jumlah pengunjung terbanyak
// b_max adalah variabel untuk menyimpan pengunjung terbanyak pada suatu bulan
int fav(int data[][4],int p,int l){
    int sum[p]={};
    int b_max = 0;
    int a;
    for(int x = 0;x < p;++x){
        for(int y = 0;y < l;++y){
            sum[x] += data[x][y];
        }
    }
    for(int z = 0;z < p;++z){
        if(b_max < sum[z]){
            b_max = sum[z];
            a = z;
        }
    }
    return a;
}
// fungsi untuk mencari tempat pariwisata yang paling banyak peminat;
int fav_par(int data[][4],int p,int l){
    int a=0,b=0,c=0,d=0;
    for(int x = 0;x < p;++x){
        for(int z = 0;z < l;++z){
            if(z == 0){
                a += data[x][z];
            }
            else if(z == 1){
                b += data[x][z];
            }
            else if(z == 2){
                c += data[x][z];
            }
            else if(z == 3){
                d += data[x][z];
            }
        }
    }
    int n = 0;
    int hasil[l]={a,b,c,d};
    int maxi;
    for(int x = 0;x < l;++x){
        if(maxi > hasil[x]){
            maxi = hasil[x];
            n = x;
        }
    }
    return n;
}
// fungsi untuk menghitung jumlah wisatawan pada sebuah pariwisata
int wisatawan(int data[][4],int p,int l){
    int a=0,b=0,c=0,d=0;
    for(int x = 0;x < p;++x){
        for(int z = 0;z < l;++z){
            if(z == 0){
                a += data[x][0];
            }
            if(z == 1){
                b += data[x][1];
            }
            if(z == 2){
                c += data[x][2];
            }
            if(z == 3){
                d += data[x][3];
            }
        }
    }
    int hasil[l]={a,b,c,d};
    for(int x = 0;x < l;++x){
        int a = hasil[0];
        if(a < hasil[x]){
            a = hasil[x];
        }
    }
    return a;
}

int main(){
    fstream file;
    int jum_par = 4;
    string nampar[jum_par] = {"Taman Mini","Air Terjun Langit","Gunung Tabuan","Pantai Durjana"};
    string bulan[6] = {"Maret","April","Mei","Juni","Juli","Agustus"};
    int jum_peng[6][4] = {
        {120,70,40,95},
        {110,63,45,87},
        {107,74,58,83},
        {130,58,65,79},
        {99,65,61,80},
        {104,60,40,99}
    };
file.open("wisata.txt", ios::app);
file << "Data Pariwisata di Kabupaten Marbelow" << endl << endl;
    cout << "Berikut adalah Data Jumlah Pengunjung pada berbagai tempat Pariwisata di Kabupaten Marbelow" << endl;
    for(int x = 0;x < jum_par;++x){
        cout <<"\t"<< nampar[x];
    }
    cout << endl;
    for(int x = 0;x < 6;++x){
        cout << bulan[x] << "\t";
        for(int z = 0;z<jum_par;z++){
            cout << "\t" << jum_peng[x][z] << "\t";
        }
        cout << endl;
    }
    // variabel p dan l dibawah digunakan untuk menghitung panjang dan lebar sebuah array(dua dimensi)
    int p = sizeof(jum_peng)/sizeof(jum_peng[0]);
    int l = sizeof(jum_peng[0])/sizeof(int);
    
    // variabel np digunakan untuk menyimpan nilai dari pariwisata terfavorit
    int np = fav_par(jum_peng,p,l);
    cout << endl;
    cout << "Total pengunjung dalam 6 Bulan ini adalah sebesar " << total_pengunjung(jum_peng,p) << " Orang" << endl;
    file << "Total pengunjung dalam 6 Bulan ini adalah sebesar " << total_pengunjung(jum_peng,p) << " Orang" << endl;

    int b = fav(jum_peng,p,l);
    cout << "Jumlah pengunjung terbanyak terdapat pada bulan " <<bulan[b] << endl;
    file << "Jumlah pengunjung terbanyak terdapat pada bulan " <<bulan[b] << endl;
    cout << "Tempat pariwisata yang banyak di minati adalah "<< nampar[np] << " dengan jumlah sebanyak " << wisatawan(jum_peng,p,l) << " Wisatawan"<< endl;
    file << "Tempat pariwisata yang banyak di minati adalah "<< nampar[np] << " dengan jumlah sebanyak " << wisatawan(jum_peng,p,l) << " Wisatawan"<< endl;
    file.close();
    return 0;
}

