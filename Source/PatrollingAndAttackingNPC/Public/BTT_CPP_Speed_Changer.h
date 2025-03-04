// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/Tasks/BTTask_BlackboardBase.h"
#include "BehaviorTree/BlackboardComponent.h"
#include "BTT_CPP_Speed_Changer.generated.h"

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class PATROLLINGANDATTACKINGNPC_API UBTT_CPP_Speed_Changer : public UBTTask_BlackboardBase
{
	GENERATED_BODY()

	public:
		// UBTT_CPP_Speed_Changer(FObjectInitializer const& ObjectInitializer);
		UBTT_CPP_Speed_Changer();
		virtual EBTNodeResult::Type ExecuteTask(UBehaviorTreeComponent& OwnerComp, uint8* NodeMemory) override;
	private:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI", meta = (AllowPrivateAccess="true"))
		float MovementSpeed;
};
