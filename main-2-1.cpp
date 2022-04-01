#include <iostream>
extern std::string lookup_weekday(int day);

int main(){
    for(int i=0; i<16; i++){
        std::cout << lookup_weekday(i);
        std::cout << std::endl;
    }


}
