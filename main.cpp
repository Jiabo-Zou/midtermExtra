#include <iostream>
#include "CircularList.h"

int main() {
    // --- Create a circular list of 5 nodes ---
    int n = 5;
    CircularList clist(n);

    // --- Initialize elements array ---
    int elements[] = {10, 20, 30, 40, 50};

    // --- Set list data ---
    if (!clist.setElements(elements, n)) {
        std::cout << "Failed to set elements: size mismatch." << std::endl;
        return 1;
    }

    std::cout << "Initial list: ";
    clist.print();

    // --- Move head counterclockwise once ---
    int newHead = clist.moveHeadCounterclockwise();
    std::cout << "After 1 counterclockwise move (new head = " << newHead << "): ";
    clist.print();

    // --- Move head counterclockwise again ---
    newHead = clist.moveHeadCounterclockwise();
    std::cout << "After 2 counterclockwise moves (new head = " << newHead << "): ";
    clist.print();

    // --- Move head counterclockwise one more time ---
    newHead = clist.moveHeadCounterclockwise();
    std::cout << "After 3 counterclockwise moves (new head = " << newHead << "): ";
    clist.print();

    return 0;
}

