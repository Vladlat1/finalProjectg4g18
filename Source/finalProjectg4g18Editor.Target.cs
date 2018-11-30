// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class finalProjectg4g18EditorTarget : TargetRules
{
	public finalProjectg4g18EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;

		ExtraModuleNames.AddRange( new string[] { "finalProjectg4g18" } );
	}
}
