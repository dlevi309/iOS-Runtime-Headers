/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/MTLModel.h>
@class NSDictionary;


@protocol MTLModel <NSObject,NSCopying>
@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@required
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2;
-(BOOL)validate:(id*)arg1;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2;
-(NSDictionary *)dictionaryValue;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2;

@end


@class NSDictionary, NSString;

@interface MTLModel : NSObject <NSCoding, MTLModel>

@property (nonatomic,copy,readonly) NSDictionary * dictionaryValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(void)enumeratePropertiesUsingBlock:(/*^block*/id)arg1 ;
+(unsigned long long)modelVersion;
+(id)propertyKeys;
+(id)modelWithDictionary:(id)arg1 error:(id*)arg2 ;
+(id)allowedSecureCodingClassesByPropertyKey;
+(id)permanentPropertyKeys;
+(id)transitoryPropertyKeys;
+(void)generateAndCacheStorageBehaviors;
+(unsigned long long)storageBehaviorForPropertyWithKey:(id)arg1 ;
+(id)encodingBehaviorsByPropertyKey;
+(id)dictionaryValueFromArchivedExternalRepresentation:(id)arg1 version:(unsigned long long)arg2 ;
-(BOOL)validate:(id*)arg1 ;
-(id)initWithDictionary:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(unsigned long long)hash;
-(NSDictionary *)dictionaryValue;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)mergeValueForKey:(id)arg1 fromModel:(id)arg2 ;
-(void)mergeValuesForKeysFromModel:(id)arg1 ;
-(id)decodeValueForKey:(id)arg1 withCoder:(id)arg2 modelVersion:(unsigned long long)arg3 ;
@end

