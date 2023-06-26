// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "VPTD_AttributeComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnHealthChanged,AActor*,InstigatorActor,UVPTD_AttributeComponent*,OwningComp,float,NewHealth,float,Delta);

//DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnLevelChanged,AActor*,InstigatorActor,UVPTD_AttributeComponent*,OwningComp,float,NewLevel,float,Delta);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnEXPChanged,AActor*,InstigatorActor,UVPTD_AttributeComponent*,OwningComp,int32,Delta);

UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class PROJECT_VSTD_API UVPTD_AttributeComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UVPTD_AttributeComponent();

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="人物属性")
	float Health;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="人物属性")
	float HealthMax;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="人物属性")
	int32 Level;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="人物属性")
	int32 TotalEXP;

	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="人物属性")
	int32 PerLevelEXP;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="人物属性")
	int32 Money;
	
	UFUNCTION(BlueprintCallable)
	static UVPTD_AttributeComponent* GetAttributes(AActor* FromActor);

	UFUNCTION()
	static bool IsActorAlive(AActor* actor);

	UFUNCTION(BlueprintCallable)
	bool IsAlive();

	UFUNCTION(BlueprintCallable)
	bool ApplyChangeHealth(AActor*Instigator,float delta);

	UFUNCTION(BlueprintCallable)
	bool ApplyChangeEXP(AActor* InstigatorActor,int32 Delta);

	UPROPERTY(BlueprintAssignable)
	FOnHealthChanged OnHealthChangedDelegated;

	UPROPERTY(BlueprintAssignable)
	FOnEXPChanged OnExpChangedDelegated;


public:

	/*UFUNCTION(Exec)
	bool AddLevel(AActor* player,int32 delta);*/
};
