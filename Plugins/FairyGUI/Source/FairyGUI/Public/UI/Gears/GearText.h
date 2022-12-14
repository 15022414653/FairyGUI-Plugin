/*
**	Copyright (c) 2022-2030 CityColor
**	All rights reserved.
**	@ Date : 2022/08/01
*/
#pragma once

#include "GearBase.h"

class FAIRYGUI_API FGearText : public FGearBase
{
public:
    FGearText(UGObject* InOwner);
    virtual ~FGearText();

    virtual void Apply() override;
    virtual void UpdateState() override;

protected:
    virtual void AddStatus(const FString& PageID, FByteBuffer* Buffer) override;
    virtual void Init() override;

private:
    TMap<FString, FString> Storage;
    FString Default;
};