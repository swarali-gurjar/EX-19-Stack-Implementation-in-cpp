# Aim: To study Stack implementation in C++

## Theory: 

A stack is a linear data structure that follows the LIFO (Last In, First Out) principle, meaning the last element inserted is the first one to be removed. It is similar to a pile of plates where the plate placed last is taken out first.

In stack implementation using arrays:

- **Push Operation**: Inserts an element at the top of the stack.

- **Pop Operation**: Removes an element from the top of the stack.

## Algorithm

**Step 1**: Start

**Step 2**: Define a constant SIZE = 5 (maximum stack size).

**Step 3**: Initialize an integer array arr[SIZE] to store stack elements.

**Step 4**: Initialize a variable top = -1 to represent the empty stack.

**Step 5**: Define Push Operation:

- If top == SIZE - 1, print "Stack Overflow".

- Else increment top and insert the new element at arr[top].

**Step 6**: Define Pop Operation:

- If top == -1, print "Stack Underflow".

- Else print the element at arr[top] and decrement top.

**Step 7**: In main():

- Call push() 6 times with values 10, 20, 30, 40, 50, 60.

- Call pop() 6 times to remove elements from the stack.

- Display the final contents of the array.

**Step 8**: End

## Conclusion

In this experiment, we studied and implemented the stack data structure using arrays. We understood how the stack follows the LIFO principle, and how operations like push and pop are managed using an array.
This experiment helped us learn the practical working of stacks, their limitations when implemented with arrays, and their importance in applications.
