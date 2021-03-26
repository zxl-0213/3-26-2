#include<iostream>
using namespace std;

int Month(int year,int month)
{
    int MonthDay[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    
    if((year%4==0&&year%100!=0)||(year%400==0))
    {
        MonthDay[2]=29;
    }
    return MonthDay[month];
}

 int main()
 {
     int year=0;
     int day=0;
     
     while(cin>>year>>day)
     {    
         int month=1;
         while(day>Month(year,month))
         {
             day-=Month(year,month);
             month++;
             
         }
         printf("%04d-%02d-%02d\n",year, month,day);
     }
     return 0;
     
 }