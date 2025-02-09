// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Actions/GridAction.h"
#include "GridSystem/GridActor/GridComponents/GridStateComponent.h"
#include "DeployGridAction.generated.h"

UCLASS()
class TBSGAME_API UGridDeployAction : public UGridAction
{
	GENERATED_BODY()
public:
	virtual bool CheckIfValidToInitialize(AGridActor* InGridActor,
		ATBSCharacter* InInstigator,
		const FIntPoint& InInstigatingIndex) const override;
	
	virtual bool CheckIfValidToExecute(const FIntPoint& TargetIndex) const override;

	virtual void Cancel() override;

	virtual void Execute() override;

	virtual bool Initialize(AGridActor* InGridActor, ATBSCharacter* InInstigator,
		const FIntPoint& InInstigatingIndex) override;

	virtual void HandleGridSelect(const FIntPoint& GridIndex) override;
	
	virtual bool IsIndexHoverable(const FIntPoint& Index) const override;

private:
	UFUNCTION()
	void DeployFighter();
	
	UPROPERTY()
	UGridStateComponent* GridStateComponent {nullptr};
	
	FIntPoint SelectedIndex {GridConstants::InvalidIndex};
};


