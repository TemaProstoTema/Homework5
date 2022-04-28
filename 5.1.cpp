#include <iostream>

double* givememorytoarr(double* startPtr, int sizeofarr);
void fillarr(double* ptrArr, int sizeofarr);
void showarr(double* ptrArr, int sizeofarr);
double* freememory(double* ptrArr);

double* givememorytoarr(double* startPtr, int sizeofarr){
    startPtr = new double[sizeofarr];
    return startPtr;
}

void fillarr(double* ptrArr, int sizeofarr){
    for (int i = 0; i < sizeofarr; i++){
        ptrArr[i] = (i + 1) * 0.2;
    }
}

void showarr(double* ptrArr, int sizeofarr){
    for (int i = 0; i < sizeofarr; i++){
        std::cout << ptrArr[i] << " ";
    }
    std::cout << std::endl;
}

double* freememory(double* ptrArr){
    delete[] ptrArr;
    ptrArr = nullptr;
    return ptrArr;
}

int main(){
    double* arrforfill = nullptr;
    char ch = 0;
    do{
        int sizeofarr = 0;
        std::cout << "Введите размер массива: ";
        std::cin >> sizeofarr;
        arrforfill = givememorytoarr(arrforfill, sizeofarr);
        fillarr(arrforfill, sizeofarr);
        showarr(arrforfill, sizeofarr);
        arrforfill = freememory(arrforfill);
        std::cout << "Выбор действия\n";
        std::cout << "1.Продолжить\n";
        std::cout << "2.Закончить\n";
        std::cin >> ch;
    } while (ch != '0');
    return 0;
}