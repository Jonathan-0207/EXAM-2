#include <iostream>

int* create_ints(int num_vals){
    int int_array[num_vals];

    for(int i=0; i<num_vals; i++){
        int_array[i] = i;
    }
    return int_array;
}


void display_array(int *vals, int num_vals){
    for(int i=0; i<num_vals; i++){
        std::cout << *(vals + i) << " ";
    }
    std::cout << std::endl;

}
