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
