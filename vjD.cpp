#include <iostream>
#include <algorithm>

using namespace std;

int main() {
int n;
long long t;
cin >> n >> t;
long long a[n], s[n];
for(int i = 0; i < n; i++){
    cin >> a[i];
    if(i == 0){
        s[i] = a[i];
    } else {
    s[i] = s[i - 1] + a[i];
    }
}

int maxbooks = 0;
for(int i = 0; i < n; i++){
    int currentbooks = upper_bound(s + i, s + n, t + s[i] - a[i]) - s;
    maxbooks = max(currentbooks  - i, maxbooks);
}

cout << maxbooks << endl;

return 0;
}
