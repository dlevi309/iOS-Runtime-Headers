/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/CPLEngineSyncTaskDelegate.h>
#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>
#import <libobjc.A.dylib/CPLEngineForceSyncTaskDelegate.h>

@protocol CPLEngineStoreUserIdentifier, CPLEngineTransportSetupTask, OS_dispatch_queue;
@class CPLDerivativesFilter, CPLSyncSession, NSObject, NSError, CPLCleanupTask, CPLTransportUpdateTask, CPLPullScopesTask, CPLScopeUpdateTask, CPLPushToTransportTask, CPLPullFromTransportTask, CPLMinglePulledChangesTask, CPLBackgroundDownloadsTask, CPLEngineForceSyncTask, NSMutableArray, CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineSyncManager : NSObject <CPLEngineSyncTaskDelegate, CPLAbstractObject, CPLEngineComponent, CPLEngineForceSyncTaskDelegate> {

	id<CPLEngineStoreUserIdentifier> _transportUserIdentifier;
	CPLDerivativesFilter* _derivativesFilter;
	BOOL _setupIsDone;
	BOOL _shouldUpdateDisabledFeatures;
	BOOL _closed;
	id<CPLEngineTransportSetupTask> _setupTask;
	/*^block*/id _closingCompletionHandler;
	CPLSyncSession* _session;
	NSObject*<OS_dispatch_queue> _lock;
	NSError* _lastError;
	CPLCleanupTask* _cleanupTask;
	CPLTransportUpdateTask* _transportUpdateTask;
	CPLPullScopesTask* _pullScopesTask;
	CPLScopeUpdateTask* _scopeUpdateTask;
	CPLPushToTransportTask* _pushHighPriorityTask;
	CPLPushToTransportTask* _pushTask;
	CPLPullFromTransportTask* _pullTask;
	CPLMinglePulledChangesTask* _mingleTask;
	CPLBackgroundDownloadsTask* _backgroundDownloadsTask;
	CPLEngineForceSyncTask* _currentForceSyncTask;
	CPLEngineForceSyncTask* _pendingForceSyncTask;
	unsigned long long _shouldRestartSessionFromState;
	NSMutableArray* _lastErrors;
	BOOL _foreground;
	BOOL _boostPriority;
	BOOL _hasOverridenBudgets;
	BOOL _disabledSchedulerForForceSyncTask;
	BOOL _shouldTryToMingleImmediately;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	unsigned long long _state;

}

