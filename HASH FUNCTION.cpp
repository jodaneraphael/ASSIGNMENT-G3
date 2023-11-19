#include <iostream>
#include <unordered_set>

	using namespace std;

	class HashTable {
	
	    unordered_set<int> table;
	
	public:
	    void insert(int key) {
	        table.insert(key);
	    }
	
	    bool search(int key) {
	        return table.find(key) != table.end();
	    }
	
	    void remove(int key) {
	        table.erase(key);
	    }
	
	    void display() {
	        for (int key : table) {
	            cout << key << " ";
	        }
	        cout << endl;
	    }
	};

int main() {
    HashTable hashTable;

    hashTable.insert(5);
    hashTable.insert(10);
    hashTable.insert(15);

    cout << "Initial Hash Table: ";
    hashTable.display();

    cout << "Search for key 10: " << (hashTable.search(10) ? "Found" : "Not Found") << endl;

    hashTable.remove(10);
    cout << "After removing key 10: ";
    hashTable.display();
    
     hashTable.insert(33);
     hashTable.display();
    
    
    

    return 0;
} 

