#include <iostream>
#include <queue>
using namespace std;

int main() {

    queue<int> myqueue;

    myqueue.push(10);
    myqueue.push(20);
    myqueue.push(30);
    myqueue.push(40);

    myqueue.pop();

    cout<<"queue size: "<<myqueue.size()<<endl;
    cout<<"front element: "<<myqueue.front()<<endl;
    cout<<"back element: "<<myqueue.back()<<endl;

    cout<<"is queue empty ? "<<(myqueue.empty() ? "yes" : "No")<<endl;

    cout<<"elements in the queue: ";
    while (!myqueue.empty())
    {
        cout<<myqueue.front() << " ";
        myqueue.pop();
    }
    
}
