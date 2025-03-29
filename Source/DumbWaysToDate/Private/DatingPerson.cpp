// Fill out your copyright notice in the Description page of Project Settings.

#include "DatingPerson.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"  // If you're using BoxComponent as the trigger

// Sets default values for this component's properties
UDatingPerson::UDatingPerson()
{
    PrimaryComponentTick.bCanEverTick = true;

    // Set initial values
    FVector test = FVector(500.0f, 0.0f, 0.0f); // End point
    GetOwner()->SetActorLocation(test);
    UE_LOG(LogTemp, Warning, TEXT("Your message here"));

    //PointA = GetOwner()->GetActorLocation();
    //PointB = FVector(500.0f, 0.0f, 0.0f); // End point
    //float Speed = 200.0f;                       // Movement speed
    //IsMoving = true;                    // Flag to indicate if moving should start
}

// Called when the game starts
void UDatingPerson::BeginPlay()
{
    Super::BeginPlay();
}

// Custom event that starts the movement
void UDatingPerson::StartMovement()
{
    IsMoving = true;  // Start moving when triggered
}

// Called every frame
void UDatingPerson::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    //if (!IsMoving) return;  // Do nothing if movement hasn't started yet

    //// Get current location
    //FVector CurrentLocation = GetOwner()->GetActorLocation();


    //// Move toward the target
    //FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, PointB, DeltaTime, Speed);
    //GetOwner()->SetActorLocation(NewLocation);
    UE_LOG(LogTemp, Warning, TEXT("Your message here"));
}
