// Fill out your copyright notice in the Description page of Project Settings.

#include "MoveGameMode.h"
#include "Move.h"

AMoveGameMode::AMoveGameMode(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void AMoveGameMode::StartPlay()
{
    Super::StartPlay();

    StartMatch();

    if (GEngine)
    {
        //GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("Spider"));
    }
}
