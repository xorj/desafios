#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

struct contestant{
    int id, sub, time, inc[11];
    set<int> solve;
};


bool comp(contestant a, contestant b){
    if(a.solve.size() == b.solve.size()){
        if(a.time == b.time){
            return a.id < b.id;
        } else {
            return a.time < b.time;
        }
    } else {
        return a.solve.size() > b.solve.size();
    }

}

int main() {

int n;
scanf("%d\n", &n);

while(n--){
    char entrada[150];
    contestant subs[101];
    for(int i = 0; i <= 100; i++){
        memset(subs[i].inc, 0, sizeof(subs[i].inc));
        subs[i].id = i;
        subs[i].sub = 0;
        subs[i].time = 0;
        for(int k = 0; k < 11; k++){
            subs[i].inc[k] = 0;
        }

        subs[i].solve.clear();
    }

    while(gets(entrada) && entrada[0] != '\0'){
        int id, problem, time;
        char result;
        sscanf(entrada, "%d %d %d %c", &id, &problem, &time, &result);
        subs[id].sub++;
        if(result == 'C'){
            if(subs[id].solve.find(problem) == subs[id].solve.end()){
                subs[id].time += time + 20*subs[id].inc[problem];
                subs[id].solve.insert(problem);
            }

        } else if(result == 'I'){
            subs[id].inc[problem]++;
        }
    }

    sort(subs, subs + 101, comp);

    for(int i = 0; i <= 100; i++){
        if(subs[i].sub != 0){
            cout << subs[i].id << " " << subs[i].solve.size() << " " << subs[i].time << "\n";
        }
    }

    if(n > 0){
        cout << "\n";
    }
}




return 0;
}
