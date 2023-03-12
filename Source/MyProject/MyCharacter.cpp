// Fill out your copyright notice in the Description page of Project Settings.


#include "MyCharacter.h"
#include "AbilitySystemComponent.h"
#include "MyBlueprintFunctionLibrary.h"

// Sets default values
AMyCharacter::AMyCharacter():Super()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	AbilitySystem = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("AbilitySystem"));
}

// Called when the game starts or when spawned
void AMyCharacter::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AMyCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AMyCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

UAbilitySystemComponent* AMyCharacter::GetAbilitySystemComponent() const {
	return this->AbilitySystem;
}


void AMyCharacter::PossessedBy(AController* NewController) {
	Super::PossessedBy(NewController);

	if (AbilitySystem != nullptr) {
		AbilitySystem->RefreshAbilityActorInfo();
	}
}
