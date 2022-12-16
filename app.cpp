#include<iostream>

using namespace std;

int main(){
    
    bool isTodaySunny = false;
    bool isTodayWeekend = true;

    if(isTodayWeekend && isTodaySunny){
        cout<<"Go to the park";

    }else if(isTodayWeekend && !isTodaySunny){
        cout<<"Go to the park, but bring an umbrella";

    }else{
        cout<<"Go to work";
    }
}