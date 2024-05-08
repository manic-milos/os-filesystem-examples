#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc, char* argv[]){
    if(argc != 2){
        cout << "Greska";
        return 1;
    }

    filesystem::path p=argv[1];

    if(filesystem::exists(p)){
        filesystem::remove(p);
    }
}