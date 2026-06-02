#include <iostream>
#include <stack>
using namespace std;
void clearScreen()
{

	cout << "\x1B[2J\x1B[1;1H";
}

void Maindashboard();
class Node {
public:
	int data;
	Node* nxt;
};
void print(Node* ptr) {
	while (ptr != NULL) {
		cout << ptr->data << " -> ";
		ptr = ptr->nxt;
	}
	cout << "NULL" << endl;
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
		cout << "2. Insert Employee ID" << endl;
		cout << "3. Delete Employee ID" << endl;
		cout << "4. Search Employee ID" << endl;
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

			Maindashboard();
			t = false;


		default:
			break;
		}
	}
}
//void Double_Linked_List() {
//	int x11;
//	cout << "==========================================================" << endl;
//	cout << "============ Double Linked List Oprations ================" << endl;
//	cout << "==========================================================" << endl;
//	cout << "                                                           " << endl;
//	cout << " Select An Opration  " << endl;
//	cout << "1. Triversaal  " << endl;
//	cout << "2. Insert Employee Record " << endl;
//	cout << "3. Delete Employee Record " << endl;
//	cout << "4. Search Employee Record " << endl;
//	cout << "5. Return Main Menu ..  " << endl;
//	cout << "                   " << endl;
//	cout << "Enter Choise -> "; cin >> x11;
//	switch (x11) {
//	case 1:
//		cout << "==========================================================" << endl;
//		cout << "================== Triversal Oprations ===================" << endl;
//		cout << "==========================================================" << endl;
//		break;
//	case 2:
//		int x31;
//
//		cout << "==========================================================" << endl;
//		cout << "============= Employee Insertion Oprations ===============" << endl;
//		cout << "==========================================================" << endl;
//
//		cout << " 1. Insert  Employee At First     " << endl;
//		cout << " 2. Insert  Employee At Position     " << endl;
//		cout << " 3. Insert  Employee At End     " << endl;
//		cout << " 4. Exti ..." << endl;
//		cout << "                              " << endl;
//		cout << "Enter Your Choice ->"; cin >> x31;
//		switch (x31) {
//		case 1:
//			// insertion at first
//			break;
//		case 2:
//			//insertion at a posiotion
//			break;
//		case 3:
//			//insertion at end
//			break;
//		case 4:
//			// exit...
//			break;
//		case 5:
//		default:
//			break;
//		}
//		break;
//	case 3:
//		int x4;
//		cout << "==========================================================" << endl;
//		cout << "============== Employee Deletion Oprations ===============" << endl;
//		cout << "==========================================================" << endl;
//
//		cout << " 1. Delete  Employee At First     " << endl;
//		cout << " 2. Delete  Employee At Position     " << endl;
//		cout << " 3. Delete  Employee At End     " << endl;
//		cout << " 4. Exti..." << endl;
//		cout << "                              " << endl;
//		cout << "Enter Choice -> "; cin >> x4;
//		switch (x4) {
//		case 1:
//			// Delete at first
//			break;
//		case 2:
//			//delete at a posiotion
//			break;
//		case 3:
//			//delete at end
//			break;
//		case 4:
//			// exit...
//			break;
//		case 5:
//
//		default:
//			break;
//			break;
//
//		}
//	case 4:
//		int x21;
//		cout << "==========================================================" << endl;
//		cout << "============-== Employee Search Oprations ================" << endl;
//		cout << "==========================================================" << endl;
//		cout << "              " << endl;
//		cout << " -> "; cin >> x21;
//		break;
//	case 5:
//		// return to main dashboard
//		break;
//	default:
//		break;
//	}
//
//
//}
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
		cout << "5. Return Main Menu" << endl;

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

			Maindashboard();
			r = false;


			break;

		default:
			break;
		}
	}
}
void Stack_Data_Structure() {
	// stack structure implimentation
	string stackarry[30] = {};
	// top variable to track the elements in the stack
	int top = -1;

	// constructer for the class to set the elements to there ..

	for (int i = 0; i < 29; i++) {
		stackarry[i] = " , ";
	}


	int st;
	bool k = true;
	while (k) {
		cout << "==========================================================" << endl;
		cout << "===================== Stack Oprations ====================" << endl;
		cout << "==========================================================" << endl;
		cout << "                                                           " << endl;
		cout << " 1. Push Employee Name" << endl;
		cout << " 2. pop Employee Name " << endl;
		cout << " 3. Peek Top Employee Named" << endl;
		cout << " 4. Display AllEmployee Name" << endl;
		cout << " 5. Count Employee Name " << endl;
		cout << " 6. Is Empty Employee Name " << endl;
		cout << " 7. Is Full Employee Record Name " << endl;
		cout << " 8. Return To Main Manu ...." << endl;
		cout << "                             " << endl;
		cout << "Enter Choice -> ";
		cin >> st;
		switch (st) {
		case 1:

			// push employeee rec

			if (top == 29) {
				cout << "Can't Add Employee Stack (Full Stack ) " << endl;

			}
			else {
				string userpush;
				cout << "Enter The Name Of Employee You Want To Push In Stack" << endl;
				cin >> userpush;
				top++;
				stackarry[top] = userpush;
			}
			break;
		case 2:
			//pop employee rec
			if (top == -1) {
				cout << "No Employee In Stack ... " << endl;

			}
			else {
				cout << "Employee " << stackarry[top] << " Removed / Pop Sucsessfully.." << endl;
				stackarry[top] = " , ";
				top--;

			}
			break;
		case 3:
			//peek emp rec
			int pos;
			if (top == -1) {
				cout << "== No Emplyee in Stack ==" << endl;
			}
			else {
				cout << "Enter Position Of Employee You Want To Peek In Stack" << endl;
				cin >> pos;
				cout << "Employee is -> " << stackarry[pos] << " In " << pos << " Position" << endl;
			}
			break;
		case 4:
			//display emp rec
			if (top == -1) {
				cout << "== No Emplyee in Stack ==" << endl;
			}
			else {
				cout << " ==== All Employee Are ===" << endl;
				int j = 1;
				for (int i = 0; i < 29; i++) {

					cout << j << ". " << stackarry[i] << endl;
					j++;
				}
			}

			break;
		case 5:
			//Count
			if (top == -1) {
				cout << "== No Emplyee in Stack ==" << endl;
			}
			else {
				int count = 0;
				string k = ",";
				for (int i = 0; i < 29; i++) {
					if (stackarry[i] != ",") {
						count++;
					}
				}
				cout << "There Are " << count << "Employee In Stack" << endl;
			}
		case 6:
			// is empty 
			if (top == -1) {
				cout << "Yes It's Empty " << endl;

			}
			else {
				cout << "NO ! It's Not Empty " << endl;
			}
			break;
		case 7:
			//is full ...
			if (top == 29) {
				cout << "OHH.... Full Employee Record  " << endl;

			}
			else {
				cout << "Not Full .... " << endl;
			}
			break;

		case 8:

			Maindashboard();
			k = false;

			// return Home
		default:

			break;
		}
	}

}
void Quenue_Data_Structure() {
	string quenuearry[30] = {};
	int rear = -1;
	int front = -1;

	int st;
	bool tr = true;
	while (tr) {
		cout << "==========================================================" << endl;
		cout << "===================== Quenue  Oprations ==================" << endl;
		cout << "==========================================================" << endl;
		cout << "                                                           " << endl;
		cout << " 1. Enqeue Employee ID" << endl;
		cout << " 2. Dequeue Employee ID" << endl;
		cout << " 3. Check if Full Employee ID" << endl;
		cout << " 4. Check if Empty Employee ID" << endl;
		cout << " 5. Return To Main Manu ...." << endl;
		cout << "                             " << endl;
		cout << "Enter Choice -> "; cin >> st;
		switch (st) {
		case 1:
			// enque employeee record
			if (rear == size(quenuearry) - 1) {
				cout << "Employee record Full" << endl;
			}
			else {
				if (rear == -1 && front == -1) {
					cout << "Enter Employee To Enqueue " << endl;
					string enqemp;
					cin >> enqemp;
					rear = 0;
					front = 0;
					quenuearry[rear] = enqemp;
				}
				else {
					cout << "Enter Employee To Enqueue " << endl;
					string enqemp;
					cin >> enqemp;
					rear++;
					quenuearry[rear] = enqemp;


				}
			}

			break;
		case 2:
			//dequeue employee rec
			if (rear == -1 && front == -1) {
				cout << "No Employee To Dequeue " << endl;

			}
			else if (front == rear) {
				string deqemp;
				cout << "Enter The First Employee Name To Dequeue" << endl;
				for (int i = 0; i < rear; i++) {
					cout << quenuearry[i] << " " << endl;
				}
				cin >> deqemp;
				quenuearry[rear] = ",";
				rear = -1;
				front = -1;
			}
			else {
				string deqemp;
				cout << "Enter The First Employee Name To Dequeue" << endl;
				for (int i = 0; i < rear; i++) {
					cout << quenuearry[i] << " " << endl;
				}
				cin >> deqemp;
				quenuearry[front] = ",";
				front++;
			}

			break;
		case 3:
			// if fulllemp rec
			// when its full the last element (the first one rear) have to incriment
			if (rear == size(quenuearry) - 1) {
				cout << "Employee record Full" << endl;
			}
			else {
				cout << "Employee Record Not Full" << endl;
			}
			break;
		case 4:
			// if empty emp rec
			if (rear == -1 && front == -1) {
				cout << "Employee record Empty" << endl;
			}
			else {
				cout << "Employee record Not Empty" << endl;
			}
			break;
		case 5:

			Maindashboard();
			tr = false;

			//main menue
			break;
		default:
			break;

		}
	}

}
struct NodeTree {
	int data;
	NodeTree* left;
	NodeTree* right;
};
//     Group  member’s                                                                  ID       
//1. Alazar Desalegn………………………………….RCDI / 0865 / 2017
//2 Kaleb Asfaw …………………….……………….RCDI / 0872 / 2017
//3. Seid siru ……………………………….………...RCDI / 1716 / 2017
//4 Dawit Ayalew ……………………………………RCDI / 1426 / 2017
//5. Nahom  yiheys…..............RCDI / 1757 / 2017
//creating new Node
NodeTree* creatNode(int data) {
	NodeTree* newNode = new NodeTree();
	newNode->data = data;
	newNode->left = newNode->right = 0;
	return newNode;
}
void insertNode(NodeTree* root) {

	int choice;

	cout << " Current Node- > " << root->data << endl;

	cout << "1. Add Left Child" << endl;
	cout << "2. Add Right Child" << endl;

	cin >> choice;

	if (choice == 1) {

		if (root->left == 0) {

			int value;

			cout << "Enter Left Node Value: ";
			cin >> value;

			root->left = creatNode(value);

			cout << "Left Node Added Successfully " << endl;
		}

		else {

			cout << "Left Node Already Exists ..." << endl;;

			insertNode(root->left);
		}
	}

	else if (choice == 2) {

		if (root->right == 0) {

			int value;

			cout << "Enter Right Node Value: " << endl;;
			cin >> value;

			root->right = creatNode(value);

			cout << "Right Node Added Successfully " << endl;
		}

		else {

			cout << "Right Node Already Exists\n";

			insertNode(root->right);
		}
	}

	else {

		cout << "Invalid Choice..." << endl;
	}
}
void print_Preorder(NodeTree* root) {
	if (root == 0) return;



	cout << "Preorder of Give Employee Record Is " << endl;
	cout << root->data << endl;
	print_Preorder(root->left);
	print_Preorder(root->right);


}
void print_Inorder(NodeTree* root) {
	if (root == 0) return;



	cout << "Inorder of Give Employee Record Is " << endl;
	// first visit left 
	//then the data 
	// then the right 
	print_Preorder(root->left);
	cout << root->data << endl;
	print_Preorder(root->right);


}
void print_PostOrder(NodeTree* root) {
	if (root == 0) return;



	cout << "PostOrder of Give Employee Record Is " << endl;
	// first visit left 
	//  then the right 
	//then the data 

	print_Preorder(root->left);
	print_Preorder(root->right);
	cout << root->data << endl;


}
void Tree_Data_Structure() {
	NodeTree* root = 0; // FIX: must be outside switch

	int x412;
	bool tx = true;
	while (tx) {


		cout << "=========================================================" << endl;
		cout << "==================== Tree Operations =====================" << endl;
		cout << "=========================================================" << endl;

		cout << "1. Insert Employee ID" << endl;
		cout << "2. Delete Employee ID" << endl;
		cout << "3. Search Employee ID" << endl;
		cout << "4. Traversal Tree Employee ID " << endl;
		cout << "5. Return To Main Menu" << endl;

		cout << "Enter Choice -> ";
		cin >> x412;

		switch (x412) {

		case 1: {

			cout << "Enter Root Node -> ";
			int rootValue;
			cin >> rootValue;

			if (root == 0) {
				root = creatNode(rootValue);
			}
			else {
				insertNode(root);
			}

			int again = 1;

			while (again == 1) {

				insertNode(root);

				cout << "Do You Want To Add More Nodes ?" << endl;
				cout << "1. Yes" << endl;
				cout << "2. No" << endl;

				cin >> again;
			}

			break;
		}

		case 2: {

			if (root == 0) {
				cout << "Tree is empty" << endl;
				break;
			}

			int deleteChoice;

			cout << "1. Left Node" << endl;
			cout << "2. Right Node" << endl;

			cin >> deleteChoice;

			if (deleteChoice == 1) {

				if (root->left != 0) {

					delete root->left;
					root->left = 0;

					cout << "Left Node Deleted" << endl;
				}
				else {
					cout << "No Left Node Exists" << endl;
				}
			}
			else if (deleteChoice == 2) {

				if (root->right != 0) {

					delete root->right;
					root->right = 0;

					cout << "Right Node Deleted" << endl;
				}
				else {
					cout << "No Right Node Exists" << endl;
				}
			}
			else {
				cout << "Invalid Choice" << endl;
			}

			break;
		}

		case 3: {

			if (root == 0) {

				cout << "Tree is empty" << endl;
				break;
			}

			int searchValue;

			cout << "Enter Value To Search: ";
			cin >> searchValue;

			if (root->data == searchValue) {

				cout << "Found In Root Node." << endl;
			}
			else if (root->left != 0 &&
				root->left->data == searchValue) {

				cout << "Found In Left Node." << endl;
			}
			else if (root->right != 0 &&
				root->right->data == searchValue) {

				cout << "Found In Right Node." << endl;
			}
			else {

				cout << "Node Not Found" << endl;
			}

			break;
		}

		case 4: {

			int y1;

			cout << "================ Traversal Tree Operations ===============" << endl;

			cout << "1. Preorder" << endl;
			cout << "2. Inorder" << endl;
			cout << "3. Postorder" << endl;
			cout << "4. Return Menu" << endl;

			cout << "Enter Choice -> ";
			cin >> y1;

			switch (y1) {

			case 1:
				// Preorder
				print_Preorder(root);
				break;

			case 2:
				// Inorder
				print_Inorder(root);
				break;

			case 3:
				// Postorder
				print_PostOrder(root);
				break;

			case 4:
				break;

			default:
				cout << "Invalid Choice" << endl;
				break;
			}

			break;
		}

		case 5:

			Maindashboard();
			tx = false;
			break;

		default:
			cout << "Invalid Choice" << endl;
			break;
		}
	}
}

