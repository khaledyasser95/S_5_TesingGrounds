// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "S_5_TesingGroundsGameMode.h"
#include "S_5_TesingGroundsHUD.h"
#include "S_5_TesingGroundsCharacter.h"
#include "UObject/ConstructorHelpers.h"

AS_5_TesingGroundsGameMode::AS_5_TesingGroundsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AS_5_TesingGroundsHUD::StaticClass();
}
