// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Character/Enemy/EnemyCharacter.h"
#include "EnemyPanchi.generated.h"

/**
 * 
 */
UCLASS()
class DEMO_API AEnemyPanchi : public AEnemyCharacter
{
	GENERATED_BODY()
	
public:
	AEnemyPanchi(const class FObjectInitializer& ObjectInitializer);

	/*
	 * Visitor
	 */
	void Accept(VisitorPtr Visitor) override;
	virtual void DefaultAttack() override;
protected:
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;
	
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void OnConstruction(const FTransform& Transform) override;


private:
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Combat", meta = (AllowPrivateAccess = "true"))
	//class UWidgetComponent* HealthBarWidget;
	
};
