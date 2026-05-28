#include <iostream>
using namespace std;

string stackArr[10];
int top = -1;

void push() {

    if (top == 9) {
        cout << "Stack Is Full" << endl;
    }
    else {

        string value;

        cout << "Enter Employee Name -> ";
        cin >> value;

        top++;
        stackArr[top] = value;

        cout << value << " Pushed Successfully" << endl;
    }
}

void pop() {

    if (top == -1) {
        cout << "Stack Is Empty" << endl;
    }
    else {

        cout << stackArr[top] << " Removed Successfully" << endl;

        top--;
    }
}

void peek() {

    if (top == -1) {
        cout << "Stack Is Empty" << endl;
    }
    else {

        cout << "Top Employee Is -> " << stackArr[top] << endl;
    }
}

void display() {

    if (top == -1) {
        cout << "Stack Is Empty" << endl;
    }
    else {

        cout << "===== Stack Elements =====" << endl;

        for (int i = top; i >= 0; i--) {
            cout << stackArr[i] << endl;
        }
    }
}

void isEmpty() {

    if (top == -1) {
        cout << "Yes Stack Is Empty" << endl;
    }
    else {
        cout << "No Stack Is Not Empty" << endl;
    }
}

void isFull() {

    if (top == 9) {
        cout << "Yes Stack Is Full" << endl;
    }
    else {
        cout << "No Stack Is Not Full" << endl;
    }
}

int main() {

    int choice;

    bool t = true;

    while (t) {

        cout << "===================================" << endl;
        cout << "========= STACK OPERATIONS ========" << endl;
        cout << "===================================" << endl;

        cout << "1. Push Employee" << endl;
        cout << "2. Pop Employee" << endl;
        cout << "3. Peek Employee" << endl;
        cout << "4. Display Stack" << endl;
        cout << "5. Check Empty" << endl;
        cout << "6. Check Full" << endl;
        cout << "7. Exit" << endl;

        cout << "Enter Choice -> ";
        cin >> choice;

        switch (choice) {

        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            peek();
            break;

        case 4:
            display();
            break;

        case 5:
            isEmpty();
            break;

        case 6:
            isFull();
            break;

        case 7:
            t = false;
            cout << "Program Closed" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}