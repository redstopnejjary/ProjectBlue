// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectBlue/ProjectBlueCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectBlueCharacter() {}
// Cross Module References
	PROJECTBLUE_API UClass* Z_Construct_UClass_AProjectBlueCharacter_NoRegister();
	PROJECTBLUE_API UClass* Z_Construct_UClass_AProjectBlueCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectBlue();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void AProjectBlueCharacter::StaticRegisterNativesAProjectBlueCharacter()
	{
	}
	UClass* Z_Construct_UClass_AProjectBlueCharacter_NoRegister()
	{
		return AProjectBlueCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AProjectBlueCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProjectBlueCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectBlue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectBlueCharacter_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ProjectBlueCharacter.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "ProjectBlueCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CursorToWorld_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectBlueCharacter.h" },
		{ "ToolTip", "A decal that projects to the cursor location." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CursorToWorld = { "CursorToWorld", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectBlueCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CursorToWorld_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectBlueCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera above the character" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectBlueCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CameraBoom_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_TopDownCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ProjectBlueCharacter.h" },
		{ "ToolTip", "Top down camera" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_TopDownCameraComponent = { "TopDownCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AProjectBlueCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_TopDownCameraComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_TopDownCameraComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AProjectBlueCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CursorToWorld,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_CameraBoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AProjectBlueCharacter_Statics::NewProp_TopDownCameraComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProjectBlueCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProjectBlueCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProjectBlueCharacter_Statics::ClassParams = {
		&AProjectBlueCharacter::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AProjectBlueCharacter_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_AProjectBlueCharacter_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AProjectBlueCharacter_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProjectBlueCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProjectBlueCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProjectBlueCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectBlueCharacter, 1926667789);
	template<> PROJECTBLUE_API UClass* StaticClass<AProjectBlueCharacter>()
	{
		return AProjectBlueCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectBlueCharacter(Z_Construct_UClass_AProjectBlueCharacter, &AProjectBlueCharacter::StaticClass, TEXT("/Script/ProjectBlue"), TEXT("AProjectBlueCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectBlueCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
