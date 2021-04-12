/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/NSProgressReporting.h>

@protocol OS_dispatch_queue;
@class HDCloudSyncOperationConfiguration, NSObject, HDCloudSyncStoreRecord, HDCloudSyncZone, CKContainer, HDCloudSyncStore, NSMutableArray, CKServerChangeToken, NSFileHandle, NSProgress, NSUUID, NSDate, NSString, _HDCloudSyncStorePersistableState;

@interface HDCloudSyncPullOperation : NSObject <NSProgressReporting> {

	HDCloudSyncOperationConfiguration* _configuration;
	NSObject*<OS_dispatch_queue> _queue;
	HDCloudSyncStoreRecord* _storeRecord;
	HDCloudSyncZone* _pullZone;
	CKContainer* _container;
	HDCloudSyncStore* _syncStore;
	NSMutableArray* _fetchedChangeRecords;
	CKServerChangeToken* _initialServerChangeToken;
	CKServerChangeToken* _serverChangeToken;
	NSFileHandle* _fileHandle;
	NSProgress* _allAssetProgress;
	NSProgress* _perAssetRecordProgress;
	NSUUID* _operationIdentifier;
	NSDate* _startTime;
	NSString* _cloudKitIdentifier;
	BOOL _hasAppliedChange;
	BOOL _queue_hasStarted;
	/*^block*/id _completion;
	NSProgress* _progress;

}

@property (nonatomic,copy,readonly) _HDCloudSyncStorePersistableState * persistedStoreState; 
@property (nonatomic,readonly) NSProgress * progress;                                                     //@synthesize progress=_progress - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_assetFileHandleWithName:(id)arg1 error:(id*)arg2 ;
-(NSString *)description;
-(NSProgress *)progress;
-(void)startWithCompletion:(/*^block*/id)arg1 ;
-(void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(id)initWithConfiguration:(id)arg1 pullZone:(id)arg2 ;
-(void)_queue_startPullOperation;
-(void)_queue_recordChangeApplied;
-(long long)_queue_requiresSyncForSequence:(id)arg1 error:(id*)arg2 ;
-(id)_syncStoreWithError:(id*)arg1 ;
-(BOOL)_queue_resetPullState:(id)arg1 error:(id*)arg2 ;
-(BOOL)_queue_prepareForEpochChangeWithPersistedState:(id)arg1 error:(id*)arg2 ;
-(long long)_queue_requiresSyncWithError:(id*)arg1 ;
-(id)_queue_getFetchChangesOperation;
-(void)_queue_setupAndTriggerFetchChangesOperation:(id)arg1 ;
-(_HDCloudSyncStorePersistableState *)persistedStoreState;
-(void)_fetchRecordZoneChangesCompletionForOperation:(id)arg1 error:(id)arg2 ;
-(void)_recordZoneFetchCompletionForOperation:(id)arg1 recordZoneID:(id)arg2 serverChangeToken:(id)arg3 recordZoneError:(id)arg4 ;
-(void)_recordChangedForOperation:(id)arg1 record:(id)arg2 ;
-(void)_queue_endFetchChangesOperation:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)_queue_requiredRecordsWithOrderedChangeRecords:(id)arg1 error:(id*)arg2 ;
-(void)_queue_updatePersistedServerChangeToken:(id)arg1 ;
-(void)_queue_fetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2 ;
-(void)_queue_helpFetchAssetsForOrderedChangeRecords:(id)arg1 operation:(id)arg2 recordIndex:(long long)arg3 ;
-(void)_queue_fetchAssetForChangeRecord:(id)arg1 continuation:(/*^block*/id)arg2 ;
-(BOOL)_isRelevantChangeRecord:(id)arg1 ;
-(BOOL)_isValidAnchorRangeMap:(id)arg1 lastAnchorMap:(id)arg2 error:(id*)arg3 ;
-(BOOL)_shouldApplyAnchorRangeMap:(id)arg1 receivedAnchorMap:(id)arg2 ;
-(void)_perRecordCompletionForOperation:(id)arg1 record:(id)arg2 recordID:(id)arg3 recordAssetContentInMemory:(BOOL)arg4 error:(id)arg5 errorCompletion:(/*^block*/id)arg6 ;
-(void)_fetchRecordsCompletionForOperation:(id)arg1 recordsByRecordID:(id)arg2 operatioError:(id)arg3 completion:(/*^block*/id)arg4 ;
-(id)_zipArchiveExtractorForChangeRecord:(id)arg1 assetContentInMemory:(BOOL)arg2 error:(id*)arg3 ;
-(long long)_queue_assetExtractionFailureCount;
-(void)_queue_setAssetExtractionFailureCount:(long long)arg1 ;
-(BOOL)_queue_persistFetchedArchiveAsset:(id)arg1 changeRecord:(id)arg2 error:(id*)arg3 ;
-(BOOL)_applySyncChanges:(id)arg1 store:(id)arg2 error:(id*)arg3 ;
-(id)_assetExtractionFailureCountKey;
@end

