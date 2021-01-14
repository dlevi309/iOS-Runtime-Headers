/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/RLMArray.h>
#import <libobjc.A.dylib/RLMThreadConfined_Private.h>
#import <libobjc.A.dylib/RLMFastEnumerable.h>

@class RLMRealm, NSString;

@interface RLMManagedArray : RLMArray <RLMThreadConfined_Private, RLMFastEnumerable> {

	List* _backingList;
	RLMRealm* _realm;
	RLMClassInfo* _objectInfo;
	RLMClassInfo* _ownerInfo;
	unique_ptr<RLMObservationInfo, std::__1::default_delete<RLMObservationInfo> >* _observationInfo;

}

@property (nonatomic,readonly) id objectiveCMetadata; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) RLMRealm * realm; 
@property (nonatomic,readonly) RLMClassInfo* objectInfo; 
@property (nonatomic,readonly) unsigned long long count; 
+(id)objectWithThreadSafeReference:(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)arg1 metadata:(id)arg2 realm:(id)arg3 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(RLMRealm *)realm;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(id)sortedResultsUsingDescriptors:(id)arg1 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(BOOL)isInvalidated;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_RL7*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(id)addNotificationBlock:(/*^block*/id)arg1 ;
-(TableView*)tableView;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(unsigned long long)indexOfObject:(id)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(id)valueForKey:(id)arg1 ;
-(unique_ptr<realm::ThreadSafeReferenceBase, std::__1::default_delete<realm::ThreadSafeReferenceBase> >*)makeThreadSafeReference;
-(unsigned long long)count;
-(void)addObjectsFromArray:(id)arg1 ;
-(id)fastEnumerator;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)objectsWithPredicate:(id)arg1 ;
-(id)valueForKeyPath:(id)arg1 ;
-(void)addObject:(id)arg1 ;
-(id)averageOfProperty:(id)arg1 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)moveObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(id)minOfProperty:(id)arg1 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)exchangeObjectAtIndex:(unsigned long long)arg1 withObjectAtIndex:(unsigned long long)arg2 ;
-(void)removeAllObjects;
-(unsigned long long)hash;
-(void)deleteObjectsFromRealm;
-(RLMClassInfo*)objectInfo;
-(unsigned long long)indexOfObjectWithPredicate:(id)arg1 ;
-(id)maxOfProperty:(id)arg1 ;
-(id)sumOfProperty:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)objectiveCMetadata;
-(BOOL)isBackedByList:(const List*)arg1 ;
-(unsigned long long)columnForProperty:(id)arg1 ;
-(id)initWithParent:(id)arg1 property:(id)arg2 ;
-(id)initWithList:(List*)arg1 realm:(id)arg2 parentInfo:(RLMClassInfo*)arg3 property:(id)arg4 ;
@end

