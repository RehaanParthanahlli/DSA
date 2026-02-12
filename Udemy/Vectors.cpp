#include <iostream>
#include <vector>
#include <algorithm> // for sort, reverse, etc.
using namespace std;

int main() {
    // 1. Vector Creation
    vector<int> v1;                          // empty vector
    vector<int> v2(5);                       // size 5, default initialized (0)
    vector<int> v3(5, 10);                   // size 5, all elements = 10
    vector<int> v4 = {1, 2, 3, 4, 5};        // initializer list
    vector<int> v5(v4);                      // copy constructor
    vector<int> v6(v4.begin(), v4.end());    // range constructor

    // 2. Basic Insertions
    v1.push_back(10);    // add element at end
    v1.push_back(20);
    v1.emplace_back(30); // faster than push_back, constructs in place

    // 3. Accessing Elements
    cout << v1[0] << endl;        // direct access (no bounds check)
    cout << v1.at(1) << endl;     // bounds-checked access
    cout << v1.front() << endl;   // first element
    cout << v1.back() << endl;    // last element

    // 4. Iteration
    cout << "Using index: ";
    for (size_t i = 0; i < v1.size(); i++) cout << v1[i] << " ";
    cout << endl;

    cout << "Using iterator: ";
    for (auto it = v1.begin(); it != v1.end(); ++it) cout << *it << " ";
    cout << endl;

    cout << "Using range-based for: ";
    for (int x : v1) cout << x << " ";
    cout << endl;

    // 5. Modification
    v1[0] = 100;                // modify element
    v1.insert(v1.begin() + 1, 200); // insert at position
    v1.erase(v1.begin());       // erase first element
    v1.pop_back();              // remove last element
    v1.clear();                 // remove all elements

    // 6. Capacity Operations
    cout << "Size: " << v4.size() << endl;
    cout << "Capacity: " << v4.capacity() << endl;
    v4.reserve(20);             // reserve capacity
    v4.shrink_to_fit();         // reduce capacity to fit size

    // 7. Algorithms with Vectors
    sort(v4.begin(), v4.end());         // sort ascending
    reverse(v4.begin(), v4.end());      // reverse order
    auto it = find(v4.begin(), v4.end(), 3); // find element
    if (it != v4.end()) cout << "Found 3 at index " << (it - v4.begin()) << endl;

    // 8. Advanced Operations
    vector<vector<int>> matrix(3, vector<int>(3, 0)); // 2D vector
    matrix[1][1] = 5;

    vector<int> v7 = {1, 2, 3, 4, 5};
    // remove all even numbers using erase-remove idiom
    v7.erase(remove_if(v7.begin(), v7.end(),
                       [](int x){ return x % 2 == 0; }),
             v7.end());

    // 9. Swapping and Assigning
    vector<int> a = {1, 2}, b = {3, 4};
    a.swap(b); // swap contents
    a.assign(5, 42); // assign 5 copies of 42

    // 10. Printing final results
    cout << "Vector a: ";
    for (int x : a) cout << x << " ";
    cout << endl;

    cout << "Vector b: ";
    for (int x : b) cout << x << " ";
    cout << endl;

    return 0;
}