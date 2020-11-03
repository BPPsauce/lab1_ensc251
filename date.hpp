//header file date.hpp to declare your class
#include <iostream>
using namespace std;

class Date {
    public:
    Date();
    bool isValid (int input_month, int input_date);//check if the date is valid
    bool isWeekend(int input_month, int input_date);//check if the date is weekend
    bool isHoliday (int input_month, int input_date);// check if the date is holiday
    friend bool equal(Date date1, Date data2);//check if both dates are equal
    void output(int input_month, int input_date);//output the infomation of the input, general info
    void printFreeTimeSlots (int input_month, int input_date, int time_start_hr, int time_start_min, int time_end_hr, int time_end_min);//print out the available time slots of the date
    void printAppointedTimeSlots (int input_month, int input_date, int time_start_hr, int time_start_min, int time_end_hr, int time_end_min);//print out the appointed slots
    void errorprinting(int input_month, int input_date);//function that does error messages handing
    int GetWeekday(int input_month, int input_date);//formula for determining if the date is a weekend
    //set functions
    void setMonth (int);
    void setDate (int);
    void setStartTime_hr(int);
    void setStartTime_min(int);
    void setEndTime_hr(int);
    void setEndTime_min(int);

    //get functions 
    int getMonth ();
    int getDate ();
    int getStartTime_hr();
    int getStartTime_min();
    int getEndTime_hr();
    int getEndTime_min();
    
  private:
  int month;
  int day;
  bool appointed[48];//bool array for appointed time
  int start_hr;
  int start_min;
  int end_hr;
  int end_mins;
  
};