#include<iostream>
#include<set>

using namespace std;
int main(){
    set<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(4);
    s.insert(3);
    s.insert(6);

    cout<<"Printing the element of the Set: "<<endl;
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    
    set<int>::iterator it = s.begin();
    it++;
    cout<<"Printing the element of the Set after erase: "<<endl;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"5 is present or not: "<<s.count(5)<<endl;
    
    //auto it = s.find(5);
    set<int>:: iterator itr = s.find(5);
    for(auto i=itr;i!=s.end();i++){
        cout<<*i<<" ";
    }


}