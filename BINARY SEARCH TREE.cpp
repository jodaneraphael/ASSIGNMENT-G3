#include <iostream>
	
	class TreeNode {
		public:
		    int key;
		    TreeNode* left;
		    TreeNode* right;
		
		    TreeNode(int value) : key(value), left(nullptr), right(nullptr) {}
	};

	class BinarySearchTree {
		private:
		    TreeNode* root;
		
		    // Helper function for inserting a key into the tree
		    TreeNode* insert(TreeNode* root, int key) {
		        if (root == nullptr) {
		            return new TreeNode(key);
		        }
		
		        if (key < root->key) {
		            root->left = insert(root->left, key);
		        } else if (key > root->key) {
		            root->right = insert(root->right, key);
		        }
		
		        return root;
	    }

    // Helper function for searching a key in the tree
    bool search(TreeNode* root, int key) {
        if (root == nullptr) {
            return false;
        }

        if (key == root->key) {
            return true;
        } else if (key < root->key) {
            return search(root->left, key);
        } else {
            return search(root->right, key);
        }
    }

	public:
	    BinarySearchTree() : root(nullptr) {}
	
	    // Public function to insert a key into the tree
	    void insert(int key) {
	        root = insert(root, key);
	    }
	
	    // Public function to search for a key in the tree
	    bool search(int key) {
	        return search(root, key);
	    }
};

int main() {
    BinarySearchTree bst;

    // Inserting elements into the BST
    bst.insert(50);
    bst.insert(35);
    bst.insert(25);
    bst.insert(40);
    bst.insert(70);
    bst.insert(60);
    bst.insert(80);

    // Searching for elements in the BST
    std::cout << "Search for 25: " << (bst.search(25) ? "Found" : "Not Found") << std::endl;
    std::cout << "Search for 45: " << (bst.search(45) ? "Found" : "Not Found") << std::endl;

    return 0;
}
