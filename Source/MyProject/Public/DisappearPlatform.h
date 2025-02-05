// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DisappearPlatform.generated.h"

UCLASS()
class MYPROJECT_API ADisappearPlatform : public AActor
{
	GENERATED_BODY()
	
public:	

	ADisappearPlatform();

protected:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "DisappearPlatform|Components")
	USceneComponent* SceneRoot;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DisappearPlatform|Components")
	UStaticMeshComponent* StaticMeshComp;
	float isDisappear;
	FVector StartLocation;
	FTimerHandle MyTimer;
	
	//GetWorld();
	//GetTimerManager();
	//SetTimer(� Ÿ�̸Ӹ� ����� ��, ����� Ŭ����, ������ �Լ�,  �ݺ� �ֱ�(00.0f), �ݺ�����(T or F), ���� ���� �� ��� �ð�);
	//GetWorldTimerManager().SetTimer(isMoveTimer, this, &AMyActor::ChangeMove, 2, true);									

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void SpawnActor();
	void Disappear();
};
