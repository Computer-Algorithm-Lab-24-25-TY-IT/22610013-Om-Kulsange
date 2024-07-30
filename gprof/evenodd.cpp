#include <iostream> 

using namespace std; 

bool even(int number); 

int main() {
    int number;

    cout << "Enter an integer: ";
    cin >> number;


    if (even(number)) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }

    return 0; 
}

// Function definition
bool even(int number) {
    return number % 2 == 0; 
}
