#include<iostream>
#include<queue>

using namespace std;
int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int,vector<int>,greater<int>> mini;
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);
    cout<<"Size of the max heap: "<<maxi.size()<<endl;
    int n = maxi.size();
    cout<<"Printing max heap: "<<endl;
    for(int i=0;i<n;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<"Size of the Max heap after using the pop operation: "<<maxi.size()<<endl;

    mini.push(5);
    mini.push(1);
    mini.push(0);
    mini.push(4);
    mini.push(3);
    mini.push(7);

    int m = mini.size();
    cout<<"Printing mini heap: "<< endl;
    for(int i=0;i<m;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }
    cout<<endl;
    cout<<"Size of the Max heap after using the pop operation: "<<mini.size()<<endl;
    cout<<"Min Heap is empty or not? "<<mini.empty()<<endl;

}