#include <iostream>
#include <string>
using namespace std;

template <typename T>
class Stack {
private:
    struct Node {
        T data;
        Node* next;
        Node(const T& val) : data(val), next(nullptr) {}
    };

    Node* top;
    int size;

public:
    Stack() : top(nullptr), size(0) {}

    ~Stack() {
        while (!isEmpty())
            pop();
    }

    void push(const T& val) {
        Node* temp = new Node(val);
        temp->next = top;
        top = temp;
        size++;
    }

    bool pop() {
        if (!top)
            return false;
        Node* temp = top;
        top = top->next;
        delete temp;
        size--;
        return true;
    }

    T peek() const {
        if (!top)
            throw out_of_range("Stack is empty.");
        return top->data;
    }

    bool isEmpty() const {
        return top == nullptr;
    }

    int getSize() const {
        return size;
    }

    void display() const {
        Node* temp = top;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    int choice;
    cout << "Choose Data Type for Stack:\n1. Int\n2. Float\n3. String\nChoice: ";
    cin >> choice;

    if (choice == 1) {
        Stack<int> s;
        int val;
        while (true) {
            cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Size\n6. Exit\nEnter choice: ";
            int op;
            cin >> op;
            switch (op) {
                case 1:
                    cout << "Enter int to push: ";
                    cin >> val;
                    s.push(val);
                    break;
                case 2:
                    if (s.pop()) cout << "Popped successfully.\n";
                    else cout << "Stack is empty.\n";
                    break;
                case 3:
                    try {
                        cout << "Top element: " << s.peek() << endl;
                    } catch (exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 4:
                    s.display();
                    break;
                case 5:
                    cout << "Stack size: " << s.getSize() << endl;
                    break;
                case 6:
                    return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }
    else if (choice == 2) {
        Stack<float> s;
        float val;
        while (true) {
            cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Size\n6. Exit\nEnter choice: ";
            int op;
            cin >> op;
            switch (op) {
                case 1:
                    cout << "Enter float to push: ";
                    cin >> val;
                    s.push(val);
                    break;
                case 2:
                    if (s.pop()) cout << "Popped successfully.\n";
                    else cout << "Stack is empty.\n";
                    break;
                case 3:
                    try {
                        cout << "Top element: " << s.peek() << endl;
                    } catch (exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 4:
                    s.display();
                    break;
                case 5:
                    cout << "Stack size: " << s.getSize() << endl;
                    break;
                case 6:
                    return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }
    else if (choice == 3) {
        Stack<string> s;
        string val;
        while (true) {
            cout << "\n1. Push\n2. Pop\n3. Peek\n4. Display\n5. Size\n6. Exit\nEnter choice: ";
            int op;
            cin >> op;
            switch (op) {
                case 1:
                    cout << "Enter string to push: ";
                    cin.ignore();
                    getline(cin, val);
                    s.push(val);
                    break;
                case 2:
                    if (s.pop()) cout << "Popped successfully.\n";
                    else cout << "Stack is empty.\n";
                    break;
                case 3:
                    try {
                        cout << "Top element: " << s.peek() << endl;
                    } catch (exception& e) {
                        cout << e.what() << endl;
                    }
                    break;
                case 4:
                    s.display();
                    break;
                case 5:
                    cout << "Stack size: " << s.getSize() << endl;
                    break;
                case 6:
                    return 0;
                default:
                    cout << "Invalid choice.\n";
            }
        }
    }
    else {
        cout << "Invalid data type choice.\n";
        return 1;
    }

    return 0;
}