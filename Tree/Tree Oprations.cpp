#include <iostream>
using namespace std;

struct NodeTree {
    int data;
    NodeTree* left;
    NodeTree* right;
};

// Creating New Node
NodeTree* creatNode(int data) {
    NodeTree* newNode = new NodeTree();
    newNode->data = data;
    newNode->left = 0;
    newNode->right = 0;
    return newNode;
}

// Insert Node
void insertNode(NodeTree* root) {

    int choice;

    cout << "Current Node -> " << root->data << endl;
    cout << "1. Add Left Child" << endl;
    cout << "2. Add Right Child" << endl;
    cout << "Enter Choice -> ";
    cin >> choice;

    if (choice == 1) {

        if (root->left == 0) {

            int value;

            cout << "Enter Left Node Value: ";
            cin >> value;

            root->left = creatNode(value);

            cout << "Left Node Added Successfully" << endl;
        }
        else {

            cout << "Left Node Already Exists" << endl;

            insertNode(root->left);
        }
    }

    else if (choice == 2) {

        if (root->right == 0) {

            int value;

            cout << "Enter Right Node Value: ";
            cin >> value;

            root->right = creatNode(value);

            cout << "Right Node Added Successfully" << endl;
        }
        else {

            cout << "Right Node Already Exists" << endl;

            insertNode(root->right);
        }
    }

    else {
        cout << "Invalid Choice" << endl;
    }
}

// Preorder
void print_Preorder(NodeTree* root) {

    if (root == 0)
        return;

    cout << root->data << " ";

    print_Preorder(root->left);
    print_Preorder(root->right);
}

// Inorder
void print_Inorder(NodeTree* root) {

    if (root == 0)
        return;

    print_Inorder(root->left);

    cout << root->data << " ";

    print_Inorder(root->right);
}

// Postorder
void print_PostOrder(NodeTree* root) {

    if (root == 0)
        return;

    print_PostOrder(root->left);

    print_PostOrder(root->right);

    cout << root->data << " ";
}

int main() {

    NodeTree* root = 0;

    int choice;
    bool run = true;

    while (run) {

        cout << endl;
        cout << "==================================================" << endl;
        cout << "=============== Tree Operations ==================" << endl;
        cout << "==================================================" << endl;

        cout << "1. Insert Employee ID" << endl;
        cout << "2. Delete Employee ID" << endl;
        cout << "3. Search Employee ID" << endl;
        cout << "4. Traversal Employee ID" << endl;
        cout << "5. Exit Program" << endl;

        cout << "Enter Choice -> ";
        cin >> choice;

        switch (choice) {

        case 1: {

            if (root == 0) {

                int value;

                cout << "Enter Root Node Value: ";
                cin >> value;

                root = creatNode(value);
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

                cout << "Tree Is Empty" << endl;
                break;
            }

            int del;

            cout << "1. Delete Left Node" << endl;
            cout << "2. Delete Right Node" << endl;
            cout << "Enter Choice -> ";
            cin >> del;

            if (del == 1) {

                if (root->left != 0) {

                    delete root->left;
                    root->left = 0;

                    cout << "Left Node Deleted" << endl;
                }
                else {

                    cout << "No Left Node Exists" << endl;
                }
            }

            else if (del == 2) {

                if (root->right != 0) {

                    delete root->right;
                    root->right = 0;

                    cout << "Right Node Deleted" << endl;
                }
                else {

                    cout << "No Right Node Exists" << endl;
                }
            }

            break;
        }

        case 3: {

            if (root == 0) {

                cout << "Tree Is Empty" << endl;
                break;
            }

            int searchValue;

            cout << "Enter Value To Search: ";
            cin >> searchValue;

            if (root->data == searchValue) {

                cout << "Found In Root Node" << endl;
            }
            else if (root->left != 0 &&
                root->left->data == searchValue) {

                cout << "Found In Left Node" << endl;
            }
            else if (root->right != 0 &&
                root->right->data == searchValue) {

                cout << "Found In Right Node" << endl;
            }
            else {

                cout << "Node Not Found" << endl;
            }

            break;
        }

        case 4: {

            if (root == 0) {

                cout << "Tree Is Empty" << endl;
                break;
            }

            int t;

            cout << "1. Preorder" << endl;
            cout << "2. Inorder" << endl;
            cout << "3. Postorder" << endl;

            cout << "Enter Choice -> ";
            cin >> t;

            switch (t) {

            case 1:

                cout << "Preorder Traversal: ";
                print_Preorder(root);
                cout << endl;

                break;

            case 2:

                cout << "Inorder Traversal: ";
                print_Inorder(root);
                cout << endl;

                break;

            case 3:

                cout << "Postorder Traversal: ";
                print_PostOrder(root);
                cout << endl;

                break;

            default:

                cout << "Invalid Choice" << endl;
            }

            break;
        }

        case 5:

            run = false;
            break;

        default:

            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}