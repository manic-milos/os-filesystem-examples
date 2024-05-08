#include<iostream>
#include<filesystem>

using namespace std;
namespace fs=std::filesystem;

//nacin koriscenja <cp1> <ime fajla koji se kopira> <ime novog fajla u koji kopiramo>
int main(int argc, char* argv[]){
    cout<<argc<<endl;
    for(int i=0;i<argc;i++){
        cout<<argv[i]<<endl;
    }

    fs::path fajlKojiKopiramo=argv[1];
    fs::path fajlUKojiKopiramo=argv[2];

    fs::copy_file(fajlKojiKopiramo,fajlUKojiKopiramo);

}