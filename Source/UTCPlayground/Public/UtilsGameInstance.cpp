// Fill out your copyright notice in the Description page of Project Settings.


#include "UtilsGameInstance.h"
#include "Kismet/KismetMathLibrary.h"

FString UUtilsGameInstance::GenerateCustomID()
{
    FString CustomID = "";

    for (int32 i = 0; i < 4; i++)
    {
        for (int32 j = 0; j < 5; j++)
        {
            int32 RandomNumber = UKismetMathLibrary::RandomIntegerInRange(0, 35);
            FString Char = FString::Printf(TEXT("%c"), (RandomNumber < 10) ? ('0' + RandomNumber) : ('A' + RandomNumber - 10));
            CustomID += Char;
        }

        if (i < 3)
        {
            CustomID += "-";
        }
    }

    return CustomID;
}

