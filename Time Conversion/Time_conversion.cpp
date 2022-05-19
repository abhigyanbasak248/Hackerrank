#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string res,str,hour;
    int a=0;
    if (s.substr(8,2)=="AM") {
        if (s.substr(0,2)=="12") {
            res="00"+s.substr(2,6);
        }
        else {
            res=s.substr(0,8);     
        } 
    }
    else if (s.substr(8,2)=="PM") {
        if (s.substr(0,2)=="12") {
            res=s.substr(0,8);
        }
        else {
            str=s.substr(0,2);
            stringstream ss(str);
            ss >> a;
            a+=12;
            hour=to_string(a);
            res=hour+s.substr(2,6);      
        }               
    }
    return res;
}