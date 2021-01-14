/*
* Generated on Thursday, January 14, 2021 at 2:20:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
*/

#import <libobjc.A.dylib/APSConnectionDelegate.h>

@protocol _DKKeyValueStore, _DKSyncRemoteKnowledgeStorageFetchDelegate;
@class _DKThrottledActivity, _DKSyncPeerStatusTracker, _CDPeriodicSchedulerJob, CKContainer, APSConnection, NSMutableDictionary, NSMutableSet, CKServerChangeToken, NSOperation, NSHashTable, NSString;

@interface _DKSyncCloudKitKnowledgeStorage : NSObject <APSConnectionDelegate> {

	BOOL _started;
	id<_DKKeyValueStore> _keyValueStore;
	_DKThrottledActivity* _activityThrottler;
	_DKSyncPeerStatusTracker* _tracker;
	_CDPeriodicSchedulerJob* _updateSourceDeviceIdentifiersPeriodicJob;
	BOOL _cloudSyncAvailablityObserverRegistered;
	CKContainer* _container;
	APSConnection* _connection;
	double _updateSourceDeviceIdentifiersBackoffTimeInterval;
	NSMutableDictionary* _zoneIDsBySourceDeviceID;
	NSMutableDictionary* _recordZonesByZoneID;
	BOOL _databaseChangesExist;
	BOOL _isPrewarmed;
	NSMutableSet* _zoneIDsWithAdditionChanges;
	NSMutableSet* _zoneIDsWithDeletionChanges;
	NSMutableSet* _zoneIDsWithUnrecoverableDecryptionErrors;
	CKServerChangeToken* _fetchDatabaseChangesServerChangeToken;
	NSOperation* _previousDependentOperation;
	NSHashTable* _outstandingOperations;
	BOOL _available;
	id<_DKSyncRemoteKnowledgeStorageFetchDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)mySyncZoneID;
+(id)zoneIDWithDeviceID:(id)arg1 ;
+(id)deviceIDFromZoneID:(id)arg1 ;
-(void)clearPrewarmedFlag;
-(BOOL)hasAdditionsFlagForPeer:(id)arg1 ;
-(void)setHasDeletionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)fetchDeletionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2 ;
-(void)cancelOutstandingOperations;
-(void)setHasAdditionsFlag:(BOOL)arg1 forPeer:(id)arg2 ;
-(void)setFetchDelegate:(id)arg1 ;
-(void)connection:(id)arg1 didReceivePublicToken:(id)arg2 ;
-(void)updateStorageWithAddedEvents:(id)arg1 deletedEventIDs:(id)arg2 highPriority:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(id)init;
-(void)_cloudSyncAvailabilityDidChange:(id)arg1 ;
-(void)start;
-(void)fetchSourceDeviceIDFromPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchDeletedEventIDsFromPeer:(id)arg1 sinceDate:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 highPriority:(BOOL)arg5 completion:(/*^block*/id)arg6 ;
-(long long)transportType;
-(void)fetchAdditionsHighWaterMarkWithPeer:(id)arg1 highPriority:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(id)name;
-(void)prewarmFetchWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchEventsFromPeer:(id)arg1 windows:(id)arg2 streamNames:(id)arg3 limit:(unsigned long long)arg4 fetchOrder:(long long)arg5 highPriority:(BOOL)arg6 completion:(/*^block*/id)arg7 ;
-(BOOL)hasDeletionsFlagForPeer:(id)arg1 ;
-(void)dealloc;
@end

