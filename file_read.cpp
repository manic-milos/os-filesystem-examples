#include<iostream>
#include<fstream>

using namespace std;

void funkcija_sa_flegovima(int fleg){
    bool out=fleg&ios::out;
    if(out){
        cout<<"output";
    }
}

int main(){
    fstream fajl;
    fajl.open("test.cpp");
    string sadrzaj;
    while(!fajl.eof()){  
         fajl>>sadrzaj;
        cout<<sadrzaj<<endl;
    }
    return 0;
}

