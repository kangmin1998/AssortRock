#include <iostream>
#include <string>
#include <string_view>  //c언어 버전 확인. 14버전은 없다.

void Finction0(const std::string& _Test)
{
	// 13바이트의 복사가 일어난다.
	// 
	// 아래와 같이 사용할 수 없다.
	// _Test.size();
	// _Test.size < "DEfaultClass";

}

void Finction1(const std::string_view& _Test)
{
	// 문자열 전체를 복사하지 않는다.
	std::string_view Test0;
	std::string_view Test1;

	//string으로 변환도 가능
	std::string value = Test0.data();


}

int main()
{

	


}


