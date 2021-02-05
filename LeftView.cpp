
// Left view of a Binary Tree

#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

void leftView(Node* root){
	
	if(root == NULL)
	return;
	
	queue<Node*> q;
	q.push(root);
	
	//Level order traversal of a tree
	while(!q.empty()){
		
		// Number of nodes at current level
		int n = q.size();
		
		// Looping through all the nodes at a particular level
		for(int i=0;i<=n;i++){
			
			// Creating a temporary node pointer to store the front element in queue
			Node* temp = q.front();
			// Popping the front element
			q.pop();
			
			//Print left most node at each level which is the the first node in the current level
			if(n==1)
			cout<<temp->data<<" ";
			//Add left node to queue
			if(temp->left != NULL)
			q.push(temp->left);
			//Add right node to queue
			if(temp->right != NULL)
			q.push(temp->right);
		}
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
// Driver code
int main() 
{ 
    // Let's construct the tree as 
    // shown in example 
 
    Node* root = newNode(10); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(7); 
    root->left->right = newNode(8); 
    root->right->right = newNode(15); 
    root->right->left = newNode(12); 
    root->right->right->left = newNode(14); 
 
    leftView(root); 
} 
