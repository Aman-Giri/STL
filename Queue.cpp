#include<iostream>
#include<queue>

using namespace std;
int main(){
    queue<string> q;
    q.push("Aman");
    q.push("Kumar");
    q.push("Giri");

    cout<<"Size before pop"<<q.size()<<endl;
    cout<<"first element"<<q.front()<<endl;
    q.pop();
    cout<<"First element: "<<q.front()<<endl;
    cout<<"size after the pop operation: "<<q.size()<<endl;
}