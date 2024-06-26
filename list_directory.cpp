#include<iostream>
#include<filesystem>

using namespace std;
namespace fs=std::filesystem;

//rekurzivna metoda za izlistavanje sadrzaja foldera. 
// koristi parametar putanja koji sadrzi ime foldera koji hocemo da izlistamo
// i parametar dubina, koji je prosti string, koji nadovezujemo svakim novim 
// rekurzivnim pozivom, tako da dobijemo strukturu nalik na stablo u 
// file exploreru. 
// Parametar dubina je opcioni, a pocetna vrednost mu je prazan string
void list_dir(fs::path putanja,string dubina=""){
    cout<<dubina;//odvajamo ime onoliko koliko smo duboko u rekurziji
    cout<<putanja.filename()<<endl; // ispisujemo ime
    if(fs::is_directory(putanja)){ //proveravamo da li je na trenutnoj putanji folder
        for (const auto& dete : fs::directory_iterator(putanja)){
            //koristimo funkciju directory_iterator za prolazak kroz folder
                list_dir(dete, dubina+"--"); // rekurzivno pozivamo na podfolderu list_dir
        }
    }
}

int main(int argc, char* argv[])
{
    if(argc==1){
        throw std::invalid_argument("Poziv ne sadrzi putanju, pravilno koriscenje je <ime fajla> <putanja koja se lista>");
    }
    fs::path putanja=argv[1];//pocetna putanja. "." znaci trenutni folder
    if(!fs::exists(putanja)){
        throw std::invalid_argument("Putanja ne postoji");
    }
    list_dir(putanja);// pocetni poziv funkcije
    return 0;
}