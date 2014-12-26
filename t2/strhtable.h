typedef struct _Bucket
{
    char *key;
    void *value;
    struct _Bucket *next;
} Bucket;

typedef struct _HashTable
{
    int size;
    int total;
    struct _Bucket *buckets;
} HashTable;

int hash_init(HashTable **ht);
int hash_find(HashTable *ht, char *key, void **result);
int hash_insert(HashTable *ht, char *key, void *value);
int hash_remove(HashTable *ht, char *key);
int hash_loop(HashTable *ht, void **result);
//int hash_index(HashTable *ht, char *key);
static unsigned int ELFHash(char *str, unsigned int length);
void strcpy1(char *s, char *t);
int (*funpoint)(int);
int MyFun(int x) ;