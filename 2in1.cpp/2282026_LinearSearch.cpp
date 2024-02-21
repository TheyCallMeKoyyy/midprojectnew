#include <iostream>
using namespace std;

int pencarianLinear(int arr[5][5], int pjg, int x){
    for (int i = 0; i < pjg; ++i){
        if (arr[i][0] == x){
            return i; 
        }
    }
    return -1;
}

int main(){
    int dataMhs [5][5];
    int nim;
    cout<<"Masukan data NIM dan Ujian dari Mahasiswa"<<endl;
    for(int i = 0; i < 3; i++){
        cout<<"Masukan NIM dari Mahasiswa ke-"<<i+1<<": ";
        cin>>dataMhs[i][0];
        for(int j = 1; j < 4; j++){
            cout<<"Masukan Nilai Ujian-"<<j<<": ";
            cin>>dataMhs[i][j];
        }
    }
    //membersihkan layar
    system("clear"); //system("cls");
    cout<<"Masukan NIM yang dicari: ";
    cin>>nim;
    int hasil = pencarianLinear(dataMhs, 3, nim);
    float total = 0;
    if(hasil == -1){
        cout<<"Data tidak ditemukan!";
    }else{
        cout<<"Data dari Mahasiswa/i dengan NIM: "<<dataMhs[hasil][0]<<endl;
        for(int j = 1; j < 4; j++){
            cout<<"Ujian ke- "<<j<<": "<<dataMhs[hasil][j]<<endl;
            total =+ dataMhs[hasil][j];
        }
        float total = dataMhs[hasil][1]+dataMhs[hasil][2]+dataMhs[hasil][3];
        float lulus = total/3;
        cout<<lulus<<endl;
        if(lulus > 85.0){
            cout<<"Mahasiswa/i LULUS";
        }else{
            cout<<"Mahasiswa/i Tidak Lulus";
        }
    }
    return 0;
}