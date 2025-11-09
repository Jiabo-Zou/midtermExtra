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
 // store size and handle empty/non-positive cases
    this->size = size;
    if (size <= 0) {
        head = nullptr;
        return;
    }

    // build a ring of  nodes, initialize all nodes with data = 0
    head = new Node(0);
    Node* pre = head;
    for (int i = 1; i < size; ++i) {
        Node* current = new Node(0);
        pre->next = current;
        pre = current; //connect the last to the first
    }
    // close the circle
    pre->next = head;

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

    if (size <= 0 || head == nullptr) return -1;

    Node* pre = head;
    for (int i = 0; i < size - 1; ++i) {
        pre = pre->next;
    }

    head = pre;
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
