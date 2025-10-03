#include<iostream>
using namespace std;
const int SIZE = 5;
void push(int arr[], int &top, int value) {
    if(top == SIZE - 1) {
        cout << "Stack Overflow" << endl;
    } else {
        top++;
        arr[top] = value;
        cout << "Pushed: " << value << endl;
    }
}
void pop(int arr[], int &top) {
    if(top == -1) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << "Popped: " << arr[top] << endl;
        top--;
    }
}
int main() {
    int arr[SIZE];
    int top = -1;
    for(int i = 1; i <= 6; i++) {
        push(arr, top, i * 10);
    }
    for(int i = 1; i <= 6; i++) {
        pop(arr, top);}
    cout<<"The array is : ";
    for(int i=0;i<SIZE;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
