// Fill out your copyright notice in the Description page of Project Settings.
using System.IO;
using UnrealBuildTool;

public class UTCPlayground : ModuleRules
{
	public UTCPlayground(ReadOnlyTargetRules Target) : base(Target)
	{
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

        PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });

        PrivateDependencyModuleNames.AddRange(new string[] { });

        PublicDependencyModuleNames.AddRange(new string[] {
            "OnlineSubsystem",
            "OnlineSubsystemUtils"
        });
    }
}
