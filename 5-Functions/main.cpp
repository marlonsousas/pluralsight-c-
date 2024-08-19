#include <iostream>
#include "functions.h"

using namespace std;

int sum(int x, int y){
    return x + y;
}

int main(){
    cout << sum(5, 5) << endl;
    cout << divs(10523, 5) << endl;
    return 0;
}

