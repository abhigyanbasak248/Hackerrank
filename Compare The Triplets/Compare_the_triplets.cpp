#include <bits/stdc++.h>

using namespace std;

vector<int> compareTriplets(vector<int> a, vector<int> b) {
    int i,n,c1=0,c2=0;
    for (i=0;i<3;i++) {
        if (a[i]>b[i]) {
            c1++;
        }
        else if (a[i]<b[i]) {
            c2++;
        }
        else {
            continue;
        }
    }
    vector<int> c;
    c.push_back(c1);
    c.push_back(c2);
    
    return c;
}