void Maindashboard() {
	int choice;
	cout << "=========================================================" << endl;
	cout << "======= Welcome To Employee Record Managment System =====" << endl;
	cout << "=========================================================" << endl;
	cout << "                                                           " << endl;
	cout << " Select a Data Structure  " << endl;
	cout << " 1. Single Linked List       " << endl;
	cout << " 2. Double Linked List       " << endl;
	cout << " 3. Stack      " << endl;
	cout << " 4. Queue       " << endl;
	cout << " 5. Tree     " << endl;
	cout << " 6. Exit Programm     " << endl;
	cout << "                              " << endl;
	cout << " Enter Your Choice ->    "; cin >> choice;
	switch (choice) {
	case 1:
		//single list 
		Single_Linked_List();
		break;
	case 2:
		//double list 
		Double_Linked_List();
		break;
	case 3:
		Stack_Data_Structure();
		break;
	case 4:
		// Quenu
		Quenue_Data_Structure();
		break;
	case 5:
		//Tree
		Tree_Data_Structure();
		break;

		// exit chawo

	case 6:
		cout << "//     Group  member’s              ID " << endl;
		cout << "1. Alazar Desalegn………………………………….RCDI / 0865 / 2017 " << endl;
		cout << "2 Kaleb Asfaw …………………….……………….RCDI / 0872 / 2017" << endl;
		cout << "3. Seid siru ……………………………….………...RCDI / 1716 / 2017" << endl;
		cout << "4 Dawit Ayalew ……………………………………RCDI / 1426 / 2017" << endl;
		cout << "5. Nahom  yiheys…..............RCDI / 1757 / 2017" << endl;
		break;
	default:

		break;




	}


}

int main() {
	Maindashboard();

}