int diagonalDifference(vector<vector<int>> arr) {
    int ltr = 0; int rtl = 0;
    for (int i = 0; i < arr.size(); i++) {
        ltr += arr[i][i];
        rtl += arr[i][arr.size() - i - 1];
    }
    return abs(ltr - rtl);
}
