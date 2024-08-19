#include <iostream>
using namespace std;

int main(){
    // IF Flow
    int firstNumber;
    int secnumber;
    
    cout << "Enter the 1st number: ";
    cin >> firstNumber;
    
    cout << "Enter the 2nd number: ";
    cin >> secnumber;

    if (firstNumber + secnumber > 10){
        cout << "10 Sup" << endl;
    }else{
        cout << "10 Sub" << endl;
    }
    return 0;
}