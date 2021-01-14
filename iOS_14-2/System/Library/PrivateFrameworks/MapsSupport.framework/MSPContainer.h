/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerPersisterDelegate.h>

@protocol OS_dispatch_queue, MSPContainerStateSnapshot, NSObjectNSCopying;
@class NSObject, NSArray, NSHashTable, MSPContainerPersister, NSCountedSet, NSMutableSet, NSMutableArray, MSPQuerySource, NSString;

@interface MSPContainer : NSObject <MSPContainerPersisterDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	id<MSPContainerStateSnapshot> _currentStateSnapshot;
	NSArray* _currentProcessedContents;
	NSHashTable* _observers;
	MSPContainerPersister* _persister;
	NSCountedSet* _editCoalescingContexts;
	BOOL _isCommittingEnqueuedEdits;
	id<NSObject><NSCopying> _contextCoalescingFor;
	BOOL _coalescedEditsNeedEntireContents;
	NSMutableSet* _coalescedPartialContentIdentifiersToFetch;
	NSMutableArray* _enqueuedCoalescingEditBarrierBlocks;
	NSMutableArray* _enqueuedCoalescingCompletionBlocks;
	BOOL _hasScheduledDelayedCommitForCoalescedEdits;
	BOOL _hasLoadedContents;
	BOOL _preventsAssertionsForDuplicateStorageIdentifiers;
	BOOL _simulatesClearingDiscardableDataAfterOperations;

}

@property (nonatomic,readonly) MSPQuerySource * entireContentsQuerySource; 
@property (nonatomic,readonly) MSPContainerPersister * persister;                                                                                                                                                   //@synthesize persister=_persister - In the implementation block
@property (getter=_accessQueue,nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue; 
@property (nonatomic,readonly) BOOL _preventsAssertionsForDuplicateStorageIdentifiers;                                                                                                                              //@synthesize preventsAssertionsForDuplicateStorageIdentifiers=_preventsAssertionsForDuplicateStorageIdentifiers - In the implementation block
@property (assign,setter=_setSimulatesClearingDiscardableDataAfterOperations:,getter=_simulatesClearingDiscardableDataAfterOperations,nonatomic) BOOL simulatesClearingDiscardableDataAfterOperations;              //@synthesize simulatesClearingDiscardableDataAfterOperations=_simulatesClearingDiscardableDataAfterOperations - In the implementation block
@property (nonatomic,readonly) BOOL containerHasLoadedContents; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_disableLogging;
+(void)mutableObjectContentDidUpdate:(id)arg1 ;
+(void)_preventAssertionsForDuplicateStorageIdentifiersInContainersCreatedPerfomingBlock:(/*^block*/id)arg1 ;
+(void)clearDiscardableDataFromAllContainers;
+(BOOL)_deletes:(unsigned long long)arg1 mayRepresentDataLossIfAppliedTo:(unsigned long long)arg2 ;
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(id)_accessQueue;
-(void)_forEachObserver:(/*^block*/id)arg1 ;
-(void)dealloc;
-(void)editByMergingStateSnapshot:(id)arg1 mergeOptions:(id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)accessStateSnapshotUsingConcurrentBlock:(/*^block*/id)arg1 ;
-(void)accessContentsUsingConcurrentBlock:(/*^block*/id)arg1 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 completionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithPersister:(id)arg1 ;
-(void)persisterContentsDidChangeExternally:(id)arg1 ;
-(void)_processNewEditedContents:(id)arg1 ;
-(void)_processNewLoadedContents:(id)arg1 ;
-(void)_commitEditWithFinalContents:(id)arg1 context:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)editContentsUsingBarrierBlock:(/*^block*/id)arg1 context:(id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(MSPQuerySource *)entireContentsQuerySource;
-(void)eraseFromStorageTypes:(unsigned long long)arg1 withCompletionQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_clearObjectCacheIfNeeded;
-(void)_performInitialLoadNotifyingObservers:(BOOL)arg1 kickOffSynchronously:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)_processedContentsForPersisterContents:(id)arg1 ;
-(id)_objectsWithDuplicateStorageIdentifiersFromArray:(id)arg1 ;
-(BOOL)_checkAndAddCoalescedEditForContext:(id)arg1 identifiers:(id)arg2 enqueuedBlock:(/*^block*/id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(BOOL)_simulatesClearingDiscardableDataAfterOperations;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 context:(id)arg3 completionQueue:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)_commitPendingCoalescedEditsIfAny;
-(id)beginCoalescingEditsWithContext:(id)arg1 ;
-(BOOL)containerHasLoadedContents;
-(void)eraseWithCompletionQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)editObjectsWithIdentifiers:(id)arg1 usingBarrierBlock:(/*^block*/id)arg2 completionQueue:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)_endCoalescingEditsForContext:(id)arg1 ;
-(void)coalesceEditsForContext:(id)arg1 inBlock:(/*^block*/id)arg2 ;
-(MSPContainerPersister *)persister;
-(BOOL)_preventsAssertionsForDuplicateStorageIdentifiers;
-(void)_setSimulatesClearingDiscardableDataAfterOperations:(BOOL)arg1 ;
@end

