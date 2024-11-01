typedef struct ht_item {
    char *key;
    char *value;
} ht_item;

typedef struct ht_hash_table {
    int size;
    int count;
    ht_item **items;    // ** indicates an array of pointers
} ht_hash_table;

#define HT_PRIME_1 151
#define HT_PRIME_2 157

void ht_insert(ht_hash_table *ht, const *key, const char *value);

char *ht_search(ht_hash_table *ht, const char *key);

void ht_delete(ht_hash_table *h, const char *key);
