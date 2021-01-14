/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObjectBase.h>
#import <libobjc.A.dylib/RLMThreadConfined.h>

@class RLMRealm, RLMObjectSchema, NSString;

@interface RLMObject : RLMObjectBase <RLMThreadConfined>

@property (nonatomic,readonly) RLMRealm * realm; 
@property (nonatomic,readonly) RLMObjectSchema * objectSchema; 
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryKey;
+(id)className;
+(id)defaultPropertyValues;
+(id)allObjects;
+(id)objectsWhere:(id)arg1 ;
+(id)objectsWithPredicate:(id)arg1 ;
+(id)requiredProperties;
+(id)objectsWhere:(id)arg1 args:(char*)arg2 ;
+(id)createOrUpdateInRealm:(id)arg1 withValue:(id)arg2 ;
+(id)createOrUpdateModifiedInRealm:(id)arg1 withValue:(id)arg2 ;
+(id)objectsInRealm:(id)arg1 where:(id)arg2 args:(char*)arg3 ;
+(id)objectsInRealm:(id)arg1 withPredicate:(id)arg2 ;
+(id)createInDefaultRealmWithValue:(id)arg1 ;
+(id)createInRealm:(id)arg1 withValue:(id)arg2 ;
+(id)createOrUpdateInDefaultRealmWithValue:(id)arg1 ;
+(id)createOrUpdateModifiedInDefaultRealmWithValue:(id)arg1 ;
+(id)allObjectsInRealm:(id)arg1 ;
+(id)objectsInRealm:(id)arg1 where:(id)arg2 ;
+(id)objectForPrimaryKey:(id)arg1 ;
+(id)objectInRealm:(id)arg1 forPrimaryKey:(id)arg2 ;
+(id)indexedProperties;
+(id)linkingObjectsProperties;
+(id)ignoredProperties;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
-(id)init;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithValue:(id)arg1 ;
-(id)initWithValue:(id)arg1 schema:(id)arg2 ;
-(id)initWithRealm:(id)arg1 schema:(id)arg2 ;
@end

