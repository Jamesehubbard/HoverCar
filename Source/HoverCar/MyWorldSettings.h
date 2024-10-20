// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/WorldSettings.h"
#include "MyWorldSettings.generated.h"

/**
 * 
 */
UCLASS()
class HOVERCAR_API AMyWorldSettings : public AWorldSettings
{
	GENERATED_BODY()
	
public:
	bool Vertical;

	UFUNCTION(BlueprintCallable)
	void ToggleSplitscreen(bool bStatus);
};
