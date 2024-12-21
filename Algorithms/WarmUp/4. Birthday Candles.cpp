int birthdayCakeCandles(vector<int> candles) {
    int heighest = 0;
    int count = 0;
    
    for (int height: candles) {
        if (height > heighest) {
            heighest = height;
            count = 1;
        } else if (height == heighest) {
            count++;
        }
    } return count;
}
