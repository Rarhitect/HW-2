//

#include <iostream>
#include <vector>
#include <stdexcept>
#include <exception>
#include <limits>

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
    
    //Часть 3
    const long int N = 100000000000;
    vector<int> v2(N);
    v2.reserve(N);
    cout << "size = " << v2.size() << "; capacity = " << v2.capacity() << endl;
    for(long int i = 0; i < N; ++i)
    {
        v2[i] = 1;
    }
    try
    {
    v2.push_back(1);
    }
    catch (const runtime_error& err)
    {
        cerr << "Out of memory: " << err.what() << endl;
    }
    cout << "size = " << v2.size() << "; capacity = " << v2.capacity() << endl;
    return 0;
}
