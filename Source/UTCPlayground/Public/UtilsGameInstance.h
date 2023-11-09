// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "UtilsGameInstance.generated.h"

/**
 * 
 */
UCLASS()
class UTCPLAYGROUND_API UUtilsGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "CustomID")
    static FString GenerateCustomID();
};
