// Fill out your copyright notice in the Description page of Project Settings.

#include "SphereMaskPractice.h"
#include "MyActor.h"


// Sets default values
AMyActor::AMyActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (nullptr == RootComponent) {
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
	}



	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
	if (nullptr == MeshComponent->GetAttachParent()) {
		MeshComponent->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	}

}

void AMyActor::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);
	MaterialInstanceDynamic = MeshComponent->CreateDynamicMaterialInstance(0, Material);
	MaterialInstanceDynamic->SetScalarParameterValue("IsTranslucent", 1.0);
}

// Called when the game starts or when spawned
void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	
	
	//MaterialInstanceDynamic->GetStaticSwitchParameterValue();
	//MaterialInstanceDynamic->SetVectorParameterValue();
}

// Called every frame
void AMyActor::Tick( float DeltaTime )
{
	Super::Tick( DeltaTime );

}


void AMyActor::SetTranslucent(bool b)
{
	if (b) 
	{
		MaterialInstanceDynamic->SetScalarParameterValue("IsTranslucent", 1.0f);
	}
	else
	{
		MaterialInstanceDynamic->SetScalarParameterValue("IsTranslucent", 0.0f);
	}
}