// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Kismet/KismetSystemLibrary.h"

void UMyBlueprintFunctionLibrary::GiveAvilities(AActor* Target, UAbilitySystemComponent* AbilitySystem, TArray<TSubclassOf<class UGameplayAbility>> Abilities) {

	if (Target != nullptr && AbilitySystem != nullptr) {

		for (int i = 0; i < Abilities.Num(); ++i) {
			if (Abilities[i] != nullptr) {
				UKismetSystemLibrary::PrintString(GEngine->GetWorld(), "hogehoge");
				AbilitySystem->GiveAbility(FGameplayAbilitySpec(Abilities[i], 1, i));
			}
		}

		AbilitySystem->InitAbilityActorInfo(Target, Target);
	}
}
