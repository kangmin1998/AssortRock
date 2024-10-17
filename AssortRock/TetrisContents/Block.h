#pragma once
#include <EngineCore/Actor.h>
#include "Board.h"

class Block : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;
	void SetBoardPtr(Board* _board);

private:
	int count = 0;
	Board* board;

};

