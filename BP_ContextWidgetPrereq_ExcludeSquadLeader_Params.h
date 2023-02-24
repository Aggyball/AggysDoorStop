﻿#pragma once

/**
 * Name: Operation__Harsh_Doorstop
 * Version: 1
 */

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace CG
{
	// --------------------------------------------------
	// # Structs
	// --------------------------------------------------
	/**
	 * Function BP_ContextWidgetPrereq_ExcludeSquadLeader.BP_ContextWidgetPrereq_ExcludeSquadLeader_C.IsValidContext
	 */
	struct UBP_ContextWidgetPrereq_ExcludeSquadLeader_C_IsValidContext_Params
	{
	public:
		bool                                                       bValidData;                                              // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ContextWidgetPrereq_ExcludeSquadLeader.BP_ContextWidgetPrereq_ExcludeSquadLeader_C.SatisfiesPrerequisite
	 */
	struct UBP_ContextWidgetPrereq_ExcludeSquadLeader_C_SatisfiesPrerequisite_Params
	{
	public:
		bool                                                       ReturnValue;                                             // 0x0000(0x0001)  (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	};

	/**
	 * Function BP_ContextWidgetPrereq_ExcludeSquadLeader.BP_ContextWidgetPrereq_ExcludeSquadLeader_C.SetupContext
	 */
	struct UBP_ContextWidgetPrereq_ExcludeSquadLeader_C_SetupContext_Params
	{
	public:
		class AHDSquadState*                                       InMemberSQState;                                         // 0x0000(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
		class AHDPlayerState*                                      InMemberPSToTest;                                        // 0x0008(0x0008)  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
