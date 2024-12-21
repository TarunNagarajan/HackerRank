vector<int> compareTriplets(vector<int> a, vector<int> b) {
    vector<int> results(2,0);
    int alice = 0; int bob = 0;
    for (int i = 0; i < 3; i++ ) {
        if (a[i] > b[i]) {
            alice += 1;
        } else if (b[i] > a[i]) {
            bob += 1;
        } 
    }
    
    results[0] = alice; results[1] = bob;
    return results;
}
