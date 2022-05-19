#include <bits/stdc++.h>

using namespace std;

long max(vector<long> v) {
    long max=v[0];
    for (long i=0;i<v.size();i++) {
        if (v[i]>max) {
            max=v[i];
        }
    }
    return max;   
}
long min(vector<long> v) {
    long min=v[0];
    for (long i=0;i<v.size();i++) {
        if (v[i]<min) {
            min=v[i];
        }
    }
    return min;   
}
void miniMaxSum(vector<long> v) {
    vector<long> v1;
    vector<long> v2; 
    for (int i=0;i<v.size();i++) {
        long sum=0;
        v1=v;
        v1.erase(v1.begin()+i);
        for (long j=0;j<v1.size();j++) {
            sum+=v1[j];
        }        
        v2.push_back(sum);  
    }
    cout<<min(v2)<<" "<<max(v2)<<endl;

}
