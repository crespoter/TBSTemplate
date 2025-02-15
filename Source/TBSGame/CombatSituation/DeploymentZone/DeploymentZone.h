// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DeploymentZone.generated.h"

class UBoxComponent;

UCLASS()
class TBSGAME_API ADeploymentZone : public AActor
{
	GENERATED_BODY()
	
public:	
	ADeploymentZone();

	void GetDeploymentBounds(FVector2f& OutBottomLeft, FVector2f& OutTopRight) const;

protected:
	UPROPERTY(EditInstanceOnly)
	UBoxComponent* DeploymentArea {nullptr};
};
