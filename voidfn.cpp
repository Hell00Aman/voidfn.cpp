#include<bits/stdc++.h>
using namespace std;

// Function to print a greeting with the given name
void PrintName(string name){
    cout << "Hey " << name << endl;
}

int main(){
    string name;         // Variable to store first name
    cin >> name;         // Input first name
    PrintName(name);     // Call function to print greeting

    string name2;        // Variable to store second name
    cin >> name2;        // Input second name
    PrintName(name2);    // Call function again with second name

    return 0;
}
