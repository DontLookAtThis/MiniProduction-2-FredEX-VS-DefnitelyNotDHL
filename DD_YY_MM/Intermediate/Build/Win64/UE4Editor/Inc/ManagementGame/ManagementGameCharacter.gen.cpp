// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ManagementGameCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeManagementGameCharacter() {}
// Cross Module References
	MANAGEMENTGAME_API UClass* Z_Construct_UClass_AManagementGameCharacter_NoRegister();
	MANAGEMENTGAME_API UClass* Z_Construct_UClass_AManagementGameCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ManagementGame();
// End Cross Module References
	void AManagementGameCharacter::StaticRegisterNativesAManagementGameCharacter()
	{
	}
	UClass* Z_Construct_UClass_AManagementGameCharacter_NoRegister()
	{
		return AManagementGameCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AManagementGameCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_ManagementGame,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ManagementGameCharacter.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "ManagementGameCharacter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AManagementGameCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AManagementGameCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AManagementGameCharacter, 2925862042);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AManagementGameCharacter(Z_Construct_UClass_AManagementGameCharacter, &AManagementGameCharacter::StaticClass, TEXT("/Script/ManagementGame"), TEXT("AManagementGameCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AManagementGameCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
