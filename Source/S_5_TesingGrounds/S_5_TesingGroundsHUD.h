// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "S_5_TesingGroundsHUD.generated.h"

UCLASS()
class AS_5_TesingGroundsHUD : public AHUD
{
	GENERATED_BODY()

public:
	AS_5_TesingGroundsHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

