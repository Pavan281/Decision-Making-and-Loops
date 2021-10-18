# Decision-Making-and-Loops
# C++ program where we check if a person is eligible to vote or not. 

#include<iostream>
using namespace std;

int main() {

    int age;
    cout << "\n Enter age of a user:";
    cin>>age;

    if (age >= 18) {
        cout << "\n You are eligible for voting";
    } else {
        cout << "\n You are not eligible for voting";
    }

    return 0;
}
