#include <string>
#include <iostream>

std::string lookup_weekday(int day){

    std::string day_or_invalid;
    std::string days_of_week[7] =  {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    if(day >= 1 && day <= 7){
        day_or_invalid = days_of_week[day-1];
    }
    else{
        day_or_invalid = "invalid day";
    }
    return day_or_invalid;
}
