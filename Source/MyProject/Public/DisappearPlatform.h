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
	//SetTimer(어떤 타이머를 사용할 지, 사용할 클래스, 실행할 함수,  반복 주기(00.0f), 반복여부(T or F), 최초 실행 시 대기 시간);
	//GetWorldTimerManager().SetTimer(isMoveTimer, this, &AMyActor::ChangeMove, 2, true);									

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	void SpawnActor();
	void Disappear();
};
