#include <iostream>

class Foo{
    public:
        void bar(){
            for(int i = 0 ; i < 100000 ; i++){
                int *p = new int[1000];
                delete[] p;            
            }
        }
};

extern "C" {
    Foo* Foo_new(){ return new Foo(); }
    void Foo_bar(Foo* foo){ foo->bar(); }
}
