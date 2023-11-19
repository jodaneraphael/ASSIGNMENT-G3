#include <iostream>
#include <unordered_map>
#include <queue>

using namespace std;

// Node structure for the Huffman tree
struct HuffmanNode {
    char data;
    int frequency;
    HuffmanNode* left;
    HuffmanNode* right;

    HuffmanNode(char ch, int freq) : data(ch), frequency(freq), left(nullptr), right(nullptr) {}
};

// Comparison function for the priority queue
struct CompareNodes {
    bool operator()(HuffmanNode* left, HuffmanNode* right) {
        return left->frequency > right->frequency;
    }
};

// Build the Huffman tree
HuffmanNode* buildHuffmanTree(const unordered_map<char, int>& frequencies) {
    priority_queue<HuffmanNode*, vector<HuffmanNode*>, CompareNodes> minHeap;

    // Create a leaf node for each character and add it to the priority queue
    for (const auto& entry : frequencies) {
        HuffmanNode* node = new HuffmanNode(entry.first, entry.second);
        minHeap.push(node);
    }

    // Build the Huffman tree by combining nodes until there is only one node left
    while (minHeap.size() > 1) {
        HuffmanNode* left = minHeap.top();
        minHeap.pop();

        HuffmanNode* right = minHeap.top();
        minHeap.pop();

        HuffmanNode* combinedNode = new HuffmanNode('\0', left->frequency + right->frequency);
        combinedNode->left = left;
        combinedNode->right = right;

        minHeap.push(combinedNode);
    }

    // The remaining node is the root of the Huffman tree
    return minHeap.top();
}

// Traverse the Huffman tree and print the codes
void printHuffmanCodes(HuffmanNode* root, string code, unordered_map<char, string>& codes) {
    if (root == nullptr) {
        return;
    }

    // If the node is a leaf, print the character and its code
    if (!root->left && !root->right) {
        codes[root->data] = code;
        cout << root->data << ": " << code << endl;
    }

    // Traverse the left and right subtrees
    printHuffmanCodes(root->left, code + "0", codes);
    printHuffmanCodes(root->right, code + "1", codes);
}

int main() {
    // Input: Character frequencies
    unordered_map<char, int> frequencies = {
        {'a', 5},
        {'b', 9},
        {'c', 12},
        {'d', 13},
        {'e', 16},
        {'f', 45}
    };

    // Build the Huffman tree
    HuffmanNode* root = buildHuffmanTree(frequencies);

    // Traverse the Huffman tree and print the Huffman codes
    unordered_map<char, string> codes;
    printHuffmanCodes(root, "", codes);

    return 0;
}

