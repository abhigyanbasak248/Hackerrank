#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int diagonalDifference(vector<vector<int>> arr) {
    int i,j,res1=0,res2=0,res=0;
    for (i=0;i<arr.size();i++) {
        for (j=0;j<arr[0].size();j++) {
            if (i==j) {
                res1+=arr[i][j];
                if (i+j==(arr[0].size()-1)) {
                    res2+=arr[i][j];
                }
            }
            else if (i+j==(arr[0].size()-1)) {
                res2+=arr[i][j];
                
            }
            
        }
    }
    res=abs(res1-res2);
    return res;

}
