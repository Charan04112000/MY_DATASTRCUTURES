Generic Queue and Stack Implementation in C++
This repository contains C++ implementations of a generic Queue and Stack data structures using templates. Both data structures are implemented using a linked list approach and support multiple data types (int, float, string) through a user-friendly console interface.
Features

Generic Queue:

Enqueue: Add an element to the rear of the queue.
Dequeue: Remove and return the front element.
Peek: View the front element without removing it.
Display: Print all elements in the queue.
isEmpty: Check if the queue is empty.


Generic Stack:

Push: Add an element to the top of the stack.
Pop: Remove and return the top element.
Peek: View the top element without removing it.
Display: Print all elements in the stack.
Size: Return the number of elements in the stack.
isEmpty: Check if the stack is empty.


Template-based: Supports multiple data types (int, float, string) using C++ templates.

Memory Management: Properly handles dynamic memory allocation and deallocation to prevent memory leaks.

User Interface: Interactive console menu to perform operations on the queue or stack.


Files

GenericQueue.cpp: Implementation of the generic queue with a console-based interface.
GenericStack.cpp: Implementation of the generic stack with a console-based interface.

Getting Started
Prerequisites

A C++ compiler (e.g., g++, clang++)
Standard C++ library support

Compilation and Execution

Clone the repository:
git clone <repository-url>
cd <repository-directory>


Compile the desired file:

For the queue:g++ GenericQueue.cpp -o queue


For the stack:g++ GenericStack.cpp -o stack




Run the program:

For the queue:./queue


For the stack:./stack




Follow the on-screen prompts to:

Choose a data type (1 for int, 2 for float, 3 for string).
Perform operations using the menu (e.g., enqueue/push, dequeue/pop, peek, display, etc.).



Example Usage
Queue
Choose Data Type for Queue:
1. Int
2. Float
3. String
Choice: 1

1. Enqueue
2. Dequeue
3. Peek
4. Display
5. Exit
Enter choice: 1
Enter int to enqueue: 42

Stack
Choose Data Type for Stack:
1. Int
2. Float
3. String
Choice: 3

1. Push
2. Pop
3. Peek
4. Display
5. Size
6. Exit
Enter choice: 1
Enter string to push: Hello

Notes

The programs handle invalid inputs gracefully (e.g., attempting to dequeue/pop from an empty structure).
For string inputs, the program uses getline to handle spaces correctly.
The code is designed to be modular and can be extended to support additional data types by modifying the template class.

Contributing
Feel free to fork this repository, make improvements, and submit pull requests. Suggestions for additional features or optimizations are welcome!
License
This project is licensed under the MIT License - see the LICENSE file for details.
