﻿//======================================================================================
//  Copyright (c) 2019 SPARK CREATIVE Inc.
//  All rights reserved.
//======================================================================================
#pragma once

//======================================================================================
//
//======================================================================================
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SPCRJointDynamicsRuntimeSettings.h"
#include "SPCRJointDynamicsStaticFunctions.generated.h"

//======================================================================================
//
//======================================================================================
/**
* @class	USPCRJointDynamicsStaticFunctions
* @brief	Blueprintから静的に呼び出し可能なクラス
*/
UCLASS()
class SPCRJOINTDYNAMICS_API USPCRJointDynamicsStaticFunctions : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
public:
	virtual ~USPCRJointDynamicsStaticFunctions();

	//=========================================================================================================
	// PublicMethods
	//=========================================================================================================

private:
	//=========================================================================================================
	// PrivateMethods
	//=========================================================================================================

private:
	//=========================================================================================================
	// PrivateMembers
	//=========================================================================================================
};

//======================================================================================
// EOF
//======================================================================================
