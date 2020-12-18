// Fill out your copyright notice in the Description page of Project Settings.

#include "DiceRoll.h"

int UDiceRoll::RollD6(int numDice)
{
	int total = 0;

	for (int i = 0; i < numDice; i++)
	{
		total += FMath::RandRange(1, 6);
	}

	return total;
}

int UDiceRoll::RollD8(int numDice)
{
	int total = 0;

	for (int i = 0; i < numDice; i++)
	{
		total += FMath::RandRange(1, 8);
	}

	return total;
}

int UDiceRoll::RollD10(int numDice)
{
	int total = 0;

	for (int i = 0; i < numDice; i++)
	{
		total += FMath::RandRange(1, 12);
	}

	return total;
}

int UDiceRoll::RollD12(int numDice)
{
	int total = 0;

	for (int i = 0; i < numDice; i++)
	{
		total += FMath::RandRange(1, 12);
	}

	return total;
}

int UDiceRoll::RollD20(int numDice)
{
	int total = 0;

	for (int i = 0; i < numDice; i++)
	{
		total += FMath::RandRange(1, 20);
	}

	return total;
}

bool UDiceRoll::RollD20vDC(int difficultyClass, int diceModifier, int numDice)
{ 
	if (RollD20(numDice) + diceModifier >= difficultyClass)
		return true;	
	else	
		return false;	
}
