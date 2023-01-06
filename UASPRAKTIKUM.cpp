#include <iostream>
#include <fstream>

using namespace std;
fstream file;
void print(int arr[],int x){}

int total(int arr[][4]){
    int total;
    for(int x = 0;x < 12 ;x++){
        for(int z = 0; z < 4;z++){
            total += arr[x][z];
        }
    }
    return total;
}
int total_month(int arr[][4],int i ){
    int total = 0;
    for(int z = 0; z<4;z++){
        total += arr[i][z];
    }
    return total;
}

int max(int arr[][4]){
    int max = 0;
    for(int x = 0;x < 12;x++){
        for(int z = 0;z < 4;z++){
            if(arr[x][z] > max){
                max = arr[x][z];
                }
        }
    }
    return max;
}
int min(int arr[][4]){
    int min = arr[0][0];
    for(int x = 0;x < 12;x++){
        for(int z = 0;z < 4;z++){
            if(arr[x][z] < min){
                min = arr[x][z];
                }
        }
    }
    return min;
}
int range(int max,int min){
    return max - min;
}
int main(){
    string input;
    string tab = "\t";
    string month[12] = {"Jan","Feb","Mar","Apr","Mei","Jun","Jul","Aug","Sep","Okt","Nov","Des"};    
    string atr[5] = {"Bulan","Mobil","Motor","Bike","Lainnya"};
    int value[12][4] = {
        {55,85,62,45},
        {58,68,77,42},
        {49,66,72,55},
        {65,45,35,44},
        {45,80,66,50},
        {65,38,77,65},
        {59,65,71,50},
        {49,57,54,70},
        {64,44,39,66},
        {53,61,44,65},
        {63,55,48,63},
        {48,54,60,65}
    };
    for(int x = 0;x < 5;x++){
        cout << atr[x] << tab;
    }
    cout << endl;
    for(int x = 0;x< 12;x++){
        cout << month[x] << tab;
        for(int z = 0;z < 4;z++){
            cout << value[x][z] << tab;
        }
        cout << endl;
    }
    cout << endl;
    back:
    cout << "Pilih Bulan ";cin >> input;
    if(input == "Januari"){
        int c = 0;
        cout << "Total Unit Transportasi pada Bulan Januari adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Februari"){
        int c = 1;
        cout << "Total Unit Transportasi pada Bulan Februari adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Maret"){
        int c = 2;
        cout << "Total Unit Transportasi pada Bulan Maret adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "April"){
        int c = 3;
        cout << "Total Unit Transportasi pada Bulan April adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Mei"){
        int c = 4;
        cout << "Total Unit Transportasi pada Bulan Mei adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Juni"){
        int c = 5;
        cout << "Total Unit Transportasi pada Bulan Juni adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "July"){
        int c = 6;
        cout << "Total Unit Transportasi pada Bulan July adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Agustus"){
        int c = 7;
        cout << "Total Unit Transportasi pada Bulan Agustus adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "September"){
        int c = 8;
        cout << "Total Unit Transportasi pada Bulan September adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Oktober"){
        int c = 9;
        cout << "Total Unit Transportasi pada Bulan Oktober adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "November"){
        int c = 10;
        cout << "Total Unit Transportasi pada Bulan November adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else if(input == "Desember"){
        int c = 11;
        cout << "Total Unit Transportasi pada Bulan Desember adalah Sebesar "<< total_month(value,c)<<"buah";
    }
    else{
        cout << "Bulan yang anda Pilih Tidak Tersedia " << endl;
        cout <<"Silahkan Pilih kembali" << endl;
        goto back;
    }
    cout << endl << endl;
    int a = max(value);
    int b = min(value);

    char q;
    
    cout << "Apakah anda ingin mengetahui Nilai Terbesar dari data tersebut? y/n ";cin >> q;
    if(q == 'y'){
        cout << "Nilai Terbesar dari data tersebut adalah " << a << endl;
    }else{
        cout << "Terima kasih" << endl; 
    }
    cout << "Apakah anda ingin mengetahui NIlai Terkecil dari data tersebut? y/n ";cin >> q;
    if(q == 'y'){
        cout << "Nilai Terkecil dari data tersebut adalah " << b << endl;
    }else{
        cout << "Terima kasih" << endl; 
    }
    cout << "Apakah anda ingin mengetahui jarak Data? y/n ";cin >> q;
    if(q == 'y'){
        cout << "Jarak antardata bersebut adalah " << range(a,b) << endl;
    }else{
        cout << "Terima kasih" << endl; 
    }

    return 0;
}
