// Program to convert a given name and the text into Uppercase.
#include <iostream>
#include <string>  
#include <algorithm> 
using namespace std;

// Function to print the greeting
void printGreeting(const string& name) 
{
    string upperGreeting = "Hello, " + name + "!";
    transform(upperGreeting.begin(), upperGreeting.end(), upperGreeting.begin(), ::toupper);
    cout<<"Final Result: "<<upperGreeting;
}

int main() {
    // The name to be used in the greeting
    string name;
    cin>>name;
    printGreeting(name);
    return 0;
}