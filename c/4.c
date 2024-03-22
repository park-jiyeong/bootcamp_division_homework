/*
    main 함수 안의 내용만 수정해주세요.
    수정할 경우, 자동 채점 프로그램이 제대로 동작하지 않을 가능성이 있습니다.
*/

#include <stdio.h>

int main() {
    // 이곳에 코드를 작성해주세요!
    int score;
    scanf("%d", &score);
 
    if(score>=90){
        printf("A\n");
    }
    else if(score>=80&&score<90){
        printf("B\n"); 
    }
    else if(score>=70 && score<80){
        printf("C\n");
    }
    else if(score>=60&&score<70){
        printf("D\n");
    }
    else if(score<60) {
        printf("F\n");
    }
    
    return 0;
}