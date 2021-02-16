//

#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <forward_list>
#include <deque>
#include <chrono>

using namespace std;

int main()
{
    vector<int> v = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    array<int, 10> a = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    list<int> l = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    forward_list<int> fl = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    deque<int> d = {3, 4, 1, 2, 7, 21, 33, 17, 56, 35};
    
    auto begin1 = std::chrono::steady_clock::now();
    std::sort(v.begin(), v.end());
    auto end1 = std::chrono::steady_clock::now();
    auto elapsed1 = std::chrono::duration_cast<std::chrono::nanoseconds>(end1 - begin1);
    std::cout << "Time for vector: " << elapsed1.count() << " ns" << std::endl;
    
    auto begin2 = std::chrono::steady_clock::now();
    std::sort(a.begin(), a.end());
    auto end2 = std::chrono::steady_clock::now();
    auto elapsed2 = std::chrono::duration_cast<std::chrono::nanoseconds>(end2 - begin2);
    std::cout << "Time for array: " << elapsed2.count() << " ns" << std::endl;
    
//    auto begin3 = std::chrono::steady_clock::now();
//    std::sort(l.begin(), l.end());
//    auto end3 = std::chrono::steady_clock::now();
//    auto elapsed3 = std::chrono::duration_cast<std::chrono::nanoseconds>(end3 - begin3);
//    std::cout << "Time for list: " << elapsed3.count() << " ns" << std::endl;

//    auto begin4 = std::chrono::steady_clock::now();
//    std::sort(fl.begin(), fl.end());
//    auto end4 = std::chrono::steady_clock::now();
//    auto elapsed4 = std::chrono::duration_cast<std::chrono::nanoseconds>(end4 - begin4);
//    std::cout << "Time for forwar list: " << elapsed4.count() << " ns" << std::endl;
    
    auto begin5 = std::chrono::steady_clock::now();
    std::sort(d.begin(), d.end());
    auto end5 = std::chrono::steady_clock::now();
    auto elapsed5 = std::chrono::duration_cast<std::chrono::nanoseconds>(end5 - begin5);
    std::cout << "Time for deque: " << elapsed5.count() << " ns" << std::endl;
    
    return 0;
}
