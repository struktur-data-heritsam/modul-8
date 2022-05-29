//
// Created by Ariq Heritsa on 27/05/22.
//

#ifndef STD_MOD8_DS4501_1305213031_LIST_H
#define STD_MOD8_DS4501_1305213031_LIST_H

#include <iostream>

using namespace std;

#define nil NULL
#define first(L) L.first
#define last(L) L.last
#define info(P) P->info
#define next(P) P->next
#define prev(P) P->prev

typedef string infotype;
typedef struct element *address;

struct element {
  infotype info;
  address next, prev;
};

struct list {
  address first, last;
};

void create_list(list &L);

bool is_list_empty(list L);

void allocate(infotype new_data, address &x);

void show(list L);

void insert_first(list &L, address P);

void delete_last(list &L, address &P);

bool find_string(list L, infotype x);

#endif //STD_MOD8_DS4501_1305213031_LIST_H
