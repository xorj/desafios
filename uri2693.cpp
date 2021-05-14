#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


struct aluno{
    string nome;
    int custo;
    char regiao;
};


bool comp(aluno a, aluno b){
    if(a.custo == b.custo){
        if(a.regiao == b.regiao){
            return a.nome < b.nome;
        } else {
            return a.regiao < b.regiao;
        }
    } else {
        return a.custo < b.custo;
    }
}

int main() {
int n;
while(scanf("%d", &n) == 1){
vector<aluno> alunos;
while(n--){
    string nome;
    char regiao;
    int custo;
    cin >> nome >> regiao >> custo;
    aluno a;
    a.nome = nome;
    a.regiao = regiao;
    a.custo = custo;
    alunos.push_back(a);
}

sort(alunos.begin(), alunos.end(), comp);

for(auto i : alunos){
    cout << i.nome << "\n";
}
}

return 0;
}
