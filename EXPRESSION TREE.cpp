#include <iostream>
#include <string>

using namespace std;

	// Define a node in the expression tree
	struct TreeNode {
	    string value;
	    TreeNode* left;
	    TreeNode* right;
	
	    TreeNode(string val) : value(val), left(nullptr), right(nullptr) {}
	};

	// Function to evaluate the expression tree
	int evaluate(TreeNode* root) {
	    if (!root) {
	        return 0;
	    }
	
	    if (!root->left && !root->right) {
	        return stoi(root->value);
	    }
	
	    int leftValue = evaluate(root->left);
	    int rightValue = evaluate(root->right);
	
	    if (root->value == "+") {
	        return leftValue + rightValue;
	    } else if (root->value == "-") {
	        return leftValue - rightValue;
	    } else if (root->value == "*") {
	        return leftValue * rightValue;
	    } else if (root->value == "/") {
	        return leftValue / rightValue;
	    }
	
	    return 0;
	}

	int main() {
	    // Create a simple expression tree: (5 * 4) + (100 - 20)
	    TreeNode* root = new TreeNode("+");
	    
	    root->left = new TreeNode("*");
	    root->left->left = new TreeNode("5");
	    root->left->right = new TreeNode("4");
	    
	    root->right = new TreeNode("-");
	    root->right->left = new TreeNode("100");
	    root->right->right = new TreeNode("20"); 
	
	    // Evaluate and print the result
	    int result = evaluate(root);
	    cout << "The Result is: " << result << endl;
	
	    return 0;
	} 


