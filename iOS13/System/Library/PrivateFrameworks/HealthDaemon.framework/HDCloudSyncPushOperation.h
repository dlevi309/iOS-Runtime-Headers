/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDSyncSessionDelegate.h>
#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class HDCloudSyncOperationConfiguration, HDCloudSyncFetchOperationResult, NSObject, _HDCloudSyncSessionContext, HDCloudSyncStoreRecord, NSMutableArray, NSUUID, NSDate, NSString, NSProgress;

@interface HDCloudSyncPushOperation : NSObject <HDSyncSessionDelegate, NSProgressReporting> {

	HDCloudSyncOperationConfiguration* _configuration;
	HDCloudSyncFetchOperationResult* _fetchOperationResult;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_queue> _syncQueue;
	_HDCloudSyncSessionContext* _syncSessionContext;
	HDCloudSyncStoreRecord* _storeRecordForPush;
	BOOL _isNewStoreRecord;
	NSMutableArray* _changeRecordsPendingPush;
	NSMutableArray* _recordsPendingDeletion;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	NSString* _cloudKitIdentifier;
	BOOL _queue_hasStarted;
	long long _perSequenceChildProgressUnitCount;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,readonly) NSProgress * progress;               //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)syncSessionWillBegin:(id)arg1 ;
-(void)syncSession:(id)arg1 sendChanges:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)syncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3 ;
-(BOOL)syncSession:(id)arg1 didEndTransactionWithError:(id*)arg2 ;
-(id)initWithConfiguration:(id)arg1 fetchOperationResult:(id)arg2 ;
-(id)_queue_getStoreRecordForPushZone:(id)arg1 isNewRecord:(BOOL*)arg2 error:(id*)arg3 ;
-(id)_queue_sequenceRecordsForPushWithStoreRecord:(id)arg1 ;
-(void)_setInitialForwardProgressDateIfNecessary;
-(void)_queue_performSyncForSequences:(id)arg1 excludingStoreZones:(id)arg2 ;
-(id)_queue_tombstoneSequenceRecordForPushWithStoreRecord:(id)arg1 ;
-(id)_queue_primarySequenceRecordForPushWithStoreRecord:(id)arg1 ;
-(id)_queue_pushStoreWithIdentifier:(id)arg1 ;
-(id)_queue_excludedStoresForZones:(id)arg1 ;
-(void)_queue_syncCompletedWithSuccess:(BOOL)arg1 error:(id)arg2 remainingSequences:(id)arg3 excludedStoreZones:(id)arg4 ;
-(id)_queue_estimateSyncEntityClassesWithChangesForSession:(id)arg1 ;
-(BOOL)_queue_finalizeNextChangeRecordForUploadToSession:(id)arg1 shouldFreeze:(BOOL)arg2 error:(id*)arg3 ;
-(void)_queue_uploadChangesForSyncSession:(id)arg1 isFinalUpload:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)_queue_finalizePushForSession:(id)arg1 ;
-(void)_queue_endSyncSessionWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_queue_deactivatePendingOwnerStores;
-(void)_queue_pushRecords:(id)arg1 recordIDsToDelete:(id)arg2 zoneToCreate:(id)arg3 containerID:(id)arg4 completion:(/*^block*/id)arg5 ;
-(id)_queue_pushStoreIdentifier;
-(long long)_queue_protocolVersionForPush;
-(void)_recordForwardProgressDate;
-(long long)nextSyncAnchorForEntity:(Class)arg1 session:(id)arg2 startSyncAnchor:(long long)arg3 error:(id*)arg4 ;
@end

