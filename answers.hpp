#include <iostream>
//#include <curses.h>
#include "numErrors.hpp"

using namespace std;

// input char without the need for hitting enter only works on linux
// char input(){
//     system("stty cbreak -echo");
//     char in = getchar();
//     system("stty cooked echo");
//     return in;
// }

// for choosing n number of options
int answer(int values){
    return getInt(values);
}

// same as above but it can use float values
float answer(float values){
    return getFloat(values);
}

// for choosing between a set of options
string answer(string *options){
    string ans;
    bool loop = true;
    while(loop){
        cin >> ans;
        for (int i = 0; i < options->length(); i++){
            if(ans == options[i]){
                loop == false;
                break;
            }
        }
        if(loop){
            cout << "Invalid! input a valid string" << endl;
            cout << "(Try again): ";
        }
    }
    return ans;
}

// for choosing between a set of chars with out needing to hit enter
// char answer(string *options){
//     char ans;
//     bool loop = true;
//     while (loop){
//         ans = input();
//         for (int i = 0; i < options->length(); i++){
//             if (ans == options[i]){
//                 loop == false;
//                 break;
//             }
//         }
//         if (loop){
//             cout << ": ";
//         }
//     }
//     return ans;
// }