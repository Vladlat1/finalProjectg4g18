// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "finalProjectg4g18/finalProjectg4g18GameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodefinalProjectg4g18GameModeBase() {}
// Cross Module References
	FINALPROJECTG4G18_API UClass* Z_Construct_UClass_AfinalProjectg4g18GameModeBase_NoRegister();
	FINALPROJECTG4G18_API UClass* Z_Construct_UClass_AfinalProjectg4g18GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_finalProjectg4g18();
// End Cross Module References
	void AfinalProjectg4g18GameModeBase::StaticRegisterNativesAfinalProjectg4g18GameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AfinalProjectg4g18GameModeBase_NoRegister()
	{
		return AfinalProjectg4g18GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_finalProjectg4g18,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "finalProjectg4g18GameModeBase.h" },
		{ "ModuleRelativePath", "finalProjectg4g18GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AfinalProjectg4g18GameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::ClassParams = {
		&AfinalProjectg4g18GameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AfinalProjectg4g18GameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AfinalProjectg4g18GameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AfinalProjectg4g18GameModeBase, 1241285843);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AfinalProjectg4g18GameModeBase(Z_Construct_UClass_AfinalProjectg4g18GameModeBase, &AfinalProjectg4g18GameModeBase::StaticClass, TEXT("/Script/finalProjectg4g18"), TEXT("AfinalProjectg4g18GameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AfinalProjectg4g18GameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
