//Avleen Gill - Lab 18 COMSC-210
//movie reviews with nodes

#include <iostream>
using namespace std;

struct Node{
    float rating;
    string comment;
    Node * next;
};
void output(Node *);
void addfront(Node* &, float r, string c);
void addback(Node * &, float r, string c);

int main() {
    Node *head = nullptr;
    //ask user which method to use, then apply
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
        float r;
        string c;
        cout << "Enter review rating 0-5: ";
        cin >> r;
        cin.ignore();
        cout << "Enter review comments: ";
        getline(cin, c);
        addfront(head, r, c);
    }
    else if (entry == 2) {
        float r;
        string c;
        cout << "Enter review rating 0-5: ";
        cin >> r;
        cin.ignore();
        cout << "Enter review comments: ";
        getline(cin, c);
        addback(head, r, c);
    }
    
    

}
//output function copied from lab 17
void output(Node * head) { 
    if (!head){
        cout << "Empty list\n";
    }
    else {
        int count = 1;
        Node * current = head; //current and head now point at same thing, the first node
        while (current) {
            cout << "[ Review #" << count++ << " ] " << current->rating << ": " << current->comment << endl;
            current = current->next; //current points to next node now
        }
    }
    cout << endl;
}

void addfront(Node * &head, float r, string c) {
    Node *newVal = new Node;
    if (!head) {
        head = newVal;
        newVal->next = nullptr;
        newVal->value = tmp_val;
    }
    else {
        newVal->next = head;
        newVal->value = tmp_val;
        head = newVal;
    }
}
void addback(Node * &head, float r, string c) {
    
}