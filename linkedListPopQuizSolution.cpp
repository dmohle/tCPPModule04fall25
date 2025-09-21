// linkedListPopQuizSolution.cpp
// dH 9/20/25

#include <iostream>
#include <string>

using namespace std;

struct node {
    char data;
    node* next;
};

int main() {

    cout << "\n    *********** Hello and welcome to the linked list pop quiz! *****************\n";

    // Create a string named myStr and initialize it to "abc"
    string myStr = "abcDefg";

    // Test string output and string indexing
    cout << "myStr = " << myStr << endl;
    cout << "\n myStr[0] is: " << myStr[0] << endl;
    cout << "\n myStr[1] is: " << myStr[1] << endl;
    cout << "\n myStr[2] is: " << myStr[2] << endl;


    // Create two pointers
    node* pHead = nullptr;
    node* pCurrent = nullptr;

    // Linked List Steps
    // 1) Create a new node
    // 2) Fill the data fields
    // 3) Attach the node to the head of list
    // 4) Reposition head of list pointer

    // Boundary Condition: The start of the list/
    pHead = new node();
    pHead->data = myStr[0];
    pHead->next = nullptr;

    // Create two more nodes

    // This is the second node in our list.
    // Step 1: Create a new node
    pCurrent = new node();
    // Step 2: Fill the data field(s)
    pCurrent->data = myStr[1];
    // Step 3: Attach to head of list
    pCurrent->next = pHead;
    // Step 4: Reposition head of list
    pHead = pCurrent;

    // This is the second node in our list.
    // Step 1: Create a new node
    pCurrent = new node();
    // Step 2: Fill the data field(s)
    pCurrent->data = myStr[2];
    // Step 3: Attach to head of list
    pCurrent->next = pHead;
    // Step 4: Reposition head of list
    pHead = pCurrent;

    // Output the linked list.
    cout << "\n Linked list data: " << pHead->data << endl;
    cout << "\n Linked list data: " << pHead->next->data << endl;
    cout << "\n Linked list data: " << pHead->next->next->data << endl;

    // Use a for loop to build a linked list of all chars in myStr

    // Find myStr's length
    int length = myStr.length();
    cout << "\n Length of myStr is: " << length << endl;

    // What is wrong with this code?
    // Why does it not fail?
    for (int i=0; i<100; i++) {
        new node;
    }

    // What does this code do?
    // Is this proper C++ programming?
    for (int i = 0; i < 7; i++) {
        node* myNode = new node;
        myNode->data = myStr[i];
        cout << "\n Linked list data: " << myNode->data << endl;
        delete myNode;
    }


    // Create the linked list using a for loop

    // We must have a starting node outside the for loop.
    // Boundary Condition: The start of the list

    // Note: pHead and pCurrent are already node pointers, we do not redefine them here
    // What would happen if you did this:
    // node* pHead = new node();

    pHead = new node();
    pHead->data = myStr[0];
    pHead->next = nullptr;

    for (int i = 0; i < 7; i++) {
        // Step 1: Create a new node
        pCurrent = new node();
        // Step 2: Fill the data field(s)
        pCurrent->data = myStr[i];
        // Step 3: Attach to head of list
        pCurrent->next = pHead;
        // Step 4: Reposition head of list
        pHead = pCurrent;
    }

    // Output the linked list!
    // Ensure pHead and pCurrent are both pointing to the head of the list
    cout << "\n pHead's data: " << pHead->data << endl;
    cout << "\n pCurrent's data: " << pCurrent->data << endl;

    // Use a while loop to get the size of the list
    // Remember: the loop control variable must be initialized, checked, and changed.
    int sizeOfList = 0;
    cout << "\n Size of list: " << sizeOfList << endl;
    while (pCurrent->next != nullptr) {
        sizeOfList++;
        pCurrent = pCurrent->next;
    }
    cout << "\n Size of list: " << sizeOfList << endl;

    // Get pCurrent back to the head of the list
    pCurrent = pHead;

    for (int i = 0; i < sizeOfList; i++) {
        cout << "\n pCurrent's data: " << pCurrent->data << endl;
        pCurrent = pCurrent->next;
    }

    // Get pCurrent back to the head of the list to do more linked-list stuff!
    pCurrent = pHead;

    return 0;
}