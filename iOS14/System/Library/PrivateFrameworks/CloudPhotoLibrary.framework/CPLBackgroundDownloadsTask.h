/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineSyncTask.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError, NSArray;

@interface CPLBackgroundDownloadsTask : CPLEngineSyncTask {

	NSObject*<OS_dispatch_queue> _lock;
	NSMutableArray* _transportTasks;
	BOOL _shouldStop;
	NSError* _badError;
	NSError* _stopError;
	BOOL _prioritizeNonDerivatives;
	BOOL _hasResetQueue;
	unsigned long long _successfullyDownloadedResourcesCount;
	unsigned long long _failedDownloadedResourcesCount;
	unsigned long long _total;
	unsigned long long _activeTransferTaskCount;
	unsigned long long _transportTaskCount;
	NSArray* _intentsToDownload;
	unsigned long long _currentIntentIndex;

}
-(void)launch;
-(id)description;
-(id)taskIdentifier;
-(void)cancel;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 ;
-(void)taskDidFinishWithError:(id)arg1 ;
-(void)_finishTaskLocked;
-(void)_getResourceTypesToDownload:(const unsigned long long*)arg1 ;
-(void)_launchNecessaryDownloadTasksWithTransaction:(id)arg1 ;
-(BOOL)_isErrorCountingForARetry:(id)arg1 ;
-(void)_completeBackgroundDownloadForResource:(id)arg1 error:(id)arg2 withTransaction:(id)arg3 ;
-(void)_enqueueTasksLocked;
-(void)_updateActiveDownloadTaskCount;
-(void)_downloadTask:(id)arg1 didFinishWithErrorLocked:(id)arg2 ;
-(void)_transportTaskDidFinish:(id)arg1 ;
@end

