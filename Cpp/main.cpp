#include <iostream>


int main(){
    int *x  = new int[1000];
    {
        int y;
        int *z = new int[1000];
        delete[] z;

    }

    delete [] x;


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

