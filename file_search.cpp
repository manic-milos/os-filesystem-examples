#include<iostream>
#include<filesystem>
#include<fstream>

using namespace std;
namespace fs=std::filesystem;

int main(){
    fs::path folder=".\\testfolder";
    string fajl="test.txt";
    string sadrzaj="test";
    for(const auto& dete : fs::recursive_directory_iterator(folder)){
        if(dete.path().filename()==fajl){
            cout<<"nasli smo ga"<<endl;
            fstream testfajl;
            testfajl.open(dete.path());
            if(testfajl.is_open()){
                testfajl<<sadrzaj;
                testfajl.close();
            }
        }
        cout<<dete.path().filename()<<endl;
    }

}