/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    int num;
    int num1, num2, num3;

    scanf("%d", &num);
    num1 = num/100; //4
    num2 = (num%100)/10; //9
    num3 = ((num%100)%10); //2
    
    printf("%d", num3); 
    printf("%d", num2);
    printf("%d", num1);
    

    // 이곳에 코드를 작성해주세요!

    return 0;
}