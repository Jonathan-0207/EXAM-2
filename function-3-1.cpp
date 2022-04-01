#include <iostream>

void dangerous_values(double vals[],double threshold, int length){
    for(int order=0; order < length; order++){
        if(vals[order] > threshold){
            std::cout << order << ":" << vals[order];
            if(order != length){
                std::cout << " ";
            }
        }
    }
    std::cout << std::endl;
}
