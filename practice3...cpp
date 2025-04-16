#include <iostream>

template<typename T>
class parent {
public:
    T Add(T a, T b) {
        return a + b;
    }
};

class child : public parent<int> {
public:
    int Add(int a, int b) {
        int c = parent<int>::Add(5, 10);
        return c + 20;
    }
};

int main() {
    parent<int>* ptr;
    child obj;
    ptr = &obj;
    std::cout << "Result: " << ptr->Add(1, 2) << std::endl;
    return 0;
}