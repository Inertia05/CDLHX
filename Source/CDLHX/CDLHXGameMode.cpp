// Copyright Epic Games, Inc. All Rights Reserved.

#include "CDLHXGameMode.h"
#include "CDLHXCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACDLHXGameMode::ACDLHXGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
