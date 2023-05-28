# Greedy Problems

**Número da Lista**: 2<br>
**Conteúdo da Disciplina**: Greed<br>

## Alunos

| Matrícula  | Aluno                        |
| ---------- | ---------------------------- |
| 19/0108011 | Guilherme Brito Vilas - Bôas |
| 19/0102390 | André Macedo Rodrigues Alves |

## Sobre

Questões envolvendo Algoritmos Ambiciosos resolvidas.

## Screenshots

| Problem                   | Judge      | Difficulty | Status      |
| ------------------------- | ---------- | ---------- | ----------- |
| Comparison String - 1837B | Codeforces | --         | Accepted ✅ |

Código: [codefoces/comparisson_strings.cpp](./codeforces/comparison_strings.cpp)

```cpp
void solve() {
    int n;
    string s;
    cin>>n>>s;
    int prev = s[0];
    int cnt = 1;
    int mx = 1;
    for(int i=1; i<n; i++) {
        if(s[i] == prev) {
            cnt++;
        } else {
            mx = max(cnt, mx);
            cnt = 1;
        }
        prev = s[i];
    }
    mx = max(cnt, mx);

    cout<<mx+1<<"\n";
}
```

Link AC: https://codeforces.com/contest/1837/submission/207199438

## Instalação

**Linguagem**: xxxxxx<br>
**Framework**: (caso exista)<br>
Descreva os pré-requisitos para rodar o seu projeto e os comandos necessários.

## Uso

Explique como usar seu projeto caso haja algum passo a passo após o comando de execução.

## Outros

Quaisquer outras informações sobre seu projeto podem ser descritas abaixo.
