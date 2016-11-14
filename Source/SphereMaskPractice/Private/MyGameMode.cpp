// Fill out your copyright notice in the Description page of Project Settings.

#include "SphereMaskPractice.h"
#include "MyGameMode.h"
#include "MyPlayerController.h"



AMyGameMode::AMyGameMode() 
{
	this->PlayerControllerClass = AMyPlayerController::StaticClass();
}