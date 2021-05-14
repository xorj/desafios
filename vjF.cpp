#include <bits/stdc++.h>
#include <algorithm>
using namespace std;


int main() {
int n;
cin >> n;
while(n--){
    int d;
    cin >> d;
    int v[d];
    for(int i = 0; i < d; i++){
        cin >> v[i];
    }

    int menorPreco[d];
    menorPreco[d - 1] = v[d - 1];

    for(int i = d - 2; i >= 0; i--){
        menorPreco[i] = min(v[i], menorPreco[i + 1]);
    }

    int ruins = 0;
    for(int i = 0; i < d; i++){
        if(v[i] > menorPreco[i]){
            ruins++;
        }
    }

    cout << ruins << endl;
}

return 0;
}
