// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PackageMigrationContext.h"
#include "GameFramework/Actor.h"
#include "RotatingPlatform.generated.h"

UCLASS()
class RISEGUYS_API ARotatingPlatform : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARotatingPlatform();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;


private:
	UPROPERTY(EditAnywhere, Category="Moving")
	FVector PlatformVelocity = FVector(0, 0, 0);

	UPROPERTY(EditAnywhere, Category="Moving")
	float MoveDistance;
	
	UPROPERTY(VisibleAnywhere, Category="Moving")
	float DistanceMoved; 

	UPROPERTY(VisibleAnywhere, Category="Moving")
	FVector StartingLocation;

	UPROPERTY(EditAnywhere, Category="Rotating")
	FRotator RotatingVelocity;
	
	void MovingPlatform(float DeltaTime);

	void RotatingPlatform(float DeltaTime);
	
	bool ShouldActorMove(float DeltaTime) const;

	float DistancedMoved() const;
};
