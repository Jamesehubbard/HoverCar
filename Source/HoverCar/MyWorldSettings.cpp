// Fill out your copyright notice in the Description page of Project Settings.


#include "MyWorldSettings.h"
#include <GameMapsSettings.h>

void AMyWorldSettings::ToggleSplitscreen(bool bStatus)
{
	auto Settings = const_cast<UGameMapsSettings*>(GetDefault<UGameMapsSettings>());
	if (Vertical)
	{
		Settings->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Vertical;
	}
	else {
		Settings->TwoPlayerSplitscreenLayout = ETwoPlayerSplitScreenType::Horizontal;
	}

    //UGameUserSettings* UserSettings = GEngine->GetGameUserSettings();

    //if (UserSettings)
    //{
    //     
    //    //ETwoPlayerSplitScreenType SplitScreenType = bVertical ? ETwoPlayerSplitScreenType::Vertical : ETwoPlayerSplitScreenType::Horizontal;

    //    //// Assuming you are working with 2-player split screen
    //    //GEngine->GameViewport->SetForceDisableSplitscreen(false); // Ensure split screen is enabled
    //    //GEngine->GameViewport->SetActiveSplitscreenType(SplitScreenType);

    //    //// Notify the user settings to apply the changes
    //    //UserSettings->ApplySettings(false);
    //}
}
