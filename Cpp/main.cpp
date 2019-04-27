#include <iostream>

class problematicClass{
private:
    int age;
    float *grades;
public:
    problematicClass();
    ~problematicClass();
};

problematicClass::problematicClass(){
    grades = new float[1000];
}

problematicClass::~problematicClass() {
    delete[] grades;
}

int main(){
    problematicClass *c1 = new problematicClass();
//    delete c1;

//    std::cout<< 1 << std::endl;

//    int b = 1;
//    int k = 2;
//    int result = b + k;

    return 0;
}















//          MEMLEAK Z STRUKTURĄ
//struct problematicStructure{
//    int indexNumber;
//    float *grades = new float[1000];
//};
//
//
//int main() {
//
//    problematicStructure *s1 = new problematicStructure();
//    delete[] s1->grades;
//    delete s1;
//    return 0;
//}




//          MEMLEAK Z ZAKRESEM
//int main() {
//    int *x = new int[1000];
//    {
//        int y;
//        int *z = new int[1000];
//        delete [] z;
//    }

//        delete [] z;
//    delete [] x;
//    return 0;
//}






//           MEMLEAK Z TABLICĄ
//void problematic_function();
//
//int main() {
//    problematic_function();
//    return 0;
//}
//
//void problematic_function(){
//    for(int i = 0 ;i < 10000;i++)
//    {
//        int * ptr = new int[1000];
//        delete[] ptr;
//    }
//}


//          MEMLEAK Z WSKAZNIKIEM
//void problematic_function();
//
//int main() {
//    problematic_function();
//    return 0;
//}
//
//void problematic_function(){
//    int *data = new int;
//    *data = 15;
////    delete data;
//}

