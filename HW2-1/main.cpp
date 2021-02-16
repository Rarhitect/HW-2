//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> v(3);
    cout << "size = " << v.size() << "; capacity = " << v.capacity() << endl;
    for(auto i: v)
    {
        v[i] = 1;
        cout << v[i] << endl;
    }
    v.push_back(1);
    cout << "size = " << v.size() << "; capacity = " << v.capacity() << endl;
    return 0;
}
