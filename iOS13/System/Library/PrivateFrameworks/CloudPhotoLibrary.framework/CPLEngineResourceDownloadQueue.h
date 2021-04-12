/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineStorage.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>

@protocol OS_dispatch_queue;
@class NSObject, CPLActiveDownloadQueue, NSDate, NSString, CPLPlatformObject;

@interface CPLEngineResourceDownloadQueue : CPLEngineStorage <CPLAbstractObject> {

	NSObject*<OS_dispatch_queue> _downloadLock;
	CPLActiveDownloadQueue* _highPriorityQueue;
	CPLActiveDownloadQueue* _thumbnailHighPriorityQueue;
	CPLActiveDownloadQueue* _lowPriorityQueue;
	unsigned long long _inflightTransferTasksCount;
	unsigned long long _transferTasksBurstCount;
	unsigned long long _lastTransferTasksBurstCount;
	NSDate* _lastTransferTaskBurstDate;
	BOOL _shouldRequestABackgroundDownloadSyncPhase;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject; 
+(BOOL)shouldRetryDownloadOnError:(id)arg1 ;
-(id)status;
-(unsigned long long)scopeType;
-(void)barrier;
-(id)initWithEngineStore:(id)arg1 name:(id)arg2 ;
-(BOOL)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long*)arg3 error:(id*)arg4 ;
-(id)cloudResourceForLocalResource:(id*)arg1 shouldNotTrustCaches:(BOOL*)arg2 transportScope:(id*)arg3 error:(id*)arg4 ;
-(id)downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_downloadTaskForLocalResource:(id)arg1 clientBundleID:(id)arg2 highPriority:(BOOL)arg3 proposedTaskIdentifier:(id)arg4 didStartHandler:(/*^block*/id)arg5 progressHandler:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(id)_failedTaskWithCompletionHandler:(/*^block*/id)arg1 error:(id)arg2 resource:(id)arg3 highPriority:(BOOL)arg4 ;
-(id)_resourceStorageCopyTaskForResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_realDownloadTaskForLocalResource:(id)arg1 cloudResource:(id)arg2 didStartHandler:(/*^block*/id)arg3 progressHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(BOOL)_shouldTryLowPriorityDownloadWithError:(id*)arg1 ;
-(unsigned long long)_transportTaskCount;
-(BOOL)_canScheduleBackgroundDownloads;
-(BOOL)_launchTransportTaskForQueue:(id)arg1 highPriority:(BOOL)arg2 ;
-(void)_dispatchTransportTasksIfNecessary;
-(id)_activeQueueForTransferTask:(id)arg1 ;
-(void)_enqueueTransferTaskInActiveQueue:(id)arg1 ;
-(void)_dequeueTransferTaskInActiveQueue:(id)arg1 ;
-(void)_scheduleBackgroundDownloadsIfNecessary;
-(void)_requestBackgroundDownloads;
-(void)_unscheduleBackgroundDownloads;
-(BOOL)enqueueBackgroundDownloadTaskForResource:(id)arg1 downloading:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)reenqueueBackgroundDownloadTaskForResource:(id)arg1 bumpRetryCount:(BOOL)arg2 didDiscard:(BOOL*)arg3 error:(id*)arg4 ;
-(BOOL)removeBackgroundDownloadTaskForResource:(id)arg1 error:(id*)arg2 ;
-(BOOL)markBackgroundDownloadTaskForResourceAsSuceeded:(id)arg1 error:(id*)arg2 ;
-(id)dequeueNextBackgroundDownloadTasksForResourceType:(unsigned long long)arg1 maximumSize:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)resetDequeuedBackgroundDownloadTasksWithError:(id*)arg1 ;
-(BOOL)removeAllBackgroundDownloadTasksForItemWithScopedIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)enumeratorForDownloadedResources;
-(unsigned long long)countOfQueuedDownloadTasks;
-(BOOL)hasActiveOrQueuedBackgroundDownloadOperations;
-(id)_queuesStatus;
@end

