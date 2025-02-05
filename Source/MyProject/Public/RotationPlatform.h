// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RotationPlatform.generated.h"

UCLASS()
class MYPROJECT_API ARotationPlatform : public AActor
{
	GENERATED_BODY()
	
public:	

	ARotationPlatform();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "RotationPlatform|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RotationPlatform|Components")
	UStaticMeshComponent* StaticMeshComp;
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "RotationPlatform|Properties")
	float RotationSpeed;

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
