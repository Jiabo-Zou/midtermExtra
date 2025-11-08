#include "CircularList.h" 
#include <iostream> 
 
Node::Node(int data) { 
    this->data = data; 
    next = nullptr; 
} 
 
void Node::print() { 
    std::cout << data << " "; 
} 
 
CircularList::CircularList(int size) { 
    // TO BE IMPLEMENTED 
 this->size = size;

    if (size <= 0) {
        head = nullptr;
        return;
    }

    // Create the first node
    head = new Node(0);
    Node* prev = head;

    // Create the remaining nodes
    for (int i = 1; i < size; i++) {
        Node* newNode = new Node(0);
        prev->next = newNode;
        prev = newNode;
    }

    // Make it circular
    prev->next = head;
} 
 
CircularList::~CircularList() { 
    Node* temp = head; 
    for (int i = 0; i < size; i++) { 
        head = head->next; 
        delete temp; 
        temp = head; 
    } 
} 
 
int CircularList::moveHeadCounterclockwise() { 
    // TO BE IMPLEMENTED 
  if (size <= 0 || head == nullptr)
        return -1;  // error or empty list

    // Find the node before head
    Node* temp = head;
    for (int i = 0; i < size - 1; i++) {
        temp = temp->next;
    }

    // Move head one node backward (counterclockwise)
    head = temp;

    return head->data;
} 
 
bool CircularList::setElements(int* elements, int elementsSize) { 
    if (elementsSize != size) 
        return false; 
    Node* temp = head; 
    for (int i = 0; i < elementsSize; i++) { 
        temp->data = elements[i]; 
        temp = temp->next; 
    } 
    return true; 
 
} 
 
void CircularList::print() { 
Node* temp = head; 
for (int i = 0; i < size; i++) { 
temp->print(); 
temp = temp->next; 
} 
std::cout << std::endl; 
}
