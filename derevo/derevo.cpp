#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};

int findHeight(Node* node) {
    if (node == nullptr) {
        return 1;
    }

    int leftHeight = findHeight(node->left);
    int rightHeight = findHeight(node->right);

    return 1 + max(leftHeight, rightHeight);
}

int main() {
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);

    cout << "Висота дерева: " << findHeight(root) << endl;

    return 0;
}
