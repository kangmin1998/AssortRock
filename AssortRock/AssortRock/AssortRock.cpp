// 075_StaticEx.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

class Skill
{

};

// 주체가 누구인가를 파악해라. => 누가 누구를 알아야 한다고 생각하는가?
// 주체의 개수를 파악해라.

class Monster
{
public:
    // 일반 맴버변수는 객체당 개별적입니다.
    int MonsterHp;

public:
    void Damage();
};

class Player
{
public:
    Player()
    {
        // 플레이어는 결국 만들어진다.
        // 대부분의 플레이어는 1개 만들어진다.
        MainPlayer = this;
    }

    static Player* GetPlayer()
    {
        // this->PlayerHp
        // static 함수안에서는 
        // this가 없습니다.
        // this가 없습니다. => 
        return MainPlayer;
    }

    // 일반 맴버함수의 첫번째 인자.
    void Damage(/*Player* const this*/)
    {
        // this->PlayerHp;
        /*NewPlayer.*/
    }

public:
    // 클래스가 아무리 많이 객체화 되어도
    // static은 1개 만들어 집니다. 데이터 영역에
    // static으로 값공유를 하거나.
    // static인 객체를 만들고 
    static Player* MainPlayer;

    // 플레이어 
    int PlayerHp;
};

class NPC
{
public:
};

int main()
{
    // 컨텐츠를 만들면서 가장 많이 접하게 되는 상황은 다음과 같다.
    // 총알 몬스터 플레이어 NPC 상점 건물 장애물

    // 장애물이 몬스터를 알아야 해요.
    // 컨텐츠 간의 객체들이 어떻게 관계를 맺어야 하는가? 

    // 객체를 만들고
    // 몬스터는 100마리
    // 플레이어는 1마리라고 하겠습니다.
    Monster NewMonster[100];
    // 객체를 만들지 않으면 Hp도 안생기는 겁니다.
    // NewMonster.MonsterHp;

    Player::GetPlayer();

    Player NewPlayer;
    NewPlayer.Damage(/*&NewPlayer*/);

}

void Monster::Damage()
{
    // 플레이어의 Hp를 
    Player::MainPlayer->PlayerHp;
}


// Player
Player* Player::MainPlayer = nullptr;