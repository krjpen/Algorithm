#include <bits/stdc++.h>
using namespace std;

#define BUCKET_SIZE 200
#define Data 100

int M[BUCKET_SIZE];
int Delta = 2;
int i, j;

// Data list and reverse list to verify my code works
int T[] = {};
int Tr[] = {};

void init(void) {
  for (i = 0; i < BUCKET_SIZE; i++) {
    M[i] = -1;
  }
}

void print_array() {
  for (i = 0; i < BUCKET_SIZE; i++) {
    cout << M[i] << endl;
  }
}

void make_data() {
  for (i = 0; i < Data; i++) {
    random_device random;
    T[i] = T[i - 1] + random() % BUCKET_SIZE;
  }

  for (i = 0; i < Data; i++) {
    random_device random;
    Tr[i] = Tr[i - 1] + random() % BUCKET_SIZE;
  }
}

int search(int M[], int k) {
  j = k % BUCKET_SIZE;
  if (M[j] == k) {
    cout << k << " is on "
         << "M[" << j << "]" << endl
         << endl;
    return 0;
  } else {
    for (i = 0; i < BUCKET_SIZE; i++) {
      j = (j + Delta) % BUCKET_SIZE;
      // cout << "j means hash number, now j is " << j << endl;
      if (M[j] == k) {
        cout << k << " is on "
             << "M[" << j << "]" << endl
             << endl;
        return 0;
      }
    }
    return -1;
  }
}

int insert(int M[], int k) {
  j = k % BUCKET_SIZE;
  if (M[j] == -1) {
    M[j] = k;
    // cout << "j = k/BUCKETSIZE, " << j << " = " << k << "/" << BUCKET_SIZE
    //      << endl;
    return 0;
  } else {
    for (i = 0; i < BUCKET_SIZE; i++) {
      j = (j + Delta) % BUCKET_SIZE;
      // cout << "j means hash number, now j is " << j << endl;

      if (M[j] == -1) {
        M[j] = k;
        return 0;
      }
    }
    return -1;
  }
}

int main(void) {
  init();
  make_data();

  int k = 0;
  cout << endl << "Insert stage start" << endl << endl;
  for (int i = 0; i < Data; i++) {
    k = T[i];
    cout << "T[" << i << "] is " << T[i] << endl;

    insert(M, k);
    cout << endl << endl;
  }

  cout << endl << "Show hash table" << endl << endl;
  print_array();

  cout << endl << "Search stage start" << endl << endl;
  for (int i = 0; i < Data; i++) {
    k = Tr[i];
    cout << "Tr[" << i << "] is " << Tr[i] << endl;

    search(M, k);
  }
  print_array();
}
