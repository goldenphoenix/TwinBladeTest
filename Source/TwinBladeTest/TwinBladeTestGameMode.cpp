// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TwinBladeTestGameMode.h"
#include "TwinBladeTestPlayerController.h"
#include "TwinBladeTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATwinBladeTestGameMode::ATwinBladeTestGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ATwinBladeTestPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}