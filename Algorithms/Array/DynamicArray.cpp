#include <iostream>

int main() {
    //http://www.cplusplus.com/reference/vector/vector/
    // 1. initialize
    vector<int> v0;
    vector<int> v1(5, 0);
    cout << "[Version 1] The contents of v1 are:";
    for (int i = 0; i < v1.size(); ++i) {
        cout << " " << v1[i];
    }
    cout << endl;
    // 2. make a copy
    vector<int> v2(v1.begin(), v1.end());
    vector<int> v3(v2);
    // 2. cast an array to a vector
    int a[5] = {0, 1, 2, 3, 4};
    vector<int> v4(a, *(&a + 1));
    // 3. get length
    cout << "The size of v4 is: " << v4.size() << endl;
    // 4. access element
    cout << "The first element in v4 is: " << v4[0] << endl;
    // 5. iterate the vector
    cout << "[Version 1] The contents of v4 are:";
    for (int i = 0; i < v4.size(); ++i) {
        cout << " " << v4[i];
    }
    cout << endl;
    cout << "[Version 2] The contents of v4 are:";
    for (int& item : v4) {
        cout << " " << item;
    }
    cout << endl;
    cout << "[Version 3] The contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        cout << " " << *item;
    }
    cout << endl;
    // 6. modify element
    v4[0] = 5;
    cout << "Now v4[0] is:" << v4[0] <<endl;
    // 7. sort
    sort(v4.begin(), v4.end());
    cout << "[Version 3] After sort the contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        cout << " " << *item;
    }
    cout << endl;
    // 8. add new element at the end of the vector
    v4.push_back(-1);
    cout << "[Version 3] After push_back(-1) the contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        cout << " " << *item;
    }
    cout << endl;
    // 9. delete the last element
    v4.pop_back();
    cout << "[Version 3] After pop_back() the contents of v4 are:";
    for (auto item = v4.begin(); item != v4.end(); ++item) {
        cout << " " << *item;
    }
    cout << endl;
}