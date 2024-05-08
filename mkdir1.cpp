#include <bits/stdc++.h>

using namespace std;
namespace fs=std::filesystem;

int main(int argc, char* argv[])
{
    if(argc > 0) {
        fs::path path1 = argv[1];
        fs::create_directory(path1);
        return 0;
    }
    cerr << "Netacan poziv" << endl;
    return 1;
}