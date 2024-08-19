#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    // Name
    string name;
    cout << "Name: ";
    cin >> name;

    // Vector
    vector<int> nums;

    for (int i = 0; i <= 10; i++){
        nums.push_back(i);

    }

    for (auto item : nums){
        cout << item << endl;
    }
}