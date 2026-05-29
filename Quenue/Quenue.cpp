#include <iostream>
using namespace std;

void Queue_Data_Structure() {

    string queueArray[30];
    int front = -1;
    int rear = -1;

    int choice;
    bool run = true;

    while (run) {

        cout << "==================================================" << endl;
        cout << "================ Queue Operations ================" << endl;
        cout << "==================================================" << endl;
        cout << "1. Enqueue Employee" << endl;
        cout << "2. Dequeue Employee" << endl;
        cout << "3. Peek Front Employee" << endl;
        cout << "4. Display Employees" << endl;
        cout << "5. Count Employees" << endl;
        cout << "6. Check Empty" << endl;
        cout << "7. Check Full" << endl;
        cout << "8. Exit" << endl;
        cout << "Enter Choice -> ";
        cin >> choice;

        switch (choice) {

        case 1: {

            if (rear == 29) {
                cout << "Queue Is Full" << endl;
            }
            else {

                string name;

                cout << "Enter Employee Name -> ";
                cin >> name;

                if (front == -1) {
                    front = 0;
                }

                rear++;
                queueArray[rear] = name;

                cout << "Employee Added Successfully" << endl;
            }

            break;
        }

        case 2: {

            if (front == -1 || front > rear) {
                cout << "Queue Is Empty" << endl;
            }
            else {

                cout << queueArray[front]
                    << " Removed Successfully" << endl;

                front++;

                if (front > rear) {
                    front = -1;
                    rear = -1;
                }
            }

            break;
        }

        case 3: {

            if (front == -1) {
                cout << "Queue Is Empty" << endl;
            }
            else {
                cout << "Front Employee -> "
                    << queueArray[front] << endl;
            }

            break;
        }

        case 4: {

            if (front == -1) {
                cout << "Queue Is Empty" << endl;
            }
            else {

                cout << "===== Employees In Queue =====" << endl;

                for (int i = front; i <= rear; i++) {
                    cout << i + 1 << ". "
                        << queueArray[i] << endl;
                }
            }

            break;
        }

        case 5: {

            if (front == -1) {
                cout << "Total Employees = 0" << endl;
            }
            else {
                cout << "Total Employees = "
                    << rear - front + 1 << endl;
            }

            break;
        }

        case 6: {

            if (front == -1) {
                cout << "Queue Is Empty" << endl;
            }
            else {
                cout << "Queue Is Not Empty" << endl;
            }

            break;
        }

        case 7: {

            if (rear == 29) {
                cout << "Queue Is Full" << endl;
            }
            else {
                cout << "Queue Is Not Full" << endl;
            }

            break;
        }

        case 8: {

            cout << "Program Closed..." << endl;
            run = false;
            break;
        }

        default:
            cout << "Invalid Choice" << endl;
        }
    }
}

int main() {

    Queue_Data_Structure();

    return 0;
}