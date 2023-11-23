// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ReactPlatform.h"
#include<Components/PointLightComponent.h>
#include "ReactiveLamp.generated.h"
/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ONESHOT_FPS_API UReactiveLamp : public UReactPlatform
{
	GENERATED_BODY()
	virtual void ActivateCollision(AActor* Button, bool IsCollide) override;
	virtual void BeginPlay() override;

private:
	UPointLightComponent* GetPointLightComponent() const;
	//float InitialLightBrightness;
};
