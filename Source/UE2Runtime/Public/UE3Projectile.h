

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UE3Projectile.generated.h"

//=============================================================================
// Projectile.
//
// A delayed-hit projectile that moves around for some time after it is created.
//=============================================================================
UCLASS(Abstract)
class UE2RUNTIME_API AUE3Projectile : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AUE3Projectile();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
