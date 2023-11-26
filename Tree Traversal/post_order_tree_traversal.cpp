#include <bits/stdc++.h>
using namespace std;

// A binary tree node has data, and two pointers named left and right pointer
struct Node{
	int data;
	struct Node *left, *right;
};

Node* newNode(int data){
	Node* temp = new Node;
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

void print_post_order(struct Node* node){
	if(node == NULL){
		return;
	}


	print_post_order(node->left);
	print_post_order(node->right);
	cout << node->data << " ";

}


int main(){
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	// Function call
	cout << "Post traversal of binary tree is \n";
	print_post_order(root);

	return 0;
}