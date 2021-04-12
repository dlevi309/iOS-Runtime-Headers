/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)allObjects;
+(id)className;
+(id)primaryKey;
+(id)requiredProperties;
+(id)defaultPropertyValues;
+(id)createOrUpdateInRealm:(id)arg1 withValue:(id)arg2 ;
+(id)createOrUpdateModifiedInRealm:(id)arg1 withValue:(id)arg2 ;
+(id)objectsWhere:(id)arg1 args:(char*)arg2 ;
+(id)objectsWithPredicate:(id)arg1 ;
+(id)objectsInRealm:(id)arg1 where:(id)arg2 args:(char*)arg3 ;
+(id)objectsInRealm:(id)arg1 withPredicate:(id)arg2 ;
+(id)createInDefaultRealmWithValue:(id)arg1 ;
+(id)createInRealm:(id)arg1 withValue:(id)arg2 ;
+(id)createOrUpdateInDefaultRealmWithValue:(id)arg1 ;
+(id)createOrUpdateModifiedInDefaultRealmWithValue:(id)arg1 ;
+(id)allObjectsInRealm:(id)arg1 ;
+(id)objectsWhere:(id)arg1 ;
+(id)objectsInRealm:(id)arg1 where:(id)arg2 ;
+(id)objectForPrimaryKey:(id)arg1 ;
+(id)objectInRealm:(id)arg1 forPrimaryKey:(id)arg2 ;
+(id)indexedProperties;
+(id)linkingObjectsProperties;
+(id)ignoredProperties;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithValue:(id)arg1 ;
-(BOOL)isEqualToObject:(id)arg1 ;
-(id)initWithValue:(id)arg1 schema:(id)arg2 ;
-(id)initWithRealm:(id)arg1 schema:(id)arg2 ;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
@end

