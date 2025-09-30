// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseAI.h"

#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
ABaseAI::ABaseAI()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	Root = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(Root);
	
	Body = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Body"));
	Body->SetupAttachment(Root);
	
	MovementComponent = CreateDefaultSubobject<UCharacterMovementComponent>(TEXT("MovementComponent"));
}

// Called when the game starts or when spawned
void ABaseAI::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseAI::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ABaseAI::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

