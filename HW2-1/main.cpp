//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    //Часть 1
    vector<int> v(3);
    cout << "size = " << v.size() << "; capacity = " << v.capacity() << endl;
    for(auto i: v)
    {
        v[i] = 1;
        cout << v[i] << endl;
    }
    v.push_back(1);
    cout << "size = " << v.size() << "; capacity = " << v.capacity() << endl;
    
    //Часть 2
    vector<int> v1(3);
    v1.reserve(5);
    cout << "size = " << v1.size() << "; capacity = " << v1.capacity() << endl;
    for(auto i: v1)
    {
        v1[i] = 1;
        cout << v1[i] << endl;
    }
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(1);
    cout << "size = " << v1.size() << "; capacity = " << v1.capacity() << endl;
    return 0;
}
