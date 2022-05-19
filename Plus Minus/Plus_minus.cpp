#include <bits/stdc++.h>

using namespace std;

void plusMinus(vector<int> arr) {
    float c1=0,c2=0,c3=0,s;
    for (int i=0;i<arr.size();i++) {
        if (arr[i]>0) {
            c1+=1;       
        }
        else if (arr[i]==0) {
            c2+=1;
        }
        else if (arr[i]<0) {
            c3+=1;
        }
    }
    s=c1+c2+c3;
    cout<<c1/s<<"\n"<<c3/s<<"\n"<<c2/s<<endl;
}