#include <bits/stdc++.h>
#include <algorithm>
#include <string>

using namespace std;

int main() {

string nome, op, vencedor;
int maxSize = 0;

set<string> q, nq;
string teste("FIM"), entrada;

while(getline(cin, entrada) && entrada.compare(teste) != 0){

nome = "", op = "";
int i = 0;
while(entrada[i] != ' '){
    nome += entrada[i];
    i++;
}
i++;
while(i < entrada.length()){
    op += entrada[i];
    i++;
}
entrada = "";

if(op.compare("YES") == 0 && op.compare("") != 0){
    q.insert(nome);
    if(nome.length() > maxSize){
        vencedor = nome;
        maxSize = nome.length();
    }
} else if(op.compare("") != 0) {
    nq.insert(nome);
}

}

for(auto i : q){
    cout << i << "\n";
}
for(auto i  : nq){
    cout << i << "\n";
}

cout << "\nAmigo do Habay:\n";
cout << vencedor << "\n";




return 0;
}
