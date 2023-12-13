#include <cstdlib>
#include <iostream>

using namespace std;
    
float fpersamaan2(int a,int b,int c,int y){
    float hasil;
    hasil = y/(7*b*a*c);
    return hasil;
}
int main (){
    cout <<"# Program mencari nilai y   #"<<endl;
    cout <<"# Program Dibuat Oleh SITI MASROPAH #"<<endl;
    cout <<"========================================="<<endl;
    int a,b,c,y;
    float hasil;
    cout<<"Masukan Nilai A :";
    cin>>a;
    cout<<"Masukan Nilai B :";
    cin>>b;
    cout<<"Masukan Nilai C :";
    cin>>c;
    cout<<"Masukan Nilai Y:";
    cin>>y;
    hasil = fpersamaan2(a,b,c,y);
    cout<<"Hasil Persamaan 2= "<<hasil<<endl<<endl;  
    system("pause");
    return 0;  
}
