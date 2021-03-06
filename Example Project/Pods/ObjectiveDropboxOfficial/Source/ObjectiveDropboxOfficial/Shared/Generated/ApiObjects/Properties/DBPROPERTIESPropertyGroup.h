///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBPROPERTIESPropertyField;
@class DBPROPERTIESPropertyGroup;

#pragma mark - API Object

///
/// The `PropertyGroup` struct.
///
/// Collection of custom properties in filled property templates.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBPROPERTIESPropertyGroup : NSObject <DBSerializable>

#pragma mark - Instance fields

/// A unique identifier for a property template type.
@property (nonatomic, readonly, copy) NSString * _Nonnull templateId;

/// This is a list of custom properties associated with a file. There can be up
/// to 32 properties for a template.
@property (nonatomic, readonly) NSArray<DBPROPERTIESPropertyField *> * _Nonnull fields;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param templateId A unique identifier for a property template type.
/// @param fields This is a list of custom properties associated with a file.
/// There can be up to 32 properties for a template.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithTemplateId:(NSString * _Nonnull)templateId
                                    fields:(NSArray<DBPROPERTIESPropertyField *> * _Nonnull)fields;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `PropertyGroup` struct.
///
@interface DBPROPERTIESPropertyGroupSerializer : NSObject

///
/// Serializes `DBPROPERTIESPropertyGroup` instances.
///
/// @param instance An instance of the `DBPROPERTIESPropertyGroup` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBPROPERTIESPropertyGroup` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBPROPERTIESPropertyGroup * _Nonnull)instance;

///
/// Deserializes `DBPROPERTIESPropertyGroup` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBPROPERTIESPropertyGroup` API object.
///
/// @return An instantiation of the `DBPROPERTIESPropertyGroup` object.
///
+ (DBPROPERTIESPropertyGroup * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
