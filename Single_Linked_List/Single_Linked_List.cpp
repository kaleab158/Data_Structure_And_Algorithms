#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* nxt;
};

void print(Node* head) {
	Node* temp = head;

	while (temp != NULL) {
		cout << temp->data << " -> ";
		temp = temp->nxt;
	}

	cout << "NULL" << endl;
}

void clearScreen() {
	system("cls");
}

void Maindashboard() {
	cout << "Returning To Main Dashboard..." << endl;
}

void Single_Linked_List() {

	Node* head = new Node();
	Node* second = new Node();
	Node* third = new Node();

	head->data = 10;
	head->nxt = second;

	second->data = 20;
	second->nxt = third;

	third->data = 30;
	third->nxt = NULL;

	int x1;
	bool t = true;

	while (t) {
		cout << "==========================================================" << endl;
		cout << "============ Single Linked List Oprations ================" << endl;
		cout << "==========================================================" << endl;

		cout << "1. Triversaal" << endl;
		cout << "2. Insert Employee Record" << endl;
		cout << "3. Delete Employee Record" << endl;
		cout << "4. Search Employee Record" << endl;
		cout << "5. Return Main Menu" << endl;

		cout << "Enter Choise -> ";
		cin >> x1;

		switch (x1) {

		case 1: {
			cout << "================== Traversal ===================" << endl;
			print(head);
			break;
		}

		case 2: {
			int x3;

			cout << "============= Insertion Operations =============" << endl;
			cout << "1. Insert At First" << endl;
			cout << "2. Insert At Position" << endl;
			cout << "3. Insert At End" << endl;
			cout << "4. Exit" << endl;

			cout << "Enter Your Choice -> ";
			cin >> x3;

			switch (x3) {

			case 1: {
				int value;
				cout << "Enter Value: ";
				cin >> value;

				Node* newnode = new Node();
				newnode->data = value;
				newnode->nxt = head;
				head = newnode;

				print(head);
				break;
			}

			case 2: {
				int pos, val3;

				cout << "Enter Position: ";
				cin >> pos;

				cout << "Enter Value: ";
				cin >> val3;

				Node* Newnode = new Node();
				Newnode->data = val3;

				if (pos == 1) {
					Newnode->nxt = head;
					head = Newnode;
				}
				else {
					Node* temp = head;

					for (int i = 1; i < pos - 1; i++) {
						temp = temp->nxt;
					}

					Newnode->nxt = temp->nxt;
					temp->nxt = Newnode;
				}

				print(head);
				break;
			}

			case 3: {
				int val4;
				cout << "Enter Value: ";
				cin >> val4;

				Node* temp2 = head;

				while (temp2->nxt != NULL) {
					temp2 = temp2->nxt;
				}

				Node* newnode2 = new Node();
				newnode2->data = val4;
				newnode2->nxt = NULL;

				temp2->nxt = newnode2;

				print(head);
				break;
			}

			case 4:
				break;
			}

			break;
		}

		case 3: {
			int x3;

			cout << "============= Deletion Operations =============" << endl;
			cout << "1. Delete First" << endl;
			cout << "2. Delete Position" << endl;
			cout << "3. Delete End" << endl;
			cout << "4. Exit" << endl;

			cout << "Enter Your Choice -> ";
			cin >> x3;

			switch (x3) {

			case 1: {
				Node* temp = head;
				head = head->nxt;
				delete temp;

				print(head);
				break;
			}

			case 2: {
				int pos;
				cout << "Enter Position: ";
				cin >> pos;

				if (pos == 1) {
					Node* temp = head;
					head = head->nxt;
					delete temp;
				}
				else {
					Node* temp = head;

					for (int i = 1; i < pos - 1; i++) {
						temp = temp->nxt;
					}

					Node* del = temp->nxt;
					temp->nxt = del->nxt;
					delete del;
				}

				print(head);
				break;
			}

			case 3: {
				Node* temp = head;

				while (temp->nxt->nxt != NULL) {
					temp = temp->nxt;
				}

				Node* last = temp->nxt;
				temp->nxt = NULL;
				delete last;

				print(head);
				break;
			}

			case 4:
				break;
			}

			break;
		}

		case 4: {
			int searchValue;

			cout << "Enter Value To Search -> ";
			cin >> searchValue;

			Node* temp = head;
			int position = 1;
			bool found = false;

			while (temp != NULL) {
				if (temp->data == searchValue) {
					cout << "Found At Position: " << position << endl;
					found = true;
					break;
				}
				temp = temp->nxt;
				position++;
			}

			if (!found) {
				cout << "Value Not Found" << endl;
			}

			break;
		}

		case 5:
			clearScreen();
			Maindashboard();
			t = false;
			break;

		default:
			cout << "Invalid Choice!" << endl;
			break;
		}
	}
}

int main()
{
	Single_Linked_List();
	return 0;
}