#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Queue {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& val) : data(val), next(nullptr) {}
    };

    Node* front;
    Node* rear;

public:
    Queue() : front(nullptr), rear(nullptr) {}

    ~Queue() {
        while (!isEmpty())
            dequeue();
    }

    void enqueue(const T& val) {
        Node* temp = new Node(val);
        if (!rear) {
            front = rear = temp;
        } else {
            rear->next = temp;
            rear = temp;
        }
    }

    bool dequeue() {
        if (!front)
            return false;
        Node* temp = front;
        front = front->next;
        if (!front)
            rear = nullptr;
        delete temp;
        return true;
    }

    T peek() const {
        if (!front)
            throw out_of_range("Queue is empty.");
        return front->data;
    }

    bool isEmpty() const {
        return front == nullptr;
    }

    void display() const {
        Node* temp = front;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int choice;
    cout << "Choose Data Type for Queue:\n1. Int\n2. Float\n3. String\nChoice: ";
    cin >> choice;
while(1)
{
    if (choice == 1) {
        Queue<int> q;
        int val;
        while (true) {
            cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter choice: ";
            int op;
            cin >> op;
            switch (op) {
                case 1:
                    cout << "Enter int to enqueue: ";
                    cin >> val;
                    q.enqueue(val);
                    break;
                case 2:
                    if (q.dequeue()) cout << "Dequeued successfully.\n";
                    else cout << "Queue is empty.\n";
                    break;
                case 3:
                    try {
                        cout << "Front element: " << q.peek() << endl;
                    } catch (exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 4:
                    q.display();
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }
    else if (choice == 2) {
        Queue<float> q;
        float val;
        while (true) {
            cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter choice: ";
            int op;
            cin >> op;
            switch (op) {
                case 1:
                    cout << "Enter float to enqueue: ";
                    cin >> val;
                    q.enqueue(val);
                    break;
                case 2:
                    if (q.dequeue()) cout << "Dequeued successfully.\n";
                    else cout << "Queue is empty.\n";
                    break;
                case 3:
                    try {
                        cout << "Front element: " << q.peek() << endl;
                    } catch (exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 4:
                    q.display();
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }
    else if (choice == 3) {
        Queue<string> q;
        string val;
        while (true) {
            cout << "\n1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter choice: ";
            int op;
            cin >> op;
            switch (op) {
                case 1:
                    cout << "Enter string to enqueue: ";
                    cin.ignore();  // clear newline left in input buffer
                    getline(cin, val);
                    q.enqueue(val);
                    break;
                case 2:
                    if (q.dequeue()) cout << "Dequeued successfully.\n";
                    else cout << "Queue is empty.\n";
                    break;
                case 3:
                    try {
                        cout << "Front element: " << q.peek() << endl;
                    } catch (exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 4:
                    q.display();
                    break;
                case 5:
                    return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }
    else if (choice ==0){exit(0);
        cout << "Invalid data type choice.\n";
    }
}

    return 0;
}

