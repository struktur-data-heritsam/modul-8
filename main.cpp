#include <iostream>
#include "list.h"

using namespace std;

int main() {
  list L;
  int N;
  address P;
  infotype input;

  // Membuat list kosong
  create_list(L);

  // Input data
  cout << "Masukkan banyaknya data: ";
  cin >> N;

  for (int i = 0; i < N; i++) {
    cin >> input;
    allocate(input, P);
    insert_first(L, P);
  }

  // Menampilkan data
  show(L);

  // Mencari string
  cout << "Cari data: ";
  cin >> input;

  if (find_string(L, input)) {
    cout << "Data terdapat di list" << endl;
  } else {
    cout << "Data tidak ada dalam list" << endl;
  }

  // Menghapus data sampai habis
  P = first(L);

  while (first(L) != nil) {
    delete_last(L, P);
    cout << "Data yang terhapus: " << info(P) << endl;
  }

  // Menampilkan data
  show(L);

  return 0;
}
