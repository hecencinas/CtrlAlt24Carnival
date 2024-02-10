// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class CtrlAlt24Carnival : ModuleRules
{
	public CtrlAlt24Carnival(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
