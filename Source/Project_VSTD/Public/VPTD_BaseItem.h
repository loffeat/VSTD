// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "VPTD_BaseItem.generated.h"

UCLASS()
class PROJECT_VSTD_API AVPTD_BaseItem : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AVPTD_BaseItem();

	UPROPERTY(BlueprintReadWrite,VisibleAnywhere)
	int32 value_exp;
};