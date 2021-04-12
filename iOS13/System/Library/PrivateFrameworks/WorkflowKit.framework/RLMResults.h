/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id objectiveCMetadata; 
@property (nonatomic,readonly) RLMClassInfo* objectInfo; 
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3 ;
+(id)resultsWithObjectInfo:(RLMClassInfo*)arg1 results:(Results*)arg2 ;
+(id)emptyDetachedResults;
-(NSString *)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(int)type;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)firstObject;
-(id)lastObject;
-(id)valueForKey:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(id)_sumForKeyPath:(id)arg1 ;
-(id)_unionOfArraysForKeyPath:(id)arg1 ;
-(id)_unionOfObjectsForKeyPath:(id)arg1 ;
-(id)_avgForKeyPath:(id)arg1 ;
-(id)_maxForKeyPath:(id)arg1 ;
-(id)_minForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfArraysForKeyPath:(id)arg1 ;
-(id)_distinctUnionOfObjectsForKeyPath:(id)arg1 ;
-(BOOL)isInvalidated;
-(RLMRealm *)realm;
-(BOOL)isOptional;
-(TableView*)tableView;
-(BOOL)isAttached;
-(void)setOptional:(BOOL)arg1 ;
-(id)initPrivate;
-(id)initWithResults:(Results*)arg1 ;
-(NSString *)objectClassName;
-(id)objectsWhere:(id)arg1 args:(char*)arg2 ;
-(id)objectsWithPredicate:(id)arg1 ;
-(id)objectsWhere:(id)arg1 ;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(id)objectiveCMetadata;
-(void)deleteObjectsFromRealm;
-(id)initWithObjectInfo:(RLMClassInfo*)arg1 results:(Results*)arg2 ;
-(unsigned long long)indexOfObjectWhere:(id)arg1 args:(char*)arg2 ;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1 ;
-(id)aggregate:(id)arg1 method:(id)arg2 methodName:(BOOL)arg3 ;
-(id)_aggregateForKeyPath:(id)arg1 method:(id)arg2 methodName:(BOOL)arg3 ;
-(id)averageOfProperty:(id)arg1 ;
-(id)sortedResultsUsingDescriptors:(id)arg1 ;
-(id)fastEnumerator;
-(RLMClassInfo*)objectInfo;
-(unsigned long long)indexOfObjectWhere:(id)arg1 ;
-(id)sortedResultsUsingKeyPath:(id)arg1 ascending:(BOOL)arg2 ;
-(id)minOfProperty:(id)arg1 ;
-(id)maxOfProperty:(id)arg1 ;
-(id)sumOfProperty:(id)arg1 ;
-(id)subresultsWithResults:(Results*)arg1 ;
-(id)distinctResultsUsingKeyPaths:(id)arg1 ;
@end

