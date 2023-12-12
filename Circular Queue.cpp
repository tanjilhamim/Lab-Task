#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}
};

class MyQueue {
private:
    static const int SIZE = 3; // Change the size as needed
    Node* front;
    Node* rear;

public:
    MyQueue() : front(nullptr), rear(nullptr) {}

    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (isEmpty()) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
        rear->next = front; // Make the queue circular
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
        } else {
            Node* temp = front;
            front = front->next;
            delete temp;
            if (isEmpty()) {
                rear = nullptr;
            } else {
                rear->next = front; // Update rear to maintain circularity
            }
        }
    }

    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return -1;
        }
        return front->data;
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

int main() {
    MyQueue myQueue;

    myQueue.enqueue(10);
    myQueue.enqueue(20);
    myQueue.enqueue(30);

    std::cout << "Front element of the queue: " << myQueue.getFront() << std::endl;

    myQueue.dequeue();

    std::cout << "Front element after dequeue: " << myQueue.getFront() << std::endl;

    return 0;
}
