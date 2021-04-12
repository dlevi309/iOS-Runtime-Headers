/*
* Generated on Thursday, January 14, 2021 at 2:24:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
*/

#import <libobjc.A.dylib/CPLAbstractObject.h>
#import <libobjc.A.dylib/CPLEngineComponent.h>

@protocol OS_dispatch_queue;
@class CPLSyncSession, NSObject, NSDate, NSCountedSet, NSMutableDictionary, NSMutableSet, CPLPlatformObject, CPLEngineLibrary, NSString;

@interface CPLEngineScheduler : NSObject <CPLAbstractObject, CPLEngineComponent> {

	unsigned long long _requiredFirstState;
	unsigned long long _lastRequestGeneration;
	unsigned long long _currentRequestGeneration;
	CPLSyncSession* _nextSession;
	double _intervalForRetry;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentSyncState;
	unsigned long long _pendingRequiredFirstState;
	BOOL _shouldNoteServerHasChanges;
	CPLSyncSession* _currentSession;
	BOOL _opened;
	NSDate* _unavailabilityLimitDate;
	unsigned long long _foregroundCalls;
	NSCountedSet* _disablingReasons;
	NSCountedSet* _blockingElements;
	NSMutableDictionary* _blockedElements;
	NSMutableSet* _blockWaiters;
	NSCountedSet* _unblockOnceElements;
	NSObject*<OS_dispatch_queue> _blockingLock;
	unsigned long long _significantWorkCalls;
	unsigned long long _disablingMinglingCount;
	NSDate* _lastSyncSessionDateCausedByForeground;
	NSDate* _deferDate;
	BOOL _protectAgainstFastRelaunch;
	BOOL _didWriteFirstSyncMarker;
	BOOL _delayedFirstSyncBecauseOfRapidLaunch;
	BOOL _isOverridingForeground;
	CPLPlatformObject* _platformObject;
	CPLEngineLibrary* _engineLibrary;
	/*^block*/id _requiredStateObserverBlock;
	/*^block*/id _shouldBackOffOnErrorBlock;

}

@property (nonatomic,__weak,readonly) CPLEngineLibrary * engineLibrary;              //@synthesize engineLibrary=_engineLibrary - In the implementation block
@property (nonatomic,copy) id requiredStateObserverBlock;                            //@synthesize requiredStateObserverBlock=_requiredStateObserverBlock - In the implementation block
@property (nonatomic,copy) id shouldBackOffOnErrorBlock;                             //@synthesize shouldBackOffOnErrorBlock=_shouldBackOffOnErrorBlock - In the implementation block
@property (nonatomic,readonly) unsigned long long requiredState; 
@property (nonatomic,readonly) CPLPlatformObject * platformObject;                   //@synthesize platformObject=_platformObject - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformImplementationProtocol;
+(id)validElements;
-(void)openWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_backOff;
-(void)noteClientIsInBackground;
-(void)noteClientIsInForeground;
-(void)noteClientIsEndingSignificantWork;
-(void)noteClientIsBeginningSignificantWork;
-(CPLPlatformObject *)platformObject;
-(unsigned long long)requiredState;
-(id)componentName;
-(void)disableSynchronizationWithReason:(id)arg1 ;
-(void)enableSynchronizationWithReason:(id)arg1 ;
-(void)disableMingling;
-(void)enableMingling;
-(void)blockEngineElement:(id)arg1 ;
-(void)unblockEngineElement:(id)arg1 ;
-(void)unblockEngineElementOnce:(id)arg1 ;
-(void)getStatusWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getStatusDictionaryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)closeAndDeactivate:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEngineLibrary:(id)arg1 ;
-(CPLEngineLibrary *)engineLibrary;
-(void)_updateOverridingForeground;
-(void)_setRequiredFirstState:(unsigned long long)arg1 ;
-(BOOL)_syncSessionIsPossible;
-(void)_startSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 rewind:(BOOL)arg3 ;
-(void)_reallyStartSyncSession:(id)arg1 ;
-(void)_startRequiredSyncSession:(id)arg1 ;
-(void)_scheduleNextSyncSession;
-(void)_reallyUnscheduleSession;
-(void)_unscheduleNextSyncSession;
-(void)_noteSyncSessionNeededFromState:(unsigned long long)arg1 ;
-(void)startRequiredSyncSessionNow:(id)arg1 ;
-(void)forceStartSyncSession:(id)arg1 withMinimalPhase:(unsigned long long)arg2 ;
-(void)kickOffSyncSession;
-(void)noteStoreNeedsSetup;
-(void)noteStoreNeedsToUpdateDisabledFeatures;
-(void)noteStoreNeedsCleanup;
-(void)noteTransportNeedsUpdate;
-(void)noteScopeListNeedsUpdate;
-(void)noteScopeNeedsUpdate;
-(void)_disableFastRelaunchProtection;
-(void)noteScopeNeedsToPushHighPriorityToTransport;
-(void)noteScopeNeedsToPushToTransport;
-(void)noteScopeNeedsToPullFromTransport;
-(void)noteClientNeedsToPull;
-(void)noteClientIsInSyncWithClientCache;
-(void)noteClientIsNotInSyncWithClientCache;
-(void)_noteSyncSessionNeededFromStateDontRewindImmediately:(unsigned long long)arg1 ;
-(void)_reallyNoteServerHasChangesLocked;
-(void)noteServerHasChanges;
-(void)noteResourceDownloadQueueIsFull;
-(BOOL)isClientInForeground;
-(void)_disableSynchronizationWithReasonLocked:(id)arg1 ;
-(void)_enableSynchronizationWithReasonLocked:(id)arg1 ;
-(void)willRunEngineElement:(id)arg1 ;
-(void)waitForEngineElementToBeBlocked:(id)arg1 ;
-(BOOL)isMinglingEnabled;
-(BOOL)isSynchronizationDisabledWithReasonError:(id*)arg1 ;
-(void)_disableRetryAfterLocked;
-(void)_noteServerIsUnavailableWithErrorLocked:(id)arg1 ;
-(void)noteServerIsUnavailableWithError:(id)arg1 ;
-(void)noteNetworkStateDidChange;
-(void)noteSyncSession:(id)arg1 stateWillBeAttempted:(unsigned long long)arg2 ;
-(void)noteSyncSessionSucceeded:(id)arg1 ;
-(void)_handleResetClientCacheWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResetCloudCacheWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResetAnchorWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleResetGlobalAnchorWithError:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)noteSyncSession:(id)arg1 failedDuringPhase:(unsigned long long)arg2 withError:(id)arg3 ;
-(void)resetBackoffInterval;
-(void)getCurrentRequiredStateWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)_pathToFirstSynchronizationMarker;
-(void)_writeFirstSynchronizationMarker;
-(id)_minimalDateForFirstSync;
-(void)_resetFirstSynchronizationMarker;
-(id)requiredStateObserverBlock;
-(void)setRequiredStateObserverBlock:(id)arg1 ;
-(id)shouldBackOffOnErrorBlock;
-(void)setShouldBackOffOnErrorBlock:(id)arg1 ;
@end

