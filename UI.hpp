#include <iostream>
#include <string>


using namespace std;

void line(int skip = 1){
    cout << "==========================================";
    skip(skip);
}

void skip(int skip = 1){
    for(int x = 0; x < skip; x++){
        cout << endl;
    }
}

