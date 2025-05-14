#include <iostream>
#include <cmath>
#include <string>
using namespace std;
int main(){
    char ch;
    cout << "enter the English Letter: ";
    cin >> ch;
    if (ch>='A' && ch<='Z'){
        cout << "upper case";
    }
    else if (ch>='a' && ch<='z'){
        cout << "lower case";
    }
    else{
        cout << "it is not a english letter";
    }
    return 0;
}