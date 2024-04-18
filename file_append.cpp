#include<iostream>
#include<fstream>

using namespace std;

//kako bismo koristili bit flegove u nasoj funkciji
void funkcija_sa_flegovima(int fleg){
    bool out=fleg&ios::out;
    if(out){
        cout<<"fleg za output"<<endl;
    }
    bool append=fleg&ios::app;
    if(append){
        cout<<"fleg za nadovezivanje";
    }
}

int main(){
    funkcija_sa_flegovima(ios::out|ios::app);// demonstracija nase funkcije

    //nastavak koda otvara fajl i upisuje na kraj fajla "nastavljam"
    fstream fajl;
    fajl.open("test.cpp", ios::app); // fleg ios::app kaze funkciji open 
    // da ne brise prethodni sadrzaj, nego da krene upis sa kraja postojeceg sadrzaja
    fajl<<"nastavljam"; // koristimo fstream da upisemo "nastavljam u fajl"
    return 0;
}

