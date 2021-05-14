#include <bits/stdc++.h>
#include <algorithm>


using namespace std;

int main() {
int n;
scanf("%d", &n);
int a[n], b[n];
for(int i = 0; i < n; i++){
    scanf("%d", &a[i]);
}

for(int i = 0; i < n; i++){
    scanf("%d", &b[i]);
}
int c[n];
for(int i = 0; i < n; i++){
    c[i] = a[i] - b[i];
}

sort(c, c + n);

long long cont = 0;
for(int i = 0; i < n; i++){
    if(c[i] > 0){
        int index = lower_bound(c, c + n, - c[i] + 1) - c;
        cont += i - index;
    }
}

cout << cont << endl;

return 0;
}
