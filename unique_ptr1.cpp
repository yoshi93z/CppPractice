#include <iostream>
#include <memory>

class IntArray {
    private:
        std::unique_ptr<int> ptr;
    public:
        IntArray(int val_):ptr(new int(val_)){}
        int getvalue() const {return *ptr;}
};

int main()
{
    IntArray mia(10);

    IntArray mia2(std::move(mia));
    
    return 0;
}