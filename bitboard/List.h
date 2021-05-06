#include <stdlib.h>
//bisogna renderlo più snello
typedef struct node
{
    Bitboard black;
    Bitboard white;
    Bitboard king;
    struct node *next;
} node_t;

void printList(node_t *n);

void push(node_t **head_ref, Bitboard black, Bitboard white, Bitboard king);

void insertAfter(node_t *prev_node, Bitboard black, Bitboard white, Bitboard king);

void append(node_t **head_ref, Bitboard black, Bitboard white, Bitboard king);