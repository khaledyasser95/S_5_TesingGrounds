// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TP_ThirdPerson/TP_ThirdPersonCharacter.h"
#include "PatrolGuard.generated.h"

/**
 * 
 */
UCLASS()
class S_5_TESINGGROUNDS_API APatrolGuard : public ATP_ThirdPersonCharacter
{
	GENERATED_BODY()
		UPROPERTY(EditInstanceOnly, Category = "Patrol Route")
		TArray <AActor *> PatrolPointsCpp;
	
	
	
};
