#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main(){
    string word;
    int x=0;
    cout << "Enter a word: ";
    getline(cin, word);
    cout << "You entered: " << word << endl;
    for(int i = 0; i < word.length(); i++){
        if (!(word[i]>='A') && (word[i]<='z')){
            int j=i+1;
            if ((word[j]>='A') && (word[j]<='Z')){
                x=1;
            }
        }
    }
    if (x==1){
        cout << "It is a camel case";
    }
    else{
        cout << "It is not a camel case";
    }
}