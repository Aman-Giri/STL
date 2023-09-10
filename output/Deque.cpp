#include<iostream>
#include<deque>

using namespace std;
int main(){
    deque<int> d;
    d.push_back(1);
    d.push_back(2);

    cout<<"print first element: "<<d.at(1)<<endl;

    cout<<"front element: "<<d.front()<<endl;
    cout<<"last element: "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    //using the erase function
    cout<<"before using the erase function: "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase" <<d.size()<<endl;

    for(int i:d){
        cout<<i<<" ";
    }
}