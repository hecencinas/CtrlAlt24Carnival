// Copyright Epic Games, Inc. All Rights Reserved.

#include "CtrlAlt24CarnivalGameMode.h"
#include "CtrlAlt24CarnivalCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACtrlAlt24CarnivalGameMode::ACtrlAlt24CarnivalGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
