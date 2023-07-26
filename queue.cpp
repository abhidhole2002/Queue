#include <iostream>
#include <queue>
using namespace std;


int main() 
{
    
    queue<int> one;

    one.push(10);
    one.push(20);
    one.push(30);
    one.push(40);
    one.push(50);

    cout<<"Front element: "<<one.front()<<std::endl;
    cout<<"Back element: "<<one.back()<<std::endl;

    if (one.empty())
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        cout<<"Queue is not empty"<<endl;
    }
    
    
    cout<<"Queue size: "<<one.size()<<std::endl;

    cout<<"Queue elements: ";
    while (!one.empty())
    {
        cout<<one.front()<<" ";
        one.pop();
    }

}
