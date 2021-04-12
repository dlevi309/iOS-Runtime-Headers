/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/RLMThreadConfined.h>
#import <libobjc.A.dylib/RLMThreadConfined_Private.h>

@class RLMRealm, RLMObjectSchema, NSString;

@interface RLMObjectBase : NSObject <RLMThreadConfined, RLMThreadConfined_Private> {

	BasicRow<realm::Table>* _row;
	RLMObservationInfo* _observationInfo;
	RLMClassInfo* _info;
	RLMRealm* _realm;
	RLMObjectSchema* _objectSchema;

}

@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RLMRealm * realm; 
@property (nonatomic,readonly) id objectiveCMetadata; 
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)className;
+(BOOL)shouldIncludeInDefaultSchema;
+(id)sharedSchema;
+(void)initializeLinkedObjectSchemas;
+(Class)objectUtilClass:(BOOL)arg1 ;
+(id)_realmObjectName;
+(id)_realmColumnNames;
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(id)valueForKey:(id)arg1 ;
-(id)valueForUndefinedKey:(id)arg1 ;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(id)mutableArrayValueForKey:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(BOOL)isInvalidated;
-(RLMRealm *)realm;
-(id)objectSchema;
-(id)initWithValue:(id)arg1 schema:(id)arg2 ;
-(id)initWithRealm:(id)arg1 schema:(id)arg2 ;
-(id)descriptionWithMaxDepth:(unsigned long long)arg1 ;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(id)objectiveCMetadata;
@end

