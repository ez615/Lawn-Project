#include <iostream>
#include <string>
using namespace std;

int main(){
    int loop, sum = 0;
    string num;

    cin>>loop;
    cin>>num;

    for(int i = 0; i < loop; i++){
        sum += num[i] - '0';
    }

    cout<<sum<<endl;

    return 0;
}