#include<bits/stdc++.h>
using namespace std;

bool isPalin(string s)
{
    int n = s.size();
    int i = 0, j = n-1;

    while(i < j) {
        if(s[i] != s[j])
            return false;

        i ++; j --;
    }
    return true;
}

int main(){
    string s;
    cin >> s;
    transform(s.begin(), s.end(), s.begin(), ::tolower);

    if(isPalin(s)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}