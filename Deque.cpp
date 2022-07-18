#include <iostream>
#include <deque>

using namespace std;

int main()
{

    deque<int> d;
    d.push_back(2);
    d.push_front(1);
    cout << d.back() << endl;
    cout << d.front() << endl;
    for (int i : d)
    {
        cout << i << endl;
    }
    // d.pop_front();
    // for (int i : d)
    // {
    //     cout << i << endl;
    // }
    // d.pop_back();
    // for (int i : d)
    // {
    //     cout << i << endl;
    // }
    cout << "before Erasing" << " " << d.size() << endl;
    d.erase(d.begin(), d.end()-1);
    cout <<"After Erasing" << " " << d.size() << endl;
    for(int i : d){
        cout << i << endl;
    }
    return 0;
}