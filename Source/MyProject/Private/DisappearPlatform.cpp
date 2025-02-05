#include "DisappearPlatform.h"
#include "Components/SphereComponent.h"
#include "Particles/ParticleSystemComponent.h"

ADisappearPlatform::ADisappearPlatform()
{
	SceneRoot = CreateDefaultSubobject<USceneComponent>(TEXT("SceneRoot"));
	SetRootComponent(SceneRoot);
	StaticMeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMesh"));
	StaticMeshComp->SetupAttachment(SceneRoot);

	PrimaryActorTick.bCanEverTick = true;
	isDisappear = 1.0f;
}

void ADisappearPlatform::BeginPlay()
{
	Super::BeginPlay();
	StartLocation = GetActorLocation();
	FTimerHandle isspawnTimer;
	GetWorldTimerManager().SetTimer(isspawnTimer, this, &ADisappearPlatform::Disappear, 2, true);
}

void ADisappearPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	SpawnActor();
}

void ADisappearPlatform::SpawnActor()
{
	if (isDisappear < 0.0f)
	{
		SetActorLocation(StartLocation);
	}
	else if (isDisappear > 0.0f)
	{
		SetActorLocation(FVector(300.0f, 200.0f, 100.0f));
	}
}

void ADisappearPlatform::Disappear()
{
	isDisappear *= -1;
}