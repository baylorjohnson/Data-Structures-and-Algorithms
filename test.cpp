using namespace std;
#include <iostream>

void times_table_helper(int n, int sz, int* row) {
    if (n < 0) return;
    int* newrow = new int[sz + 1];
    for (int i = 0; i <= sz; i++) {
        newrow[i] = row[i] + i;
        cout << newrow[i] << " ";
    }
    cout << endl;
    delete[] row;
    times_table_helper(n - 1, sz, newrow);
    }

    void times_table(int n) {
    int* startrow = new int[n + 1];
    for (int i = 0; i <= n; i++) {
        startrow[i] = 0;
        cout << "0 ";
    }
    cout << endl;
    times_table_helper(n - 1, n, startrow);
    delete[] startrow;
    }