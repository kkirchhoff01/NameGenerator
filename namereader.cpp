#include <iostream>
#include <fstream>
#include <string>
#include <ctype.h>

using namespace std;

int main(){
    ifstream instream("firstnames.txt");
    ofstream outstream("newfirstnames.txt");
    string name;
    int count=1;
    
    while (!instream.eof()) {
        instream >> name;
        /*for (int i = 1; i < name.length(); i++) {
            name[i] = tolower(name[i]);
        }*/
        
        if (count%2 == 0) {
            outstream << name << endl;
            cout << name << endl;
        }
        count++;
    }
    
    return 0;
}
