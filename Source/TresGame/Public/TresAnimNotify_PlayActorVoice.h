// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "TresActorVoice.h"
#include "TresAnimNotify_PlayActorVoice.generated.h"

/**
 * 
 */

UCLASS()
class TRESGAME_API UTresAnimNotify_PlayActorVoice : public UAnimNotify
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "TresAnimNotify_PlayActorVoice")
	class UTresActorVoice* m_ActorVoice;
};
