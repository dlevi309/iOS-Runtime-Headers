/*
* Generated on Thursday, January 14, 2021 at 2:20:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/_DKCoreDataStorageDelegate.h>
#import <libobjc.A.dylib/_DKKnowledgeEventStreamDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeSaving.h>
#import <libobjc.A.dylib/_DKKnowledgeDeleting.h>
#import <libobjc.A.dylib/_DKKnowledgeQuerying.h>

@protocol OS_dispatch_queue;
@class _DKCoreDataStorage, NSUUID, NSObject, NSString, NSURL, NSHashTable, _DKTombstonePolicy;

@interface _DKKnowledgeStorage : NSObject <_DKCoreDataStorageDelegate, _DKKnowledgeEventStreamDeleting, _DKKnowledgeSaving, _DKKnowledgeDeleting, _DKKnowledgeQuerying> {

	BOOL _localOnly;
	_DKCoreDataStorage* _syncStorage;
	NSUUID* _deviceUUID;
	NSObject*<OS_dispatch_queue> _defaultResponseQueue;
	NSString* _directory;
	NSURL* _modelURL;
	NSHashTable* _knowledgeStorageEventNotificationDelegates;
	unsigned long long _insertsAndDeletesObserverCount;
	NSString* _clientID;
	_DKTombstonePolicy* _tombstonePolicy;
	NSObject*<OS_dispatch_queue> _executionQueue;
	_DKCoreDataStorage* _storage;

}

@property (nonatomic,readonly) NSUUID * deviceUUID;                           //@synthesize deviceUUID=_deviceUUID - In the implementation block
@property (retain) _DKTombstonePolicy * tombstonePolicy;                      //@synthesize tombstonePolicy=_tombstonePolicy - In the implementation block
@property (nonatomic,readonly) BOOL localOnly;                                //@synthesize localOnly=_localOnly - In the implementation block
@property (nonatomic,readonly) _DKCoreDataStorage * storage;                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,readonly) _DKCoreDataStorage * syncStorage;              //@synthesize syncStorage=_syncStorage - In the implementation block
+(id)storageWithShallowCopyFromStorage:(id)arg1 clientIdentifier:(id)arg2 ;
+(id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
+(id)storeWithDirectory:(id)arg1 readOnly:(BOOL)arg2 ;
+(id)sourceDeviceIdentityFromObject:(id)arg1 ;
+(id)storageWithDirectory:(id)arg1 readOnly:(BOOL)arg2 localOnly:(BOOL)arg3 ;
-(void)saveHistogram:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)setTombstonePolicy:(_DKTombstonePolicy *)arg1 ;
-(void)saveObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(unsigned long long)deleteEventsMatchingPredicate:(id)arg1 limit:(unsigned long long)arg2 ;
-(BOOL)coreDataStorage:(id)arg1 shouldCallDelegateBeforeAutoMigrationFromManagedObjectModelHavingVersion:(unsigned long long)arg2 ;
-(id)lastChangeSetWithEntityName:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteAllEventsMatchingPredicate:(id)arg1 error:(id*)arg2 ;
-(_DKCoreDataStorage *)storage;
-(unsigned long long)deleteOldObjectsIfNeededToLimitTotalNumber:(unsigned long long)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3 ;
-(BOOL)localOnly;
-(id)sourceDeviceIdentity;
-(BOOL)saveChangeSetsForSync:(id)arg1 error:(id*)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 ;
-(id)executeQuery:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteObjectsInEventStream:(id)arg1 ifNeededToLimitEventCount:(unsigned long long)arg2 batchLimit:(unsigned long long)arg3 ;
-(BOOL)coreDataStorage:(id)arg1 shouldCallDelegateAfterAutoMigrationToManagedObjectModelHavingVersion:(unsigned long long)arg2 ;
-(void)incrementInsertsAndDeletesObserverCount;
-(BOOL)coreDataStorage:(id)arg1 didAutoMigratePersistentStore:(id)arg2 toManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5 ;
-(void)startSyncDownFromCloudWithResponseQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)executeQuery:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)deleteObjects:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)deleteOrphanedEntities;
-(id)fetchSyncChangesSinceDate:(id)arg1 error:(id*)arg2 ;
-(_DKTombstonePolicy *)tombstonePolicy;
-(unsigned long long)deleteHistogram:(id)arg1 ;
-(id)eventCountPerStreamName;
-(id)keyValueStoreForDomain:(id)arg1 ;
-(unsigned long long)deleteEventsStartingEarlierThanDate:(id)arg1 limit:(unsigned long long)arg2 ;
-(unsigned long long)deleteAllEventsInEventStream:(id)arg1 error:(id*)arg2 ;
-(BOOL)deleteSyncStorage;
-(BOOL)saveSyncPeer:(id)arg1 error:(id*)arg2 ;
-(void)deleteAllEventsMatchingPredicate:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)decrementInsertsAndDeletesObserverCount;
-(void)startSyncUpToCloudWithResponseQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(unsigned long long)deleteObjectsOlderThanDate:(id)arg1 excludingPredicate:(id)arg2 limit:(unsigned long long)arg3 ;
-(id)fetchLocalChangesSinceDate:(id)arg1 error:(id*)arg2 ;
-(void)deleteObjects:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)removeSyncPeer:(id)arg1 ;
-(id)syncStorageAssertion;
-(_DKCoreDataStorage *)syncStorage;
-(void)deleteAllEventsInEventStream:(id)arg1 responseQueue:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(NSUUID *)deviceUUID;
-(unsigned long long)lastSequenceNumberForChangeSetWithEntityName:(id)arg1 error:(id*)arg2 ;
-(void)removeKnowledgeStorageEventNotificationDelegate:(id)arg1 ;
-(id)coreDataStorage:(id)arg1 needsManagedObjectModelNameForVersion:(unsigned long long)arg2 ;
-(void)closeStorage;
-(unsigned long long)deleteObjectsInEventStreams:(id)arg1 olderThanDate:(id)arg2 limit:(unsigned long long)arg3 ;
-(BOOL)coreDataStorage:(id)arg1 willAutoMigrateStoreAtURL:(id)arg2 fromManagedObjectModel:(id)arg3 havingVersion:(unsigned long long)arg4 error:(id*)arg5 ;
-(unsigned long long)eventCount;
-(id)syncPeersWithError:(id*)arg1 ;
-(void)addKnowledgeStorageEventNotificationDelegate:(id)arg1 ;
-(void)_databaseChangedWithNotification:(id)arg1 ;
-(void)closeSyncStorage;
-(BOOL)deleteStorage;
@end

