#include <stdio.h>
#include <stdlib.h>

// Define a hash table node
typedef struct {
    int key;
    int value;
} HashTableNode;

// Define the hash table
typedef struct {
    HashTableNode *nodes;
    int size;
} HashTable;

// Create a hash table
HashTable* createHashTable(int size) {
    HashTable *table = (HashTable *)malloc(sizeof(HashTable));
    table->nodes = (HashTableNode *)calloc(size, sizeof(HashTableNode));
    table->size = size;
    return table;
}

// Hash function to calculate the index
int hashFunction(int key, int size) {
    return abs(key) % size;
}

// Insert key-value pair into the hash table
void insert(HashTable *table, int key, int value) {
    int index = hashFunction(key, table->size);
    while (table->nodes[index].key != 0) {
        index = (index + 1) % table->size;
    }
    table->nodes[index].key = key;
    table->nodes[index].value = value;
}

// Search for a key in the hash table
int search(HashTable *table, int key) {
    int index = hashFunction(key, table->size);
    while (table->nodes[index].key != 0) {
        if (table->nodes[index].key == key) {
            return table->nodes[index].value;
        }
        index = (index + 1) % table->size;
    }
    return -1; // Key not found
}

// Function to find two indices such that their elements add up to target
void twoSum(int* nums, int numsSize, int target) {
    HashTable *table = createHashTable(numsSize);
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int complementIndex = search(table, complement);
        if (complementIndex != -1) {
            printf("Indices: %d and %d\n", complementIndex, i);
            free(table->nodes);
            free(table);
            return;
        }
        insert(table, nums[i], i);
    }
    printf("No two sum solution found\n");
    free(table->nodes);
    free(table);
}

int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    twoSum(nums, numsSize, target);

    return 0;
}
