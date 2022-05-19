#include <bits/stdc++.h>

using namespace std;

int birthdayCakeCandles(vector<int> candles) {
    int max=candles[0],cnt=0;
    for (int i=0;i<candles.size();i++) {
        if (candles[i]>max) {
            max=candles[i];
        }
    }
    for (int i=0;i<candles.size();i++) {
        if (candles[i]==max) {
            cnt+=1;
        }
    }
    return cnt;
}