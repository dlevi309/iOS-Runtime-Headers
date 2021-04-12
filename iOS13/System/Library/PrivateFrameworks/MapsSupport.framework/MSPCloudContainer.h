/*
* Generated on Monday, March 1, 2021 at 2:32:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPCloudNotificationReceiver.h>

@protocol OS_dispatch_queue;
@class MSPContainer, MSPCloudKitAccountAccess, MSPCloudContainerCache, NSObject, MSPJournal, NSMutableDictionary, NSError, NSHashTable, CKContainer;

@interface MSPCloudContainer : NSObject <MSPCloudNotificationReceiver> {

	BOOL _requiresRemoteFetch;
	BOOL _canceled;
	BOOL _hasActiveSubscription;
	BOOL _useSecureContainer;
	MSPContainer* _container;
	MSPCloudKitAccountAccess* _access;
	MSPCloudContainerCache* _cache;
	NSObject*<OS_dispatch_queue> _observerQueue;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	MSPJournal* _journal;
	NSMutableDictionary* _pendingOperations;
	NSError* _cancelError;
	NSHashTable* _observers;
	unsigned long long _operationBatchSize;

}

@property (nonatomic,retain) MSPCloudKitAccountAccess * access;                       //@synthesize access=_access - In the implementation block
@property (nonatomic,retain) MSPCloudContainerCache * cache;                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> observerQueue;              //@synthesize observerQueue=_observerQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callbackQueue;              //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (assign,nonatomic) BOOL hasActiveSubscription;                              //@synthesize hasActiveSubscription=_hasActiveSubscription - In the implementation block
@property (nonatomic,retain) MSPJournal * journal;                                    //@synthesize journal=_journal - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pendingOperations;                 //@synthesize pendingOperations=_pendingOperations - In the implementation block
@property (assign,nonatomic) BOOL canceled;                                           //@synthesize canceled=_canceled - In the implementation block
@property (nonatomic,copy) NSError * cancelError;                                     //@synthesize cancelError=_cancelError - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                 //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) CKContainer * ckContainer; 
@property (assign,nonatomic) BOOL useSecureContainer;                                 //@synthesize useSecureContainer=_useSecureContainer - In the implementation block
@property (assign,nonatomic) unsigned long long operationBatchSize;                   //@synthesize operationBatchSize=_operationBatchSize - In the implementation block
@property (nonatomic,retain) MSPContainer * container;                                //@synthesize container=_container - In the implementation block
-(id)description;
-(MSPContainer *)container;
-(void)setContainer:(MSPContainer *)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(BOOL)canceled;
-(void)setCanceled:(BOOL)arg1 ;
-(MSPCloudKitAccountAccess *)access;
-(id)zoneID;
-(id)zoneName;
-(void)setCache:(MSPCloudContainerCache *)arg1 ;
-(MSPCloudContainerCache *)cache;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(BOOL)isCanceled;
-(BOOL)useZoneWidePCS;
-(NSError *)cancelError;
-(void)setCancelError:(NSError *)arg1 ;
-(NSMutableDictionary *)pendingOperations;
-(MSPJournal *)journal;
-(void)setJournal:(MSPJournal *)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(void)setAccess:(MSPCloudKitAccountAccess *)arg1 ;
-(id)initWithContainer:(id)arg1 cache:(id)arg2 access:(id)arg3 ;
-(id)initWithContainer:(id)arg1 cache:(id)arg2 ;
-(CKContainer *)ckContainer;
-(void)_forEachObserver:(/*^block*/id)arg1 ;
-(void)configureCKOperation:(id)arg1 withGroup:(id)arg2 ;
-(void)removePendingOperationWithID:(id)arg1 ;
-(void)addCKOperation:(id)arg1 ;
-(BOOL)hasActiveSubscription;
-(void)setHasActiveSubscription:(BOOL)arg1 ;
-(id)zoneSubscriptionName;
-(Class)replicaRecordClass;
-(id)_modifyRecordsOperationWithRecordsToSave:(id)arg1 toDelete:(id)arg2 group:(id)arg3 modifyRecordsCompletion:(/*^block*/id)arg4 ;
-(id)batchedOperationsFromRecords:(id)arg1 toDelete:(id)arg2 group:(id)arg3 batchSize:(unsigned long long)arg4 modifyRecordsCompletionBlock:(/*^block*/id)arg5 ;
-(void)handleMergeError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)mergeRemoteChanges:(id)arg1 withGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchChangesWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)mergeOptionsForEarliestKnownSyncDate:(id)arg1 ;
-(void)mergeLocalChangesFromReplica:(id)arg1 withAppliedRemoteChanges:(id)arg2 group:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)pushChanges:(id)arg1 withGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)cancelPendingOperationsWithError:(id)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg1 ;
-(id)initWithContainer:(id)arg1 accountID:(id)arg2 ;
-(void)setUseSecureContainer:(BOOL)arg1 ;
-(void)setupCloudContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeCloudContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)subscribeToChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)mergeWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelMergeWithError:(id)arg1 ;
-(void)containerDidEraseContents;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setPendingOperations:(NSMutableDictionary *)arg1 ;
-(BOOL)useSecureContainer;
-(unsigned long long)operationBatchSize;
-(void)setOperationBatchSize:(unsigned long long)arg1 ;
@end

