#include "Board.h"
#include <EngineCore/Renderer.h>
#include <EngineCore/ConsoleEngine.h>
#include <EngineCore/ConsoleWindow.h>


void Board::BeginPlay()
{
	Super::BeginPlay();

	FIntPoint Size = ConsoleEngine::GetEngine().GetWindow()->GetBackBufferPtr()->GetImageSize();

	Renderer* Render = CreateDefaultSubObject();
	Render->RenderImage.Create(Size, '*');
}

void Board::Tick()
{

}
