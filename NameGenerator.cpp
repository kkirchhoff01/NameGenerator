#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(){
    ifstream instream("newfirstnames.txt");
    ifstream instream2("newlastnames.txt");
    ofstream outstream("RandomNames.txt");
    
    string fullName;
    string firstname[1000];
    string lastname[1000];
    
    for (int i = 0; i < 1000; i++) {
        instream >> firstname[i];
        instream2 >> lastname[i];
    }
    for (int j = 0; j < 1000; j++) {
        fullName = firstname[rand() % 1000] + " " + lastname[rand() % 1000];
        outstream << fullName << endl;
    }
    
    return 0;
    
}
