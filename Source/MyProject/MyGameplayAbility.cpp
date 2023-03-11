// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameplayAbility.h"
#include "AbilitySystemComponent.h"
#include "GameplayTagContainer.h"

void UMyGameplayAbility::AddGameplayTags(const FGameplayTagContainer tags) {
	UAbilitySystemComponent* comp = GetAbilitySystemComponentFromActorInfo();
	if (comp != nullptr) {
		comp->AddLooseGameplayTags(tags);
	}
}

void UMyGameplayAbility::RemoveGameplayTags(const FGameplayTagContainer tags) {
	UAbilitySystemComponent* comp = GetAbilitySystemComponentFromActorInfo();
	if (comp != nullptr) {
		comp->RemoveLooseGameplayTags(tags);
	}
}
