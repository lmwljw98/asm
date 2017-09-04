#include <stdio.h>
#include <string.h>

void func(char* x, int y){

	if (0 < strlen(x)){

		// 글자별로 ascii 코드 확인?
		// 비트쉬프트 등을 이용하여 특정문자만 변환?
		// putchar을 통하여 출력
	}

}


int main(int argc, char* argv[]){

	if (argc == 3){

		//int b = atoi(argv[2]);
		func(argv[1], atoi(argv[2]));

		return 0;
	}

	else{
		printf("Usage %s string", argv[0]);
		return -1;
	}

}


