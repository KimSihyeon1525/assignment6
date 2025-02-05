// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MovePlatform.generated.h"

UCLASS()
class MYPROJECT_API AMovePlatform : public AActor
{
	GENERATED_BODY()
	
public:	

	AMovePlatform();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovePlatform|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovePlatform|Components")
	UStaticMeshComponent* StaticMeshComp;

	FVector StartLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovePlatform|Properties")
	FVector MoveDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovePlatform|Properties")
	float MoveSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovePlatform|Properties")
	float MaxRange;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
};
	//UCLASS()
	//	class MYPROJECT_API AMovePlatform : public AActor
	//{
	//	GENERATED_BODY()

	//public:

	//	AMovePlatform();

	//protected:

	//	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "MovePlatform|Components")
	//	USceneComponent* SceneRoot;
	//	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MovePlatform|Components")
	//	UStaticMeshComponent* StaticMeshComp;

	//	//FVector StartLocation;

	//	//FVector MoveDirection;
	//	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MovePlatform|Properties")
	//	float MoveSpeed;
	//	//UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "MovePlatform|Properties")
	//	float MaxRange;

	//	virtual void BeginPlay() override;
	//	virtual void Tick(float DeltaTime) override;
	//};