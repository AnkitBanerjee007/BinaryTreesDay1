
// Level order Traversal -- Breadth First Search
// Using QUEUE
#include<bits/stdc++.h>

using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

void levelOrder(Node* root){
	
	// Base Case
	if(root == NULL){
		return ;
	}
	
	// Creating a queue
	queue<Node*> q;
	
	// Put the root in the Queue
	q.push(root);
	
	while(q.empty() == false){
		// Print the front most element in the queue
		Node *node = q.front();
		cout<<node->data<<" ";
		//Pop the front most printed element
		q.pop();
		
		// Enquque left child
		if(node->left != NULL)
		q.push(node->left);
		//Enquque right child
		if(node->right != NULL)
		q.push(node->right);
	}
}
// Utility function to create a new tree node
Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
// Driver program to test above functions
int main()
{
    // Let us create binary tree shown in above diagram
    Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
 
    cout << "Level Order traversal of binary tree is \n";
    levelOrder(root);
    return 0;
}
