/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCanceled:(BOOL)arg1 ;
-(void)addObserver:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)observerQueue;
-(NSMutableDictionary *)pendingOperations;
-(id)zoneID;
-(BOOL)isCanceled;
-(MSPCloudKitAccountAccess *)access;
-(MSPJournal *)journal;
-(NSHashTable *)observers;
-(id)_modifyRecordsOperationWithRecordsToSave:(id)arg1 toDelete:(id)arg2 group:(id)arg3 modifyRecordsCompletion:(/*^block*/id)arg4 ;
-(Class)replicaRecordClass;
-(MSPCloudContainerCache *)cache;
-(void)setJournal:(MSPJournal *)arg1 ;
-(void)mergeWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setUseSecureContainer:(BOOL)arg1 ;
-(void)setHasActiveSubscription:(BOOL)arg1 ;
-(void)cancelMergeWithError:(id)arg1 ;
-(BOOL)useZoneWidePCS;
-(void)setObserverQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)zoneName;
-(BOOL)useSecureContainer;
-(void)setCancelError:(NSError *)arg1 ;
-(void)setPendingOperations:(NSMutableDictionary *)arg1 ;
-(void)didReceiveRemoteNotification:(id)arg1 ;
-(void)cancelPendingOperationsWithError:(id)arg1 ;
-(BOOL)canceled;
-(void)setupCloudContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setCache:(MSPCloudContainerCache *)arg1 ;
-(id)zoneSubscriptionName;
-(CKContainer *)ckContainer;
-(id)batchedOperationsFromRecords:(id)arg1 toDelete:(id)arg2 group:(id)arg3 batchSize:(unsigned long long)arg4 modifyRecordsCompletionBlock:(/*^block*/id)arg5 ;
-(void)containerDidEraseContents;
-(BOOL)hasActiveSubscription;
-(void)pushChanges:(id)arg1 withGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)removePendingOperationWithID:(id)arg1 ;
-(void)setContainer:(MSPContainer *)arg1 ;
-(void)subscribeToChangesWithCompletion:(/*^block*/id)arg1 ;
-(void)setOperationBatchSize:(unsigned long long)arg1 ;
-(id)description;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(id)initWithContainer:(id)arg1 accountID:(id)arg2 ;
-(void)removeCloudContainerWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addCKOperation:(id)arg1 ;
-(NSError *)cancelError;
-(void)setAccess:(MSPCloudKitAccountAccess *)arg1 ;
-(unsigned long long)operationBatchSize;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(void)configureCKOperation:(id)arg1 withGroup:(id)arg2 ;
-(void)fetchChangesWithGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContainer:(id)arg1 cache:(id)arg2 ;
-(void)mergeRemoteChanges:(id)arg1 withGroup:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_forEachObserver:(/*^block*/id)arg1 ;
-(MSPContainer *)container;
-(id)mergeOptionsForEarliestKnownSyncDate:(id)arg1 ;
-(void)setCallbackQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)mergeLocalChangesFromReplica:(id)arg1 withAppliedRemoteChanges:(id)arg2 group:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)handleMergeError:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithContainer:(id)arg1 cache:(id)arg2 access:(id)arg3 ;
@end

