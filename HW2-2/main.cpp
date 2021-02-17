//

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <chrono>

using namespace std;

template<typename T>
void std_sort_time(T object)
{
    auto begin = std::chrono::steady_clock::now();
    std::sort(object.begin(), object.end());
    auto end = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    std::cout << "std::sort time: " << elapsed.count() << " ns" << std::endl;
};

template<typename T>
void native_sort_time(T object)
{
    auto begin = std::chrono::steady_clock::now();
    object.sort();
    auto end = std::chrono::steady_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    std::cout << "native sort time: " << elapsed.count() << " ns" << std::endl;
}

int main()
{
    vector<int> v = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    array<int, 10> a = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    list<int> l = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    forward_list<int> fl = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    deque<int> d = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    
    cout << "Vector - ";
    std_sort_time(v);
    
    cout << "Array - ";
    std_sort_time(a);
    
    cout << "List - ";
    native_sort_time(l);
    
    cout << "Forward list - ";
    native_sort_time(fl);
    
    cout << "Deque - ";
    std_sort_time(d);
    
    return 0;
}
