#include<iostream>
#include<vector>

using namespace std;
int main(){
    vector<int> v;
    vector<int> a(5,100);

    //printing vector a:
    for(int i:a){
        cout<<i<<endl;
    }

    cout<<"capacity: " <<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);
    cout<<"Capacity: "<<v.capacity()<<endl;

    cout<<"element at the second index"<<v.at(2)<<endl;

    cout<<"front element in the vector: "<<v.front()<<endl;
    cout<<"Last element in the vector: "<<v.back()<<endl;

    cout<<"element of the vector before pop: "<<endl;
    for(int i : v){
        cout<<i<<" ";
    }

    cout<<endl;

    v.pop_back();
    cout<<"elements in the vector after the pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<"Size before the clear function:  "<<v.size()<<endl;
    v.clear();
    cout<<"size after using the clear function: "<<v.size()<<endl;


}