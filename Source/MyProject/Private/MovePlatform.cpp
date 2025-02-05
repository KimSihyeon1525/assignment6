// Fill out your copyright notice in the Description page of Project Settings.
#include "MovePlatform.h"

// Sets default values
AMovePlatform::AMovePlatform()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	PrimaryActorTick.bCanEverTick = true;
	MoveSpeed = 2700.0f;
	MaxRange = 900.0f;
	MoveDirection = FVector(1.0f, 0.0f, 0.0f);
}

void AMovePlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
}

void AMovePlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	FVector CurrentLocation = GetActorLocation();
	float Distance = FVector::Dist(StartLocation, CurrentLocation);

	if (Distance >= MaxRange)
	{
		MoveDirection *= -1;
		StartLocation = GetActorLocation();
	}

	FVector NewLocation = CurrentLocation + (MoveDirection * MoveSpeed * DeltaTime);
	SetActorLocation(NewLocation);
}

//AMovePlatform::AMovePlatform()
//{
//	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
//	SetRootComponent(SceneRoot);
//
//	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
//	StaticMeshComp->SetupAttachment(SceneRoot);
//
//	PrimaryActorTick.bCanEverTick = true;
//	MoveSpeed = 90.0f;
//	MaxRange = 900.0f;
//
//}
//
//void AMovePlatform::BeginPlay()
//{
//	Super::BeginPlay();
//	FVector StartLocation = GetActorLocation();
//}
//
//void AMovePlatform::Tick(float DeltaTime)
//{
//
//	Super::Tick(DeltaTime);
//	FVector CurrentLocation = GetActorLocation();
//	FVector MoveDirection = FVector(1.0f, 0.0f, 0.0f);
//	FVector NewLocation = CurrentLocation + (MoveDirection * MoveSpeed * DeltaTime);
//	SetActorLocation(NewLocation);
//}