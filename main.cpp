#include <iostream>

int piramide_left(int* arr, int size, int number, int count){

    if((number * 2) + 1 >= size) return arr[number];
    std::cout << count << " left(" <<  arr[number] << ") " << arr[(number * 2) + 1] << "\n";

    if((number * 2) + 2 >= size) return arr[number];
    std::cout << count << " right(" <<  arr[number] << ") " << arr[(number * 2) + 2] << "\n";

    return piramide_left(arr, size, number + 1, count + 1);
}

void print_pyramid(int* array, int size){//1 3 6 5 9 8 //5

    std::cout << "0 root " << array[0] << "\n";

    piramide_left(array, size, 0, 1);

}


int main() {

    //int array[] = {1, 3, 6, 5, 9, 8};
    int array[] = {94, 67, 18, 44, 55, 12, 6, 42};
    int size = sizeof(array) / sizeof(array[0]);

    print_pyramid(array, size);


    return 0;
}
