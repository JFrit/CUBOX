// Copyright Epic Games, Inc. All Rights Reserved.

#include "LudwigJamGameMode.h"
#include "LudwigJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALudwigJamGameMode::ALudwigJamGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != nullptr)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
