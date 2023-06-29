#include <iostream>
#include <vector>

using namespace std;

int maxCount(int m, int n, vector<vector<int>>& ops) {
    int minRow = m;
    int minCol = n;
    
    for (const auto& op : ops) {
        minRow = min(minRow, op[0]);
        minCol = min(minCol, op[1]);
    }
    
    return minRow * minCol;
}

int main() {
    int m, n;
    cout << "Enter the number of rows (m): ";
    cin >> m;
    cout << "Enter the number of columns (n): ";
    cin >> n;

    int numOps;
    cout << "Enter the number of operations: ";
    cin >> numOps;

    vector<vector<int>> ops(numOps, vector<int>(2));
    cout << "Enter the operations in the format 'ai bi':\n";
    for (int i = 0; i < numOps; i++) {
        cin >> ops[i][0] >> ops[i][1];
    }

    int maxIntegers = maxCount(m, n, ops);
    cout << "The maximum number of integers in the matrix after performing all the operations: " << maxIntegers << endl;

    return 0;
}
