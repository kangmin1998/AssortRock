#include "Block.h"
#include <EngineCore/Renderer.h>
#include <conio.h>


void Block::BeginPlay()
{
	Super::BeginPlay();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create({ 1, 1 }, '@');
}


void Block::Tick()
{
	Super::Tick();
	
	FIntPoint BlockPos = GetActorLocation();
	FIntPoint BoardSize = board->GetImageRenderer()->RenderImage.GetImageSize();

	if (BlockPos.Y + 1 >= BoardSize.Y || GetImageRenderer()->RenderImage.GetPixel())
	{
		SetActorLocation({0,0});
		board->GetImageRenderer()->RenderImage.Copy(BlockPos, GetImageRenderer()->RenderImage);
	}
	// void SetActorLocation(FIntPoint _Pos);

	if (count > 3)
	{
		AddActorLocation(FIntPoint::DOWN);
	}
	count++;

	int Value = _kbhit();
	if (Value != 0)
	{
		int Select = _getch();

		switch (Select)
		{
		case 'A':
		case 'a':
			AddActorLocation(FIntPoint::LEFT);
			break;
		case 'D':
		case 'd':
			AddActorLocation(FIntPoint::RIGHT);
			break;
		case 'W':
		case 'w':
			AddActorLocation(FIntPoint::UP);
			break;
		case 'S':
		case 's':
			AddActorLocation(FIntPoint::DOWN);
			break;
		default:
			break;
		}

	}


}

void Block::SetBoardPtr(Board* _board)
{
	board = _board;
}
