/*approach: First sort the array in descending order then multiply the first three elements*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<int> a;
    int n;
    cin>>n;
    int x;
    for(int i=0;i<n;i++){
        cin>>x;
        a.push_back(x);}
    sort(a.rbegin(),a.rend());
    cout<<a[0]*a[1]*a[2];
    return 0;
}
