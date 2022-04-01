#include <string>
#include <iostream>

std::string lookup_weekday(int day){
    std::string days_of_week[7] =  {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if(day >= 1 && day <= 7){
        std::cout << days_of_week[day-1];
    }
    else{
        std::cout << "invalid day";
    }
    return 0;

}
