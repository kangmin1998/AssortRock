#pragma once
#include <EngineCore/Actor.h>
class Board : public AActor
{
public:
	void BeginPlay() override;
	void Tick() override;
};

