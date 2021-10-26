// Fill out your copyright notice in the Description page of Project Settings.


#include "MainWidgetBase.h"

#include <string>

FString UMainWidgetBase::FormatTimeText(const int Seconds, const int Minutes, const int Hours)
{
	char CharString[50];
	sprintf_s(CharString, 50, "%02d:%02d:%02d", Hours, Minutes, Seconds);
	return FString(CharString);
}
