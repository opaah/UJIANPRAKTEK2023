#include <cstdlib>
#include <iostream>
#include <cmath>

using namespace std;
    
float fpersamaan3(int a,int b,int c){
    float fpersamaan3,akar;
    akar = sqrt(b*b)-(4*a*c);
    fpersamaan3 =(b*akar)/(2*a);
    return fpersamaan3;
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
    hasil = fpersamaan3(a,b,c);
    cout<<"Hasil Persamaan 3= "<<hasil<<endl<<endl;  
    system("pause");
    return 0;  
}
