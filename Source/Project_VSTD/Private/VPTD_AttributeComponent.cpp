// Fill out your copyright notice in the Description page of Project Settings.


#include "VPTD_AttributeComponent.h"

#include "VPTD_PaperCharacter.h"


UVPTD_AttributeComponent::UVPTD_AttributeComponent()
{
	PrimaryComponentTick.bCanEverTick = true;

	HealthMax = 100;
	Level = 0;
	Money = 0;

	Health = HealthMax;
}

UVPTD_AttributeComponent* UVPTD_AttributeComponent::GetAttributes(AActor* FromActor)
{
	if(FromActor)
	{
		return Cast<UVPTD_AttributeComponent>(FromActor->GetComponentByClass(UVPTD_AttributeComponent::StaticClass()));
	}

	return nullptr;
}

bool UVPTD_AttributeComponent::IsActorAlive(AActor* actor)
{
	UVPTD_AttributeComponent* AttributeComp = UVPTD_AttributeComponent::GetAttributes(actor);
	if(AttributeComp)
	{
		return AttributeComp->IsAlive();
	}

	return false;
}

bool UVPTD_AttributeComponent::IsAlive()
{
	return Health > 0.0f;
}

bool UVPTD_AttributeComponent::ApplyChangeHealth(AActor* Instigator, float delta)
{
	Health += delta;
	
	if(Health < 0) Health = 0;
	
	OnHealthChangedDelegated.Broadcast(Instigator,nullptr,Health,delta);

	/*//Died
	if(Health <= 0.0f)
	{
		ASGameModeBase* ASGameModeBase = GetWorld()->GetAuthGameMode<class ASGameModeBase>();
		if(ASGameModeBase)
		{
			ASGameModeBase->OnActorKilled(GetOwner(),Instigator);
		}
	}*/
	
	return true;
}

bool UVPTD_AttributeComponent::ApplyChangeEXP(AActor* InstigatorActor,int32 Delta)
{
	TotalEXP += Delta;
	Level = TotalEXP / PerLevelEXP;

	OnExpChangedDelegated.Broadcast(InstigatorActor,nullptr,Delta);

	return true;
}

/*bool UVPTD_AttributeComponent::ApplyChangeLevel(int32 delta)
{
	Level += delta;

	APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
	if (PlayerController != nullptr)
	{
		APawn* DefaultPlayer = PlayerController->GetCharacter();
		if (DefaultPlayer != nullptr)
		{
			
		}
	}

	return true;
}*/


/*bool UVPTD_AttributeComponent::AddLevel(AActor* player, int32 delta)
{
	if(player)
	{
		//ApplyChangeLevel(delta);
	}
	return true;
}*/

