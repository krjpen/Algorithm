#include <bits/stdc++.h>
using namespace std;

#define N 1000000
#define BUCKET_SIZE 2000000

int main() {
  int A[BUCKET_SIZE];
  int key;
  int i, j;

  // Put random data in array
  for (int i = 0; i < N; i++) {
    random_device random;
    A[i] = random() % BUCKET_SIZE;
  }

  // Sort
  for (i = 0; i < N - 1; i++) {
    for (j = 0; j < N - i - 1; j++) {
      if (A[j] > A[j + 1]) {
        swap(A[j], A[j + 1]);
      }
    }
  }

  //Array
  // for (i = 0; i < N; i++) {
  //   cout << A[i] << endl;
  // }
  // cout << endl << endl;


  // Binary Search
  int min = 0;
  int max = N;
  cout << "Program Start" << endl;
  cout << "Please put a number which you want to find" << endl;
  cin >> key;

  while (min <= max) {
    int x = (min + max) / 2;
    if (key > A[x]) {
      min = x + 1;
    }
    if (key < A[x]) {
      max = x - 1;
    }
    if (key == A[x]) {
      cout << "I found " << key << endl;
      return 0;
    }
  }

  cout << key << " is not found" << endl;
}
