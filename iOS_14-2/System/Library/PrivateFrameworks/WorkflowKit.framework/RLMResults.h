/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <libobjc.A.dylib/RLMThreadConfined_Private.h>
#import <libobjc.A.dylib/RLMFastEnumerable.h>
#import <libobjc.A.dylib/RLMCollection.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class RLMRealm, NSString;

@interface RLMResults : NSObject <RLMThreadConfined_Private, RLMFastEnumerable, RLMCollection, NSFastEnumeration> {

	Results* _results;
	RLMRealm* _realm;
	RLMClassInfo* _info;
	BOOL _optional;

}

@property (getter=isAttached,nonatomic,readonly) BOOL attached; 
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) int type; 
@property (assign,getter=isOptional,nonatomic) BOOL optional;                      //@synthesize optional=_optional - In the implementation block
@property (nonatomic,copy,readonly) NSString * objectClassName; 
@property (nonatomic,readonly) RLMRealm * realm;                                   //@synthesize realm=_realm - In the implementation block
@property (getter=isInvalidated,nonatomic,readonly) BOOL invalidated; 
@property (nonatomic,readonly) id objectiveCMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RLMClassInfo* objectInfo; 
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3 ;
+(id)resultsWithObjectInfo:(RLMClassInfo*)arg1 results:(Results*)arg2 ;
+(id)emptyDetachedResults;
-(BOOL)isAttached;
-(RLMRealm *)realm;
-(id)initPrivate;
-(void)setOptional:(BOOL)arg1 ;
-(BOOL)isOptional;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)sortedResultsUsingDescriptors:(id)arg1 ;
-(id)distinctResultsUsingKeyPaths:(id)arg1 ;
-(BOOL)isInvalidated;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(TableView*)tableView;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(id)subresultsWithResults:(Results*)arg1 ;
-(unsigned long long)count;
-(id)aggregate:(id)arg1 method:(id)arg2 methodName:(BOOL)arg3 ;
-(id)_aggregateForKeyPath:(id)arg1 method:(id)arg2 methodName:(BOOL)arg3 ;
-(id)lastObject;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2 ;
-(id)firstObject;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)fastEnumerator;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsWhere:(id)arg1 ;
-(id)initWithObjectInfo:(RLMClassInfo*)arg1 results:(Results*)arg2 ;
-(id)objectsWithPredicate:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(NSString *)description;
-(id)averageOfProperty:(id)arg1 ;
-(id)minOfProperty:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(int)type;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(void)deleteObjectsFromRealm;
-(id)_maxForKeyPath:(id)arg1 ;
-(RLMClassInfo*)objectInfo;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1 ;
-(id)maxOfProperty:(id)arg1 ;
-(id)sumOfProperty:(id)arg1 ;
-(id)objectsWhere:(id)arg1 args:(char*)arg2 ;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(unsigned long long)indexOfObjectWhere:(id)arg1 ;
-(NSString *)objectClassName;
-(id)initWithResults:(Results*)arg1 ;
-(id)objectiveCMetadata;
@end

