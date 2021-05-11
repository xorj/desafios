#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

//t*(n + n log n + k log k + k)
int main() {
int t;
scanf("%d", &t);
//t
while(t--){
    int n, k;
    vector<pair<int, int>> presentes;
    scanf("%d %d", &n, &k);

    //n
    for(int i = 0; i < n; i++){
        int id, h, w, l;
        scanf("%d %d %d %d", &id, &h, &w, &l);
        presentes.push_back(make_pair(h*w*l, id));
    }

    //n log n
    sort(presentes.begin(), presentes.end(),
        [](const auto& lhs, const auto& rhs) {
         if(lhs.first == rhs.first){
            return  lhs.second > rhs.second;
         }
        return lhs.first < rhs.first;
    });

    //k log k
    sort(presentes.end() - k, presentes.end(),
        [](const auto& lhs, const auto& rhs) {
        return lhs.second > rhs.second;
    });

    //k
    for(int i = 0; i < k; i++){
        printf("%d", presentes[presentes.size() - i - 1].second);
        if(i < k - 1){
            printf(" ");
        }
    }
    printf("\n");
}



return 0;
}
