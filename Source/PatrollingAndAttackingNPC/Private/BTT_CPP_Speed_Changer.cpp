// Fill out your copyright notice in the Description page of Project Settings.


#include "BTT_CPP_Speed_Changer.h"
#include "AIController.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "GameFramework/Character.h"

UBTT_CPP_Speed_Changer::UBTT_CPP_Speed_Changer()
{
	NodeName = "Change Movement Speed";

	MovementSpeed = 300.f;
}

EBTNodeResult::Type UBTT_CPP_Speed_Changer::ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory)
{
	AAIController* AIController = OwnerComp.GetAIOwner();
	if (AIController)
	{
		ACharacter* Character = Cast<ACharacter>(AIController->GetPawn());
		if (Character)
		{
			// Zmiana prêdkoœci
			Character->GetCharacterMovement()->MaxWalkSpeed = MovementSpeed;

			// Finish z sukcesem
			return EBTNodeResult::Succeeded;
		}
	}

	// Finish z porazka
	return EBTNodeResult::Failed;


}

