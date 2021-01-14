/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportDownloadBatchTask, CPLEngineTransportQueryTask, CPLEngineTransportGroup, CPLEngineTransportGetCurrentSyncAnchorTask;
@class NSObject, CPLEngineTransport, CPLScopeChange, NSData, CPLFeatureVersionHistory;

@interface CPLPullFromTransportScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _queue;
	CPLEngineTransport* _transport;
	id<CPLEngineTransportDownloadBatchTask> _downloadTask;
	id<CPLEngineTransportQueryTask> _queryTask;
	CPLScopeChange* _currentScopeChange;
	Class _currentQueryClass;
	BOOL _ignoreNewBatches;
	BOOL _useCourtesyMingling;
	unsigned long long _rewindFeatureVersion;
	NSData* _rewindSyncAnchor;
	CPLFeatureVersionHistory* _versionHistory;
	id<CPLEngineTransportGroup> _transportGroup;
	unsigned long long _totalAssetCountForScope;
	BOOL _hasCachedTotalAssetCountForScope;
	long long _taskItem;
	BOOL _hasFetchedInitialSyncAnchor;
	BOOL _shouldStoreInitialSyncAnchor;
	NSData* _initialSyncAnchor;
	CPLScopeChange* _initialScopeChange;
	id<CPLEngineTransportGetCurrentSyncAnchorTask> _fetchInitialSyncAnchorTask;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	BOOL _didNotifySchedulerPullQueueIsFullOnce;
	BOOL _needsToNotifySchedulerPullQueueIsFull;

}
-(void)launch;
-(void)_launch;
-(id)taskIdentifier;
-(void)cancel;
-(BOOL)checkScopeIsValidInTransaction:(id)arg1 ;
-(void)_reallyNotifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFull;
-(void)_notifySchedulerPullQueueIsFullNowIfNecessary;
-(void)taskDidFinishWithError:(id)arg1 ;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(unsigned long long)_totalAssetCountForScope;
-(void)_cancelAllTasks;
-(void)_extractAndMinglePersonsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2 ;
-(void)_extractAndMingleAssetsIfPossibleFromBatch:(id)arg1 inTransaction:(id)arg2 ;
-(void)_handleNewBatchFromChanges:(id)arg1 newSyncAnchor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_handleNewBatchFromChanges:(id)arg1 updatedFlags:(id)arg2 newSyncAnchor:(id)arg3 ;
-(void)_updateLastFeatureVersionAndRelaunchFetchChangesFromSyncAnchor:(id)arg1 ;
-(void)_launchFetchChangesFromSyncAnchor:(id)arg1 ;
-(void)_handleNewBatchFromQuery:(id)arg1 newCursor:(id)arg2 inTransaction:(id)arg3 ;
-(void)_storeInitialSyncAnchorIfNecessaryInTransaction:(id)arg1 ;
-(void)_handleNewBatchFromQuery:(id)arg1 queryClass:(Class)arg2 newCursor:(id)arg3 ;
-(void)_launchQueryForClass:(Class)arg1 cursor:(id)arg2 ;
-(void)_launchNextQueryTask;
-(void)_launchPullTasksAndDisableQueries:(BOOL)arg1 ;
-(void)_fetchInitialSyncAnchor;
-(void)_checkServerFeatureVersionWithCompletionHandler:(/*^block*/id)arg1 ;
@end

