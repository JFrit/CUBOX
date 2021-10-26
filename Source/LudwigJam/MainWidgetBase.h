// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainWidgetBase.generated.h"

/**
 * 
 */
UCLASS()
class LUDWIGJAM_API UMainWidgetBase : public UUserWidget
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable)
	static FString FormatTimeText(int Seconds, int Minutes, int Hours);
};
