// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class LudwigJam : ModuleRules
{
	public LudwigJam(ReadOnlyTargetRules Target) : base(Target)
	{
		PrivateDependencyModuleNames.AddRange(new string[] { "GlsLang", "DirectXMesh" });
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
