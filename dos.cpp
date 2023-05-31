#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string a, b, c, tstr;
    cin>>a;
    cin>>b;
    cout<<a.size()<<' '<<b.size()<<endl;
    c = a + b;
    cout<<c<<endl;
    tstr[0]=a[0];
    a[0]=b[0];
    b[0]=tstr[0];
    cout<<a<<' '<<b<<endl;
    
    return 0;
}