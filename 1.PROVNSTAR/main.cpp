#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    string s(a);
    if (s.find("HUSC") != string::npos)
        cout<<n-4+1-s.find("HUSC");
}
