/*
    Simple linked list that stores integers
    
    Gilberto Echeverria
    gilecheverria@yahoo.com
*/

#include <iostream>
#include "Node.h"

class LinkedList {
    private:
        Node * head = nullptr;
        //Node * tail = nullptr;
        int length = 0;
        
        void print_recursive(Node * _head);
    public:
        LinkedList () {}
        LinkedList (Node * first) { head = first; }
        ~LinkedList ();
        // Insertion
        void insertHead (int data);
        void insertHead (Node * new_node);
        void insertTail (int data);
        void insertTail (Node * new_node);
        void insertAtPosition (int data, int position);
        void insertAtPosition (Node * new_node, int position);
        void insertOrdered (int data);
        void insertOrdered(Node * new_node);
        // Deletion
        Node * deleteHead();
        Node * deleteTail();
        Node * deleteFromPosition(int position);
        Node * deleteElement(int data);
        // Search
        int searchIterative (int data);
        int searchRecursive (int data, int i, Node * node);
        // Helper methods
        void clear();
        void printList();
        void print();
        friend std::ostream & operator<< (std::ostream & stream, const LinkedList & list);
		Node * getHead();
};