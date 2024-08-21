// Fill out your copyright notice in the Description page of Project Settings.


#include "MyActor.h"
#include <GameMapsSettings.h>
//#include <GameMapsSettings.generated.h>

// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	Vertical = true;
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();
	auto Settings = const_cast<UGameMapsSettings*>(GetDefault<UGameMapsSettings>());
	if (Vertical)
	{
		Settings->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Vertical;
	}
	else {
		Settings->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Horizontal;
	}
}

// Called every frame
void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	/*auto Settings = const_cast<UGameMapsSettings*>(GetDefault<UGameMapsSettings>());

	Settings->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Vertical;*/
	

}

