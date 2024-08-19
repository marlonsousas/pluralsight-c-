#include <iostream>
using namespace std;

int main(){
    std::cout << "Hello World!" << std::endl;

    // Int Keyboard input
    int age;
    cout << "Enter your age:";
    cin >> age;
    cout << "Your born in " << 2024 - age << " or " << 2024 - age - 1 << endl;
}