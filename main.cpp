//Avleen Gill - Lab 18 COMSC-210
//movie reviews with nodes

#include <iostream>
using namespace std;

struct Review{
    float rating;
    string comment;
    
};

int main() {
    cout << "Which linked list method should we use?\n";
    cout << "\t[1] New nodes are added at the head of the linked list\n";
    cout << "\t[2] New nodes are added at the tail of the linked list\n";
    int entry;
    cin >> entry;
    while (entry > 2 or entry < 1){
        cout << "Error. Please enter 1 or 2: ";
        cin >> entry;
    }
    if (entry == 1) {

    }
    else if (entry == 2) {

    }
    
    
    




}