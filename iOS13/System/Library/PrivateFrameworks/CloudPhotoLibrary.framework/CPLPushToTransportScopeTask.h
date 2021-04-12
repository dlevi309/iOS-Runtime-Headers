/*
* Generated on Monday, March 1, 2021 at 2:33:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <CloudPhotoLibrary/CPLEngineScopedTask.h>

@protocol OS_dispatch_queue, CPLEngineTransportCheckRecordsExistenceTask, CPLEngineTransportUploadBatchTask, CPLEngineTransportGroup;
@class NSObject, CPLEngineScopeStorage, CPLEngineTransport, CPLEnginePushRepository, CPLEngineScheduler, CPLBatchExtractionStrategy, CPLExtractedBatch, CPLChangeBatch, NSError, CPLDerivativesFilter, NSArray, NSDictionary, NSMutableDictionary, NSMutableSet, NSString, NSDate;

@interface CPLPushToTransportScopeTask : CPLEngineScopedTask {

	NSObject*<OS_dispatch_queue> _lock;
	CPLEngineScopeStorage* _scopes;
	CPLEngineTransport* _transport;
	CPLEnginePushRepository* _pushRepository;
	CPLEngineScheduler* _scheduler;
	CPLBatchExtractionStrategy* _currentStrategy;
	CPLExtractedBatch* _extractedBatch;
	CPLChangeBatch* _uploadBatch;
	CPLChangeBatch* _batchToCommit;
	NSError* _preparationError;
	CPLDerivativesFilter* _derivativesFilter;
	NSArray* _uploadResourceTasks;
	NSDictionary* _recordsWithGeneratedResources;
	NSMutableDictionary* _recordsWithSparseResources;
	NSMutableDictionary* _recordsWithForwardCompatibilityCheck;
	NSMutableDictionary* _recordsWithUntrustedCloudCache;
	NSMutableDictionary* _recordsWithResourcesToLookAhead;
	NSMutableDictionary* _recordsCopyingDerivativesFromSource;
	NSMutableDictionary* _recordsToCheckForExistence;
	NSMutableSet* _recordsNeedingToBeFullyFetched;
	NSMutableDictionary* _additionalTransportScopes;
	id<CPLEngineTransportCheckRecordsExistenceTask> _checkExistenceTask;
	id<CPLEngineTransportUploadBatchTask> _uploadTask;
	unsigned long long _lastReportedProgress;
	unsigned long long _countOfPushedChanges;
	double _startOfIteration;
	double _startOfDerivativesGeneration;
	BOOL _generatingSomeDerivatives;
	BOOL _deferredCancel;
	BOOL _hasCachedShouldCheckResourcesAhead;
	BOOL _shouldCheckResourcesAhead;
	unsigned long long _estimatedSize;
	unsigned long long _estimatedCount;
	BOOL _shouldSetupEstimatedSize;
	id<CPLEngineTransportGroup> _transportGroup;
	long long _taskItem;
	BOOL _mightPushSomeResources;
	BOOL _hasPushedSomeChanges;
	BOOL _hasDroppedSomeResources;
	BOOL _shouldResetExceedingQuotaOnSuccess;
	BOOL _isUsingOverQuotaStrategy;
	BOOL _resetStrategy;
	double _latestApproximativeUploadRate;
	NSString* _currentTaskKey;
	NSDate* _taskStartDate;
	unsigned long long _recordCount;
	BOOL _didExtractOneBatch;
	BOOL _highPriority;
	NSString* _phaseDescription;

}

@property (assign,nonatomic) BOOL highPriority;              //@synthesize highPriority=_highPriority - In the implementation block
@property (copy) NSString * phaseDescription;                //@synthesize phaseDescription=_phaseDescription - In the implementation block
-(void)cancel;
-(void)launch;
-(id)taskIdentifier;
-(void)setHighPriority:(BOOL)arg1 ;
-(BOOL)highPriority;
-(void)cancel:(BOOL)arg1 ;
-(NSString *)phaseDescription;
-(void)setPhaseDescription:(NSString *)arg1 ;
-(void)_doOneIteration;
-(void)_uploadBatch;
-(id)initWithEngineLibrary:(id)arg1 session:(id)arg2 clientCacheIdentifier:(id)arg3 scope:(id)arg4 transportScope:(id)arg5 ;
-(void)_didStartTaskWithKey:(id)arg1 recordCount:(unsigned long long)arg2 ;
-(void)_didFinishTaskWithKey:(id)arg1 error:(BOOL)arg2 cancelled:(BOOL)arg3 ;
-(void)_popNextBatchAndContinue;
-(void)_updateQuotaStrategyAfterSuccessInTransaction:(id)arg1 ;
-(void)_requireExistenceCheckForRecords:(id)arg1 ;
-(BOOL)_prepareResourcesToUploadInBatch:(id)arg1 error:(id*)arg2 ;
-(BOOL)_markUploadedTasksDidFinishWithError:(id)arg1 error:(id*)arg2 ;
-(BOOL)_discardUploadedExtractedBatchWithError:(id*)arg1 ;
-(BOOL)_reenqueueExtractedBatchWithRejectedRecords:(id)arg1 error:(id*)arg2 ;
-(void)_updateChangeProperties:(id)arg1 withBaseChange:(id)arg2 withCopyProperty:(/*^block*/id)arg3 ;
-(BOOL)_shouldCheckResourcesAheadForChange:(id)arg1 ;
-(void)_clearUploadBatch;
-(void)_detectUpdatesNeedingExistenceCheck:(id)arg1 ;
-(void)_checkForRecordExistence;
-(void)_prepareUploadBatchWithTransaction:(id)arg1 andStore:(id)arg2 ;
-(void)_deleteGeneratedResourcesAfterError:(id)arg1 ;
-(void)_generateDerivativesForNextRecord:(id)arg1 ;
-(void)_generateNeededDerivatives;
-(void)_pushTaskDidFinishWithError:(id)arg1 ;
@end

