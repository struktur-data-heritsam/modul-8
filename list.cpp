//
// Created by Ariq Heritsa on 27/05/22.
//

#include "list.h"

// 1305213031 - Ariq Heritsa Maalik
void create_list(list &L) {
  first(L) = nil;
  last(L) = nil;
}

// 1305213031 - Ariq Heritsa Maalik
bool is_list_empty(list L) {
  return first(L) == nil && last(L) == nil;
}

// 1305213031 - Ariq Heritsa Maalik
void allocate(infotype new_data, address &x) {
  x = new element;
  info(x) = new_data;
  next(x) = nil;
  prev(x) = nil;
}

// 1305213031 - Ariq Heritsa Maalik
void show(list L) {
  address P = first(L);

  if (P == nil) {
    cout << "List kosong!" << endl;
  } else {
    while (P != nil) {
      cout << info(P) << " ";
      P = next(P);
    }
  }

  cout << endl;
}

// 1305213031 - Ariq Heritsa Maalik
void insert_first(list &L, address P) {
  if (first(L) == nil && last(L) == nil) {
    first(L) = P;
    last(L) = P;
  } else {
    next(P) = first(L);
    prev(first(L)) = P;
    first(L) = P;
  }
}

// 1305213031 - Ariq Heritsa Maalik
void delete_last(list &L, address &P) {
  address Q;

  P = last(L);

  if (is_list_empty(L)) {
    cout << "-" << endl;
  } else if (first(L) == last(L)) {
    first(L) = nil;
    last(L) = nil;
  } else {
    Q = prev(last(L));
    prev(P) = nil;
    next(Q) = nil;
    last(L) = Q;
  }
}

// 1305213031 - Ariq Heritsa Maalik
bool find_string(list L, infotype x) {
  if (first(L) == nil && last(L) == nil) {
    return false;
  }

  address P = first(L);

  while (P != nil) {
    if (info(P) == x) {
      return true;
    }
    P = next(P);
  }

  return false;
}
