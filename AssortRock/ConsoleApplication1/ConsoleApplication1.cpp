// ConsoleApplication1.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	//  00000000 00000000 00000000 00000001   4바이트
	int value = 1;

	//	Arr[0]	 Arr[1]	  Arr[2]   Arr[3]
	//	100		 101	  102	   103
	//  00000000 00000000 00000000 00000001   4바이트
	char Arr[4] = {0};
	int* TestValuePtr = reinterpret_cast<int*>(Arr);
	*TestValuePtr = value;

	// 위의 내용에
	// 인텔CPU를 가진 컴퓨터에서 만든 데이터를 AMD CPU에 보내면 값이 이상해진다.
	// CPU가 빅에디안 리틀에디안을 쓰는지를 알아야 할 떄가 있다.

}

