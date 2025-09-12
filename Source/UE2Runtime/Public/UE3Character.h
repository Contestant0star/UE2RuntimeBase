

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "UE3Character.generated.h"

UCLASS(Abstract)
class UE2RUNTIME_API AUE3Character : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AUE3Character();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
