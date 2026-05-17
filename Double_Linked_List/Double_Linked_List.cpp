#include <iostream>
using namespace std;

class DNode {
public:
	int data;
	DNode* next;
	DNode* prev;
};

void printForward(DNode* head) {
	DNode* temp = head;

	while (temp != NULL) {
		cout << temp->data << " <-> ";
		temp = temp->next;
	}

	cout << "NULL" << endl;
}

void Double_Linked_List() {

	DNode* head = new DNode();
	DNode* second = new DNode();
	DNode* third = new DNode();

	head->data = 10;
	head->prev = NULL;
	head->next = second;

	second->data = 20;
	second->prev = head;
	second->next = third;

	third->data = 30;
	third->prev = second;
	third->next = NULL;

	int x11;
	bool r = true;

	while (r) {

		cout << "==========================================================" << endl;
		cout << "============ Double Linked List Operations ===============" << endl;
		cout << "==========================================================" << endl;

		cout << "1. Traversal Employee ID" << endl;
		cout << "2. Insert Employee ID" << endl;
		cout << "3. Delete Employee ID" << endl;
		cout << "4. Search Employee ID" << endl;
		cout << "5. Exit Program" << endl;

		cout << "Enter Choice -> ";
		cin >> x11;

		switch (x11) {

			// ================= TRAVERSAL =================
		case 1: {

			cout << "========== Traversal ==========" << endl;
			printForward(head);

			break;
		}

			  // ================= INSERT =================
		case 2: {

			int x31;

			cout << "===== INSERT OPERATIONS =====" << endl;
			cout << "1. Insert At First" << endl;
			cout << "2. Insert At Position" << endl;
			cout << "3. Insert At End" << endl;

			cout << "Enter Choice -> ";
			cin >> x31;

			switch (x31) {

				// -------- INSERT AT FIRST --------
			case 1: {

				int value;

				cout << "Enter Value: ";
				cin >> value;

				DNode* newnode = new DNode();
				newnode->data = value;

				newnode->prev = NULL;
				newnode->next = head;

				if (head != NULL)
					head->prev = newnode;

				head = newnode;

				printForward(head);

				break;
			}

				  // -------- INSERT AT POSITION --------
			case 2: {

				int pos, value;

				cout << "Enter Position: ";
				cin >> pos;

				cout << "Enter Value: ";
				cin >> value;

				DNode* newnode = new DNode();
				newnode->data = value;

				if (pos == 1) {

					newnode->prev = NULL;
					newnode->next = head;

					if (head != NULL)
						head->prev = newnode;

					head = newnode;
				}
				else {

					DNode* temp = head;

					for (int i = 1; i < pos - 1; i++) {
						temp = temp->next;
					}

					newnode->next = temp->next;
					newnode->prev = temp;

					if (temp->next != NULL)
						temp->next->prev = newnode;

					temp->next = newnode;
				}

				printForward(head);

				break;
			}

				  // -------- INSERT AT END --------
			case 3: {

				int value;

				cout << "Enter Value: ";
				cin >> value;

				DNode* newnode = new DNode();

				newnode->data = value;
				newnode->next = NULL;

				if (head == NULL) {

					newnode->prev = NULL;
					head = newnode;
				}
				else {

					DNode* temp = head;

					while (temp->next != NULL) {
						temp = temp->next;
					}

					temp->next = newnode;
					newnode->prev = temp;
				}

				printForward(head);

				break;
			}

			default:
				break;
			}

			break;
		}

			  // ================= DELETE =================
		case 3: {

			int x4;

			cout << "===== DELETE OPERATIONS =====" << endl;
			cout << "1. Delete First" << endl;
			cout << "2. Delete Position" << endl;
			cout << "3. Delete End" << endl;

			cout << "Enter Choice -> ";
			cin >> x4;

			switch (x4) {

				// -------- DELETE FIRST --------
			case 1: {

				DNode* temp = head;

				head = head->next;

				if (head != NULL)
					head->prev = NULL;

				delete temp;

				printForward(head);

				break;
			}

				  // -------- DELETE POSITION --------
			case 2: {

				int pos;

				cout << "Enter Position: ";
				cin >> pos;

				DNode* temp = head;

				if (pos == 1) {

					head = head->next;

					if (head != NULL)
						head->prev = NULL;

					delete temp;
				}
				else {

					for (int i = 1; i < pos; i++) {
						temp = temp->next;
					}

					temp->prev->next = temp->next;

					if (temp->next != NULL)
						temp->next->prev = temp->prev;

					delete temp;
				}

				printForward(head);

				break;
			}

				  // -------- DELETE END --------
			case 3: {

				DNode* temp = head;

				while (temp->next != NULL) {
					temp = temp->next;
				}

				if (temp->prev != NULL)
					temp->prev->next = NULL;
				else
					head = NULL;

				delete temp;

				printForward(head);

				break;
			}

			default:
				break;
			}

			break;
		}

			  // ================= SEARCH =================
		case 4: {

			int value;

			cout << "Enter Value To Search: ";
			cin >> value;

			DNode* temp = head;

			int pos = 1;
			bool found = false;

			while (temp != NULL) {

				if (temp->data == value) {

					cout << "Found at position: " << pos << endl;

					found = true;

					break;
				}

				temp = temp->next;
				pos++;
			}

			if (!found)
				cout << "Not Found" << endl;

			break;
		}

			  // ================= EXIT =================
		case 5:

			r = false;

			break;

		default:
			break;
		}
	}
}

int main() {

	Double_Linked_List();

	return 0;
}