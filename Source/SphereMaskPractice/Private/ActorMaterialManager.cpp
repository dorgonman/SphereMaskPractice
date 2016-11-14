// Fill out your copyright notice in the Description page of Project Settings.

#include "SphereMaskPractice.h"
#include "ActorMaterialManager.h"
#include "Runtime/Engine/Classes/Kismet/KismetMaterialLibrary.h"

// Sets default values
AActorMaterialManager::AActorMaterialManager()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;


	//UKismetMaterialLibrary::SetScalarParameterValue(GetWorld(), MyParameterCollection, SomeName, 0.5f);
}

// Called when the game starts or when spawned
void AActorMaterialManager::BeginPlay()
{
	Super::BeginPlay();

	//for (auto& actor : ActorList) 
	//{
	//	if (actor) {
	//		auto componentList = actor->GetComponentsByClass(UStaticMeshComponent::StaticClass());
	//		for (auto& component : componentList)
	//		{
	//			auto meshComponent = Cast<UStaticMeshComponent>(component);
	//			//meshComponent->SetMaterial(0, nullptr);
	//		}
	//	}

	//}
	//
}

// Called every frame
void AActorMaterialManager::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}

