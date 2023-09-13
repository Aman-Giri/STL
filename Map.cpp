#include<iostream>
#include<map>

using namespace std;
int main(){
    map<int,string> m;
    m[1]="Aman Giri";
    m[13]="Karan Sanwal";
    m[2]="love babbar";

    m.insert({5,"Sunny Yadav"});

    cout<<"Printing m before using the erase function: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }

    cout<<"Finding the 13->"<<m.count(13)<<endl;

    m.erase(13);
    cout<<"Printing m after using the erase function: "<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    //map<int,string>::iterator itr = m.find(2);
    auto it = m.find(2);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<" "<<(*i).second<<endl;
    }
}