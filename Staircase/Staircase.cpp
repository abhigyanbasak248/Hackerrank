#include <bits/stdc++.h>

using namespace std;

void staircase(int n) {
    int i,j,k;
    for (i=0;i<n;i++) {
        for (j=n-1-i;j>0;j--) {
            cout<<" ";     
        }
        for (k=i+1;k>0;k--) {
            cout<<"#";

        } 
        cout<<"\n";
    }

}