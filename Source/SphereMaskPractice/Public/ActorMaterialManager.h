// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Actor.h"
#include "ActorMaterialManager.generated.h"
class UMaterialParameterCollection;
UCLASS()
class SPHEREMASKPRACTICE_API AActorMaterialManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AActorMaterialManager();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
	
	// Called every frame
	virtual void Tick( float DeltaSeconds ) override;
public:
	UPROPERTY(EditAnywhere)
	TArray<AActor*> ActorList;
	UPROPERTY(EditAnywhere)
	UMaterialParameterCollection* MaterialCollection;
};
