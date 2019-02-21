#include <iostream>
#include <bits/stdc++.h>
#include <string>

using namespace std;



//displays error message relevent to inputs
void badIntMessage(float max, float min){
    cout << endl << "Please enter a valid number!" << endl;

    if ((max == INT_MAX || max == UINT_MAX) && (min == INT_MIN)){
        cout << "(Any)";
    }else if (max == INT_MAX || max == UINT_MAX){
        cout << "(Larger than " << min << "): ";
    }else if (min == INT_MIN){
        cout << "(Less than " << max << "): ";
    }else{
        cout << "(" << min << " - " << max << "): ";
    }
}

template <typename T>
void swap(T *a, T *b){
    T temp = *a;
    *a = *b;
    *b = temp;
}

//swaps if a is larger than b
template <typename T>
void setMax(T *a, T *b){
    if(*a > *b){
        swap(a, b);
    }
}

//gets a positive int from the user
int getInt(unsigned int max = UINT_MAX, unsigned int min = 0){
    string input;
    bool badInput;

    //if min is larger than max swap
    setMax(&min, &max);

    do{
        badInput = false;
        cin >> input;
        
        for(int i = 0; i < input.length(); i++){
            if(input[i] < '0' || input[i] > '9'){
               badInput = true;
               badIntMessage(max, min);
               break;
            }
        }
        
        //this checks that the values are within the min and max expected
        if(!badInput && (atoi(input.c_str()) < min || atoi(input.c_str()) > max)){
            badInput = true;
            badIntMessage(max, min);
        }
    }while(badInput);

    return atoi(input.c_str());
}

//gets any int from the user
int getSignInt(int max = INT_MAX, int min = INT_MIN){
    string input;
    bool badInput;

    //if min is larger than max swap
    setMax(&min, &max);

    do{
        badInput = false;
        cin >> input;
        
        for(int i = 0; i < input.length(); i++){
            //looks for negitive sign at first instance and no other instance
            if(i == 0 && input[0] == '-'){
                continue;
            }
            if (input[i] < '0' || input[i] > '9'){
                badInput = true;
                badIntMessage(max, min);
                break;
            }
        }
        //this checks that the values are within the min and max expected
        if(!badInput && (atoi(input.c_str()) < min || atoi(input.c_str()) > max)){
            badInput = true;
            badIntMessage(max, min);
        }
    }while(badInput);

    return atoi(input.c_str());
}

//gets positive int from the user
float getFloat(float max = INT_MAX, float min = 0){
    string input;
    bool badInput;
    int decimal = 0;

    //if min is larger than max swap
    setMax(&min, &max);

    do{
        badInput = false;
        cin >> input;

        for (int i = 0; i < input.length(); i++){
            //looks for a single decimal point
            if (input[i] == '.'){
                if(decimal == 0){
                    decimal++;
                    continue;
                }
            }
            if (input[i] < '0' || input[i] > '9'){
                badInput = true;
                badIntMessage(max, min);
                break;
            }
        }
        //this checks that the values are within the min and max expected
        if (!badInput && (atof(input.c_str()) < min || atof(input.c_str()) > max))
        {
            badInput = true;
            badIntMessage(max, min);
        }
    } while (badInput);

    return atof(input.c_str());
}

//gets any int from the user
float getSignFloat(float max = INT_MAX, float min = INT_MIN){
    string input;
    bool badInput;
    int decimal = 0;

    //if min is larger than max swap
    setMax(&min, &max);

    do{
        badInput = false;
        cin >> input;

        for (int i = 0; i < input.length(); i++){
            //looks for negitive sign at first instance and no other instance
            if (i == 0 && input[0] == '-'){
                continue;
            }
            //looks for a single decimal point
            if (input[i] == '.'){
                if (decimal == 0){
                    decimal++;
                    continue;
                }
            }
            if (input[i] < '0' || input[i] > '9'){
                badInput = true;
                badIntMessage(max, min);
                break;
            }
        }
        //this checks that the values are within the min and max expected
        if (!badInput && (atof(input.c_str()) < min || atof(input.c_str()) > max)){
            badInput = true;
            badIntMessage(max, min);
        }
    } while (badInput);

    return atof(input.c_str());
}