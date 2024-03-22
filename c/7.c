/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

 int daysInMonth(int year, int month) {
    if (month == 4 || month == 6 || month == 9 || month == 11)
        return 30;
    else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
            return 29;
        else
            return 28; 
    } else
        return 31;
}
int main() { 
    // 이곳에 코드를 작성해주세요!
    
    int year, month;
    
    scanf("%d", &year);
    scanf("%d", &month);
    
    int days = daysInMonth(year, month);
    
   printf("%d\n", days);
    
    return 0;
}