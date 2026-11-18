#include <iostream>
using namespace std;

int main() {
  //DEKLARASI
  float panjang, lebar,luas;

  //input
  cout<<"masukkan nilai panjang :"<<endl;
  cin>>panjang;
  cout<<"nasukkan nilai lebar :"<<endl;
  cin>>lebar;

  //proses
  cout<<"hitung luas persegi panjang"<<endl;

  luas = panjang * lebar;

  //output
  cout<<"tampilkan hasil luas :" <<luas<<endl;

  return 0;
}

