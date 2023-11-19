#include <bits/stdc++.h>
using namespace std;

#define N 100
#define BUCKET_SIZE 200

int main() {
  int A[BUCKET_SIZE];
  int key;
  int i, j;
  int p;
  

  for (i = 0; i < N; i++) {
    A[i] = -1;
  }

  // Put random data in array
  for (i = 0; i < N; i++) {
    random_device random;
    A[i] = A[i-1] + random() % BUCKET_SIZE;
  }

  for (int i = 0; i < N; i++) {
    cout << A[i] << endl;
  }

  // Binary Search
  int min = 0;
  int max = N;
  cout << "Program Start" << endl;
  cout << "Please put a number which you want to find" << endl;
  cin >> key;

  while (min <= max) {
    int x = (min + max) / 2;
    cout << A[x] << endl;
    if (key > A[x]) {
      min = x + 1;
      cout << "now" << min << endl;
    }
    if (key < A[x]) {
      max = x - 1;
      cout << "now" << max << endl;
    }
    if (key == A[x]) {
      cout << "I found " << key << endl;
      return 0;
    }
  }

  cout << key << " is not found" << endl;
}
