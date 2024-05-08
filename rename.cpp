#include<iostream>
#include<filesystem>

using namespace std;
namespace fs=filesystem;

int main(int argc, char* argv[]){
    if(argc!=3){
        cout<<"Greska: Pravilni poziv programa: rename <ime fajla koji se menja> <ime u koje se menja>";
        return -1;
    }

    //argv[0] - ime programa  =rename
    //argv[1] - ime fajla koji se menja
    //argv[2] - ime u koje se menja


    fs::path from=argv[1];
    fs::path to=argv[2];

    if(!fs::exists(from)){
        cout<<"Fajl ne postoji";
        return -1;
    }
    if(fs::exists(to)){
        cout<<"Ime vec postoji!";
        return -1;
    }

    fs::rename(from,to);
    return 0;
}