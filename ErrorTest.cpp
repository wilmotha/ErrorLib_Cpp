#include "numErrors.hpp"

void badIntMessageTest(){
    cout << "TBA..." << endl;
}

void swapTest(){
    cout << "TBA..." << endl;
}

void setMaxTest(){
    cout << "TBA..." << endl;
}

void getIntTest(){
    int temp;
    
    //no parameters sets between 0 and UINT_MAX
    cout << "Enter a positve int" << endl 
         << "(Any): ";
    temp = getInt();
    cout << "Your int: " << temp << endl 
         << endl;

    //one parameters sets between 0 and parameter
    cout << "Enter a positve int" << endl
         << "(0 - 10): ";
    temp = getInt(10);
    cout << "Your int: " << temp << endl 
         << endl;

    //two parameters sets between the second number and the first
    cout << "Enter a positve int" << endl
         << "(50 - 100): ";
    temp = getInt(100, 50);
    cout << "Your int: " << temp << endl 
         << endl;
}

void getIntSignTest(){
    int temp;

    //no parameters sets between 0 and UINT_MAX
    cout << "Enter an int" << endl
         << "(Any): ";
    temp = getSignInt();
    cout << "Your int: " << temp << endl
         << endl;

    //one parameters sets between 0 and parameter
    cout << "Enter an int" << endl
         << "(under 10): ";
    temp = getSignInt(10);
    cout << "Your int: " << temp << endl
         << endl;

    //two parameters sets between the second number and the first
    cout << "Enter an int" << endl
         << "(-50 - 100): ";
    temp = getSignInt(100, -50);
    cout << "Your int: " << temp << endl
         << endl;
}

void getFloatTest(){
    float temp;

    //no parameters sets between 0 and UINT_MAX
    cout << "Enter a positve float" << endl
         << "(Any): ";
    temp = getFloat();
    cout << "Your float: " << temp << endl
         << endl;

    //one parameters sets between 0 and parameter
    cout << "Enter a positve float" << endl
         << "(under 10.4): ";
    temp = getFloat(10.4);
    cout << "Your float: " << temp << endl
         << endl;

    //two parameters sets between the second number and the first
    cout << "Enter a positive float" << endl
         << "(23.2 - 34.2): ";
    temp = getFloat(34.2, 23.2);
    cout << "Your float: " << temp << endl
         << endl;
}

void getFloatSignTest(){
    float temp;

    //no parameters sets between 0 and UINT_MAX
    cout << "Enter a float" << endl
         << "(Any): ";
    temp = getSignFloat();
    cout << "Your float: " << temp << endl
         << endl;

    //one parameters sets between 0 and parameter
    cout << "Enter a float" << endl
         << "(under 10.4): ";
    temp = getSignFloat(10.4);
    cout << "Your float: " << temp << endl
         << endl;

    //two parameters sets between the second number and the first
    cout << "Enter a float" << endl
         << "(-23.2 - 34.2): ";
    temp = getSignFloat(34.2, -23.2);
    cout << "Your float: " << temp << endl
         << endl;
}

int main(){

    badIntMessageTest();

    swapTest();

    setMaxTest();

    getIntTest();
    
    getIntSignTest();

    getFloatTest();

    getFloatSignTest();

    return 0;
}