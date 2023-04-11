#include <bits/stdc++.h>
using namespace std;

struct teacher{
    int no;
    string name;
    int age;
    int salary;
    bool known;
    string gender;

    void print(){
        cout<<no<<" "<<age<<" "<<" "<<salary<<" "<<known<<" "<<gender<<endl;
    } 
};
int main(){
    teacher num[2];
    for(int i=0;i<2;i++){
        num[i] = {1,"shreyansh", 20, 1000000, true, "male"};
    }
    

    num[0].print();
    num[1].print();
}