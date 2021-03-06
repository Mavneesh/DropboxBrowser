///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBSHARINGGetSharedLinkMetadataArg;

#pragma mark - API Object

///
/// The `GetSharedLinkMetadataArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBSHARINGGetSharedLinkMetadataArg : NSObject <DBSerializable>

#pragma mark - Instance fields

/// URL of the shared link.
@property (nonatomic, readonly, copy) NSString * _Nonnull url;

/// If the shared link is to a folder, this parameter can be used to retrieve
/// the metadata for a specific file or sub-folder in this folder. A relative
/// path should be used.
@property (nonatomic, readonly) NSString * _Nullable path;

/// If the shared link has a password, this parameter can be used.
@property (nonatomic, readonly) NSString * _Nullable linkPassword;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param url URL of the shared link.
/// @param path If the shared link is to a folder, this parameter can be used to
/// retrieve the metadata for a specific file or sub-folder in this folder. A
/// relative path should be used.
/// @param linkPassword If the shared link has a password, this parameter can be
/// used.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url
                               path:(NSString * _Nullable)path
                       linkPassword:(NSString * _Nullable)linkPassword;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param url URL of the shared link.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithUrl:(NSString * _Nonnull)url;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GetSharedLinkMetadataArg` struct.
///
@interface DBSHARINGGetSharedLinkMetadataArgSerializer : NSObject

///
/// Serializes `DBSHARINGGetSharedLinkMetadataArg` instances.
///
/// @param instance An instance of the `DBSHARINGGetSharedLinkMetadataArg` API
/// object.
///
/// @return A json-compatible dictionary representation of the
/// `DBSHARINGGetSharedLinkMetadataArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBSHARINGGetSharedLinkMetadataArg * _Nonnull)instance;

///
/// Deserializes `DBSHARINGGetSharedLinkMetadataArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBSHARINGGetSharedLinkMetadataArg` API object.
///
/// @return An instantiation of the `DBSHARINGGetSharedLinkMetadataArg` object.
///
+ (DBSHARINGGetSharedLinkMetadataArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
