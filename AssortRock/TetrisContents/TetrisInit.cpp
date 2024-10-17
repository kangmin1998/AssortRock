#include "TetrisInit.h"
#include <EngineCore/ConsoleEngine.h>
#include <EngineCore/ConsoleWindow.h>

#include "Block.h"
#include "Board.h"

void TetrisInit::UserBeginPlay(ConsoleEngine* _MainEngine)
{
	// ������ �մϴ�.
	_MainEngine->GetWindow()->SetScreenSize({3, 5});
	Board* newBoard = _MainEngine->SpawnActor<Board>();
	Block* newBlock = _MainEngine->SpawnActor<Block>();
	newBlock->SetBoardPtr(newBoard);
}