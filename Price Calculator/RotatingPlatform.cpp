// Fill out your copyright notice in the Description page of Project Settings.

#include "RotatingPlatform.h"

// Sets default values
ARotatingPlatform::ARotatingPlatform()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ARotatingPlatform::BeginPlay()
{
	Super::BeginPlay();
	
	StartingLocation = GetActorLocation();
}

// Called every frame
void ARotatingPlatform::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	//Starting Location
	
	MovingPlatform(DeltaTime);
	
	RotatingPlatform(DeltaTime);
	
	ShouldActorMove(DeltaTime);

	
}


void ARotatingPlatform::MovingPlatform(float DeltaTime)
	{
		FVector CurrentLocation = GetActorLocation();

		CurrentLocation = CurrentLocation + (PlatformVelocity * DeltaTime);

		SetActorLocation(CurrentLocation);


		if (ShouldActorMove(DeltaTime))
		{
			FVector MoveDirection = PlatformVelocity.GetSafeNormal();

			StartingLocation = StartingLocation + MoveDirection * MoveDistance;
		
			SetActorLocation(StartingLocation);

			PlatformVelocity = -PlatformVelocity;
		}
	}		

void ARotatingPlatform::RotatingPlatform(float DeltaTime)
{
	FRotator CurrentRotator = GetActorRotation();
	AddActorLocalRotation(RotatingVelocity * DeltaTime);
}

bool ARotatingPlatform::ShouldActorMove(float DeltaTime) const
{
	return DistancedMoved() > MoveDistance;
}

float ARotatingPlatform::DistancedMoved() const
{
	return FVector::Dist(StartingLocation, GetActorLocation());
}
