#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

class Stack {
    private:
        Node* topNode;
    public:
        Stack(): topNode(nullptr) {}
        void push(int value) {
            Node* newNode = new Node();
            newNode -> data = value;
            newNode -> next = topNode;
            topNode = newNode;
        }

        void pop() {
            if(isEmpty()) {
                cout << "El Stack esta vacio." << endl;
                return;
            }
            Node* temp = topNode;
            topNode = topNode -> next;
            delete temp;
        }

        int top() {
            if(isEmpty()) {
                cout << "El Stack esta vacio." << endl;
                return -1;
            }
            return topNode -> data;
        }

        bool isEmpty() {
            return topNode == nullptr;
        }
};

#endif