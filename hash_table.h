typedef struct ht_item {
    char *key;
    char *value;
} ht_item;

typedef struct ht_hash_table {
    int size;
    int count;
    ht_item **items;    // ** indicates an array of pointers
} ht_hash_table;