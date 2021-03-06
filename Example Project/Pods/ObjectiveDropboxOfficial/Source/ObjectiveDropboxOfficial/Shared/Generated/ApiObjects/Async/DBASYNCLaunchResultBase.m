///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import "DBASYNCLaunchResultBase.h"
#import "DBStoneSerializers.h"
#import "DBStoneValidators.h"

#pragma mark - API Object

@implementation DBASYNCLaunchResultBase

@synthesize asyncJobId = _asyncJobId;

#pragma mark - Constructors

- (instancetype)initWithAsyncJobId:(NSString *)asyncJobId {
  self = [super init];
  if (self) {
    _tag = DBASYNCLaunchResultBaseAsyncJobId;
    _asyncJobId = asyncJobId;
  }
  return self;
}

#pragma mark - Instance field accessors

- (NSString *)asyncJobId {
  if (![self isAsyncJobId]) {
    [NSException raise:@"IllegalStateException"
                format:@"Invalid tag: required DBASYNCLaunchResultBaseAsyncJobId, but was %@.", [self tagName]];
  }
  return _asyncJobId;
}

#pragma mark - Tag state methods

- (BOOL)isAsyncJobId {
  return _tag == DBASYNCLaunchResultBaseAsyncJobId;
}

- (NSString *)tagName {
  switch (_tag) {
  case DBASYNCLaunchResultBaseAsyncJobId:
    return @"DBASYNCLaunchResultBaseAsyncJobId";
  }

  @throw([NSException exceptionWithName:@"InvalidTag" reason:@"Tag has an unknown value." userInfo:nil]);
}

#pragma mark - Serialization methods

+ (NSDictionary *)serialize:(id)instance {
  return [DBASYNCLaunchResultBaseSerializer serialize:instance];
}

+ (id)deserialize:(NSDictionary *)dict {
  return [DBASYNCLaunchResultBaseSerializer deserialize:dict];
}

#pragma mark - Description method

- (NSString *)description {
  return [[DBASYNCLaunchResultBaseSerializer serialize:self] description];
}

@end

#pragma mark - Serializer Object

@implementation DBASYNCLaunchResultBaseSerializer

+ (NSDictionary *)serialize:(DBASYNCLaunchResultBase *)valueObj {
  NSMutableDictionary *jsonDict = [[NSMutableDictionary alloc] init];

  if ([valueObj isAsyncJobId]) {
    jsonDict[@"async_job_id"] = valueObj.asyncJobId;
    jsonDict[@".tag"] = @"async_job_id";
  } else {
    @throw([NSException exceptionWithName:@"InvalidTag"
                                   reason:@"Object not properly initialized. Tag has an unknown value."
                                 userInfo:nil]);
  }

  return jsonDict;
}

+ (DBASYNCLaunchResultBase *)deserialize:(NSDictionary *)valueDict {
  NSString *tag = valueDict[@".tag"];

  if ([tag isEqualToString:@"async_job_id"]) {
    NSString *asyncJobId = valueDict[@"async_job_id"];
    return [[DBASYNCLaunchResultBase alloc] initWithAsyncJobId:asyncJobId];
  }

  @throw([NSException
      exceptionWithName:@"InvalidTag"
                 reason:[NSString stringWithFormat:@"Tag has an invalid value: \"%@\".", valueDict[@".tag"]]
               userInfo:nil]);
}

@end
