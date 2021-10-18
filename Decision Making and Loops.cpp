# Decision-Making-and-Loops
# C++ program where we check if a person is eligible to vote or not. 

#include<iostream>        //Header file
using namespace std;

int main() 
{
    int age;
    cout << "Enter age of a user:";       //Taking input from the User and displaying the output 
    cin>>age;                             

    if (age >= 18)                        //Eligibility Criteria condition for the voting      
    {
        cout << "\n You are eligible for voting";
    } 
    else 
    {
        cout << "\n You are not eligible for voting";
    }

    return 0;
}
