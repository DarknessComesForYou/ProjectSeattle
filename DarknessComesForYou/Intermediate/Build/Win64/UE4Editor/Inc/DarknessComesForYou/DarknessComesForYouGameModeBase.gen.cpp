// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "DarknessComesForYouGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDarknessComesForYouGameModeBase() {}
// Cross Module References
	DARKNESSCOMESFORYOU_API UClass* Z_Construct_UClass_ADarknessComesForYouGameModeBase_NoRegister();
	DARKNESSCOMESFORYOU_API UClass* Z_Construct_UClass_ADarknessComesForYouGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DarknessComesForYou();
// End Cross Module References
	void ADarknessComesForYouGameModeBase::StaticRegisterNativesADarknessComesForYouGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADarknessComesForYouGameModeBase_NoRegister()
	{
		return ADarknessComesForYouGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_ADarknessComesForYouGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_DarknessComesForYou,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "DarknessComesForYouGameModeBase.h" },
				{ "ModuleRelativePath", "DarknessComesForYouGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<ADarknessComesForYouGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&ADarknessComesForYouGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
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
	IMPLEMENT_CLASS(ADarknessComesForYouGameModeBase, 1081208063);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADarknessComesForYouGameModeBase(Z_Construct_UClass_ADarknessComesForYouGameModeBase, &ADarknessComesForYouGameModeBase::StaticClass, TEXT("/Script/DarknessComesForYou"), TEXT("ADarknessComesForYouGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADarknessComesForYouGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
