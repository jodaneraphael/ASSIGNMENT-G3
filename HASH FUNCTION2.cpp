#include <iostream> 
#include <unordered_map>

	using namespace std;
	
int main () {
	
	unordered_map<int, string > hashTable;
	
	//Inserting key value pairs into the hash table
	
	hashTable[1] = "raph";
	hashTable[2] = "mervick";
	hashTable[3] = "jude";
	
	//Retrieving values from the hash table
	
	cout << "values at key 1: " << hashTable[1] << endl;
	cout << "the value at key 2: " << hashTable[2] << endl;
	cout << "the value at key 3:" << hashTable[3];
	
}