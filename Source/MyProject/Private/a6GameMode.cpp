// Fill out your copyright notice in the Description page of Project Settings.


#include "a6GameMode.h"
#include "MyCharacter.h"
#include "MyPlayerController.h"

Aa6GameMode::Aa6GameMode()
{
	DefaultPawnClass = AMyCharacter::StaticClass();
	PlayerControllerClass = AMyPlayerController::StaticClass();
}
