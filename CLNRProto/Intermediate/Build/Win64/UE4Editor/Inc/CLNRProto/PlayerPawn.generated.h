// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CLNRPROTO_PlayerPawn_generated_h
#error "PlayerPawn.generated.h already included, missing '#pragma once' in PlayerPawn.h"
#endif
#define CLNRPROTO_PlayerPawn_generated_h

#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_RPC_WRAPPERS
#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS
#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend CLNRPROTO_API class UClass* Z_Construct_UClass_APlayerPawn(); \
	public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CLNRProto"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_INCLASS \
	private: \
	static void StaticRegisterNativesAPlayerPawn(); \
	friend CLNRPROTO_API class UClass* Z_Construct_UClass_APlayerPawn(); \
	public: \
	DECLARE_CLASS(APlayerPawn, APawn, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/CLNRProto"), NO_API) \
	DECLARE_SERIALIZER(APlayerPawn) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerPawn(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerPawn) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public:


#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerPawn(APlayerPawn&&); \
	NO_API APlayerPawn(const APlayerPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerPawn); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerPawn)


#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_PRIVATE_PROPERTY_OFFSET
#define CLNRProto_Source_CLNRProto_PlayerPawn_h_8_PROLOG
#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_RPC_WRAPPERS \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_INCLASS \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define CLNRProto_Source_CLNRProto_PlayerPawn_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_PRIVATE_PROPERTY_OFFSET \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_INCLASS_NO_PURE_DECLS \
	CLNRProto_Source_CLNRProto_PlayerPawn_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID CLNRProto_Source_CLNRProto_PlayerPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
