#include <vector>
#include "algobot.h"

using namespace std;


bool pertenece(vector<int> s, int e){
    for (int i=0; i<s.size(); i++){
        if (s[i]==e){
            return true;
        }
    }
    return false;
}
// Ejercicio 1
vector<int> quitar_repetidos(vector<int> s) {
    vector<int> unique {};
    for(int i=0; i<s.size(); i++) {
        if (not(pertenece(unique, s[i]))) {
            unique.push_back(s[i]);
        }
    }
    return unique;
}

// Ejercicio 2
vector<int> quitar_repetidos_v2(vector<int> s) {
    set <int> cs;
    for (int i=0; i< s.size(); i++){
        cs.insert(s[i]);
    }
    vector<int> res = {};
    for (int x : cs){
        res.push_back(x);
    }
    return res;
}

// Ejercicio 3
bool mismos_elementos(vector<int> a, vector<int> b) {
    set <int> ca;
    set <int> cb;
    for (int i=0; i< a.size(); i++){
        ca.insert(a[i]);
    }
    for (int i=0; i< b.size(); i++){
        cb.insert(b[i]);
    }
    if (ca==cb){
        return true;
    }
    return false;
}

// Ejercicio 4
bool mismos_elementos_v2(vector<int> a, vector<int> b) {
    set <int> ca;
    set <int> cb;
    for (int i=0; i< a.size(); i++){
        ca.insert(a[i]);
    }
    for (int i=0; i< b.size(); i++){
        cb.insert(b[i]);
    }
    if (ca==cb){
        return true;
    }
    return false;
}

// Ejercicio 5
map<int, int> contar_apariciones(vector<int> s) {
    vector <int> cs = quitar_repetidos(s);
    map<int, int> res;
    for(int i = 0; i<cs.size();i++){
        res[cs[i]] = 0;
    }
    for (int i = 0; i<s.size();i++){
        res[s[i]]++;
    }
    return res;
}


// Ejercicio 6
vector<int> filtrar_repetidos(vector<int> s) {
    vector<int> res;
    map<int,int> dict = contar_apariciones(s);
    for(pair <int,int> p:dict){
        if(p.second == 1){
            res.push_back(p.first);
        }
    }
    return res;
}

// Ejercicio 7
set<int> interseccion(set<int> a, set<int> b) {
    return set<int>();
}

// Ejercicio 8
map<int, set<int>> agrupar_por_unidades(vector<int> s) {
    return map<int, set<int>>();
}

// Ejercicio 9
vector<char> traducir(vector<pair<char, char>> tr, vector<char> str) {
    return vector<char>();
}

// Ejercicio 10
bool integrantes_repetidos(vector<Mail> s) {
    return true;
}

// Ejercicio 11
map<set<LU>, Mail> entregas_finales(vector<Mail> s) {
  return map<set<LU>, Mail>();
}
