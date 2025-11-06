#ifndef CIRCULARLIST_H 
#define CIRCULARLIST_H 
 
class Node { 
public: 
    Node(int data);                 // constructs Node with data value 
    void print();                   // prints Node 
    int data;                       // data value of Node 
    Node *next;                     // pointer to next Node 
}; 
 
class CircularList { 
public: 
    CircularList(int size);                             // constructs 
CircularList of specified size and initializes data of Nodes to 0 
    ~CircularList();                                    // destructor for 
CircularList 
    int moveHeadCounterclockwise();                     // sets head to the 
node before the head and returns the data of the new head 
    bool setElements(int* elements, int elementsSize);  // sets data of the 
CircularList nodes to the values of the input array 
    void print();                                       // prints 
CircularList starting at head 
private:  
    Node* head;                                         // pointer to head 
of CircularList 
    int size;                                           // size of 
CircularList 
     
}; 
 
#endif 

