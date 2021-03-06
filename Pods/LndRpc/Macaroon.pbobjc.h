// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: Macaroon.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class Op;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MacaroonRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MacaroonRoot : GPBRootObject
@end

#pragma mark - MacaroonId

typedef GPB_ENUM(MacaroonId_FieldNumber) {
  MacaroonId_FieldNumber_Nonce = 1,
  MacaroonId_FieldNumber_StorageId = 2,
  MacaroonId_FieldNumber_OpsArray = 3,
};

@interface MacaroonId : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSData *nonce;

@property(nonatomic, readwrite, copy, null_resettable) NSData *storageId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<Op*> *opsArray;
/** The number of items in @c opsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger opsArray_Count;

@end

#pragma mark - Op

typedef GPB_ENUM(Op_FieldNumber) {
  Op_FieldNumber_Entity = 1,
  Op_FieldNumber_ActionsArray = 2,
};

@interface Op : GPBMessage

@property(nonatomic, readwrite, copy, null_resettable) NSString *entity;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<NSString*> *actionsArray;
/** The number of items in @c actionsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger actionsArray_Count;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)