@property (assign,setter=_setState:,nonatomic) unsigned long long state;              //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL shouldTryToMingleImmediately;                       //@synthesize shouldTryToMingleImmediately=_shouldTryToMingleImmediately - In the implementation block
@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;               //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,readonly) NSError * lastError; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                    //@synthesize platformObject=_platformObject - In the implementation block
+(id)descriptionForState:(unsigned long long)arg1 ;
+(id)platformImplementationProtocol;
+(id)shortDescriptionForState:(unsigned long long)arg1 ;
+(unsigned)qualityOfServiceForSyncSessions;
+(unsigned)qualityOfServiceForForcedTasks;
-(unsigned long long)state;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_setState:(unsigned long long)arg1 ;
-(id)componentName;
-(NSError *)lastError;
-(CPLPlatformObject *)platformObject;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)task:(id)arg1 didFinishWithError:(id)arg2 ;
-(void)task:(id)arg1 didProgress:(float)arg2 userInfo:(id)arg3 ;
-(void)forceSyncTaskHasBeenCancelled:(id)arg1 ;
-(void)dispatchSyncBlock:(/*^block*/id)arg1 ;
-(void)dispatchForcedTaskBlock:(/*^block*/id)arg1 ;
-(void)_setErrorForSyncSession:(id)arg1 ;
-(void)_resetErrorForSyncSession;
-(void)_cancelAllTasksLocked;
-(void)_cancelAllTasksLockedDeferringPushTaskCancellationIfCurrentlyUploadingForeground:(BOOL)arg1 ;
-(void)_moveAllTasksToBackgroundLocked;
-(id)_descriptionForCurrentState;
-(id)_shortDescriptionForCurrentState;
-(id)_descriptionForLaunchedTasks;
-(BOOL)_launchNecessaryTasksForCurrentStateLocked;
-(void)_notifyEndOfSyncSession;
-(void)_advanceToNextStateLocked;
-(void)_advanceToNextStateLockedMinimalState:(unsigned long long)arg1 ;
-(void)_restartSyncSessionFromStateLocked:(unsigned long long)arg1 session:(id)arg2 cancelIfNecessary:(BOOL)arg3 ;
-(void)startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(BOOL)arg3 ;
-(void)cancelCurrentSyncSession;
-(void)resetTransportUserIdentifier;
-(void)discardTransportUserIdentifier;
-(void)requestDisabledFeaturesUpdate;
-(void)setSyncSessionShouldBeForeground:(BOOL)arg1 ;
-(void)_overrideBudgetsIfNeeded;
-(void)setBoostPriority:(BOOL)arg1 ;
-(BOOL)_prepareAndLaunchSyncTask:(id*)arg1 ;
-(void)_disabledSchedulerForForceSyncTaskIfNecessary;
-(void)_reenableSchedulerForForceSyncTaskIfNecessary;
-(BOOL)_checkForegroundAtLaunchForForceSyncTask;
-(void)launchForceSyncTaskWhenPossible:(id)arg1 ;
-(void)_launchForceSyncTaskIfNecessary;
-(id)_descriptionForSetupTasks;
-(BOOL)_launchSetupTask;
-(void)_cancelAllTasksForSetup;
-(BOOL)_didFinishSetupTaskWithError:(id)arg1 shouldStop:(BOOL*)arg2 ;
-(id)_descriptionForCleanupTasks;
-(BOOL)_launchNecessaryTasksForCleanup;
-(void)_cancelAllTasksForCleanup;
-(float)_progressForCleanupTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishCleanupTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForPullScopesTasks;
-(BOOL)_launchNecessaryTasksForPullScopes;
-(void)_cancelAllTasksForPullScopes;
-(float)_progressForPullScopesTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishPullScopesTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForTransportUpdateTasks;
-(BOOL)_launchNecessaryTasksForTransportUpdate;
-(void)_cancelAllTasksForTransportUpdate;
-(float)_progressForTransportUpdateTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishTransportUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForScopeUpdateTasks;
-(BOOL)_launchNecessaryTasksForScopeUpdate;
-(void)_cancelAllTasksForScopeUpdate;
-(float)_progressForScopeUpdateTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishScopeUpdateTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForPushHighPriorityTasks;
-(BOOL)_launchNecessaryTasksForPushHighPriority;
-(void)_cancelAllTasksForPushHighPriority:(BOOL)arg1 ;
-(float)_progressForPushHighPriorityTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishPushHighPriorityTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForPushTasks;
-(BOOL)_launchNecessaryTasksForPush;
-(void)_cancelAllTasksForPush:(BOOL)arg1 ;
-(float)_progressForPushTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishPushTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForPullTasks;
-(BOOL)_launchNecessaryTasksForPull;
-(void)_cancelAllTasksForPull;
-(float)_progressForPullTask:(id)arg1 progress:(float)arg2 ;
-(void)_retainPowerAssertionForMingleTaskIfNecessary;
-(void)_releasePowerAssertionForMingleTaskIfNecessary;
-(BOOL)_didFinishPullTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(id)_descriptionForBackgroundDownloadsTasks;
-(BOOL)_launchNecessaryTasksForBackgroundDownloads;
-(void)_cancelAllTasksForBackgroundDownloads;
-(float)_progressForBackgroundDownloadsTask:(id)arg1 progress:(float)arg2 ;
-(BOOL)_didFinishBackgroundDownloadsTask:(id)arg1 withError:(id)arg2 shouldStop:(BOOL*)arg3 ;
-(void)beginClientWork:(id)arg1 ;
-(void)endClientWork:(id)arg1 ;
-(BOOL)shouldTryToMingleImmediately;
-(void)setShouldTryToMingleImmediately:(BOOL)arg1 ;
@end

