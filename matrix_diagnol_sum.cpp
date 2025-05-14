#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int r,c;
    cout << "Enter the rows and columns ";
    cin >> r >> c;
    int m[r][c];
    int sum=0;
    cout << "enter elements" << endl;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin >> m[i][j];
            if(i==j){
                sum=sum+m[i][j];
            }
        }
    }
    cout << "The sum is " << sum;
}