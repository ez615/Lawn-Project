#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    int a, b;

    cin>>a>>b;

    string str_a = to_string(a), str_b = to_string(b);

    reverse(str_a.begin(), str_a.end());
    reverse(str_b.begin(), str_b.end());

    int rev_a = stoi(str_a), rev_b = stoi(str_b);
    int ans = (rev_a > rev_b) ? rev_a : rev_b;

    printf("%d", ans);
}