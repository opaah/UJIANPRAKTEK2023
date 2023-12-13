#include <cstdlib>
#include <iostream>

using namespace std;
    
float fpersamaan1(int a,int b,int c){
    float hasil;
    hasil = (4*a*b)/(7*c);
    return hasil;
}
int main (){
    cout <<"# Program mencari nilai X   #"<<endl;
    cout <<"# Program Dibuat Oleh SITI MASROPAH #"<<endl;
    cout <<"========================================="<<endl;
    int a,b,c;
    float hasil;
    cout<<"Masukan Nilai A :";
    cin>>a;
    cout<<"Masukan Nilai B :";
    cin>>b;
    cout<<"Masukan Nilai C :";
    cin>>c;
    hasil = fpersamaan1(a,b,c);
    cout<<"Hasil Persamaan 1 = "<<hasil<<endl<<endl;  
    system("pause");
    return 0;  
}
