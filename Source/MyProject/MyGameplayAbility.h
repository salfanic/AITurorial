// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "MyGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class MYPROJECT_API UMyGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "GameplayAbility")
		virtual void AddGameplayTags(const FGameplayTagContainer tags);

	UFUNCTION(BlueprintCallable, Category = "GameplayAbility")
		virtual void RemoveGameplayTags(const FGameplayTagContainer tags);
};
