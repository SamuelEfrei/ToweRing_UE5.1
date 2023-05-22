// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SteamWSRequestUGCDetailsCallbackProxy.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class USteamWSRequestUGCDetailsCallbackProxy;
struct FBPSteamWorkshopID;
struct FBPSteamWorkshopItemDetails;
#ifdef ADVANCEDSTEAMSESSIONS_SteamWSRequestUGCDetailsCallbackProxy_generated_h
#error "SteamWSRequestUGCDetailsCallbackProxy.generated.h already included, missing '#pragma once' in SteamWSRequestUGCDetailsCallbackProxy.h"
#endif
#define ADVANCEDSTEAMSESSIONS_SteamWSRequestUGCDetailsCallbackProxy_generated_h

#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_50_DELEGATE \
struct _Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms \
{ \
	FBPSteamWorkshopItemDetails WorkShopDetails; \
}; \
static inline void FBlueprintWorkshopDetailsDelegate_DelegateWrapper(const FMulticastScriptDelegate& BlueprintWorkshopDetailsDelegate, FBPSteamWorkshopItemDetails const& WorkShopDetails) \
{ \
	_Script_AdvancedSteamSessions_eventBlueprintWorkshopDetailsDelegate_Parms Parms; \
	Parms.WorkShopDetails=WorkShopDetails; \
	BlueprintWorkshopDetailsDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_SPARSE_DATA
#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetWorkshopItemDetails);


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetWorkshopItemDetails);


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_ACCESSORS
#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSteamWSRequestUGCDetailsCallbackProxy(); \
	friend struct Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USteamWSRequestUGCDetailsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), ADVANCEDSTEAMSESSIONS_API) \
	DECLARE_SERIALIZER(USteamWSRequestUGCDetailsCallbackProxy)


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_INCLASS \
private: \
	static void StaticRegisterNativesUSteamWSRequestUGCDetailsCallbackProxy(); \
	friend struct Z_Construct_UClass_USteamWSRequestUGCDetailsCallbackProxy_Statics; \
public: \
	DECLARE_CLASS(USteamWSRequestUGCDetailsCallbackProxy, UOnlineBlueprintCallProxyBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AdvancedSteamSessions"), ADVANCEDSTEAMSESSIONS_API) \
	DECLARE_SERIALIZER(USteamWSRequestUGCDetailsCallbackProxy)


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSTEAMSESSIONS_API USteamWSRequestUGCDetailsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamWSRequestUGCDetailsCallbackProxy) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSTEAMSESSIONS_API, USteamWSRequestUGCDetailsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamWSRequestUGCDetailsCallbackProxy); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSTEAMSESSIONS_API USteamWSRequestUGCDetailsCallbackProxy(USteamWSRequestUGCDetailsCallbackProxy&&); \
	ADVANCEDSTEAMSESSIONS_API USteamWSRequestUGCDetailsCallbackProxy(const USteamWSRequestUGCDetailsCallbackProxy&); \
public: \
	ADVANCEDSTEAMSESSIONS_API virtual ~USteamWSRequestUGCDetailsCallbackProxy();


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	ADVANCEDSTEAMSESSIONS_API USteamWSRequestUGCDetailsCallbackProxy(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADVANCEDSTEAMSESSIONS_API USteamWSRequestUGCDetailsCallbackProxy(USteamWSRequestUGCDetailsCallbackProxy&&); \
	ADVANCEDSTEAMSESSIONS_API USteamWSRequestUGCDetailsCallbackProxy(const USteamWSRequestUGCDetailsCallbackProxy&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(ADVANCEDSTEAMSESSIONS_API, USteamWSRequestUGCDetailsCallbackProxy); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USteamWSRequestUGCDetailsCallbackProxy); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USteamWSRequestUGCDetailsCallbackProxy) \
	ADVANCEDSTEAMSESSIONS_API virtual ~USteamWSRequestUGCDetailsCallbackProxy();


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_52_PROLOG
#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_SPARSE_DATA \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_RPC_WRAPPERS \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_ACCESSORS \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_INCLASS \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_SPARSE_DATA \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_ACCESSORS \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_INCLASS_NO_PURE_DECLS \
	FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h_55_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class SteamWSRequestUGCDetailsCallbackProxy."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ADVANCEDSTEAMSESSIONS_API UClass* StaticClass<class USteamWSRequestUGCDetailsCallbackProxy>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_samue_OneDrive_Documents_Unreal_Projects_ToweRingEOS_test2_Plugins_AdvancedSessions_AdvancedSteamSessions_Source_AdvancedSteamSessions_Classes_SteamWSRequestUGCDetailsCallbackProxy_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
