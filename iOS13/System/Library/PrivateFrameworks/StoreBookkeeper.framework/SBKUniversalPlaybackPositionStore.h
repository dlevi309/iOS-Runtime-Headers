/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
*/


@protocol OS_dispatch_queue, SBKUniversalPlaybackPositionDataSource;
@class NSObject, NSMutableArray, NSString, SBKAsynchronousTask, SBKRequestHandler, NSDate, NSTimer;

@interface SBKUniversalPlaybackPositionStore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _isActive;
	BOOL _hasLocalChangesToSync;
	NSMutableArray* _pendingTaskBlocks;
	NSString* _domain;
	unsigned long long _automaticSynchronizeOptions;
	double _initialAutosyncInterval;
	double _pollingLimitFromBag;
	double _autorefreshInterval;
	BOOL _refreshTimerActive;
	id _accountsObserver;
	id _prefsObserver;
	id<SBKUniversalPlaybackPositionDataSource> _dataSource;
	SBKAsynchronousTask* _currentTask;
	SBKAsynchronousTask* _lookupDomainVersionTask;
	SBKAsynchronousTask* _bagLookupTask;
	SBKRequestHandler* _currentTaskRequestHandler;
	NSDate* _dateToFireNextTimer;
	NSTimer* _timer;

}

@property (retain) SBKAsynchronousTask * currentTask;                                           //@synthesize currentTask=_currentTask - In the implementation block
@property (retain) SBKAsynchronousTask * lookupDomainVersionTask;                               //@synthesize lookupDomainVersionTask=_lookupDomainVersionTask - In the implementation block
@property (retain) SBKAsynchronousTask * bagLookupTask;                                         //@synthesize bagLookupTask=_bagLookupTask - In the implementation block
@property (retain) SBKRequestHandler * currentTaskRequestHandler;                               //@synthesize currentTaskRequestHandler=_currentTaskRequestHandler - In the implementation block
@property (retain) NSDate * dateToFireNextTimer;                                                //@synthesize dateToFireNextTimer=_dateToFireNextTimer - In the implementation block
@property (retain) NSTimer * timer;                                                             //@synthesize timer=_timer - In the implementation block
@property (__weak,readonly) id<SBKUniversalPlaybackPositionDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) unsigned long long automaticSynchronizeOptions; 
@property (assign) BOOL hasLocalChangesToSync; 
+(id)keyValueStoreItemIdentifierForItem:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id<SBKUniversalPlaybackPositionDataSource>)dataSource;
-(SBKAsynchronousTask *)currentTask;
-(void)setCurrentTask:(SBKAsynchronousTask *)arg1 ;
-(void)_timerFired:(id)arg1 ;
-(void)becomeActive;
-(void)resignActive;
-(void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDateToFireNextTimer:(NSDate *)arg1 ;
-(void)_updateAutorefreshRateSettingAndRestartTimer:(BOOL)arg1 ;
-(void)_onQueueLoadBagContextWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_updateForStoreAccountsChange;
-(id)initWithInitialUpdateDelay:(double)arg1 ;
-(void)_onQueueStopTimer;
-(void)_onQueueStartNewTimerWithTimeIntervalSinceNow:(double)arg1 ;
-(SBKAsynchronousTask *)bagLookupTask;
-(SBKAsynchronousTask *)lookupDomainVersionTask;
-(void)_onQueueSuspendTimer;
-(BOOL)_automaticallySynchronizeOnBecomeActive;
-(void)_onQueueResumeTimer;
-(void)_onQueueUpdateTimerForActiveChanges;
-(BOOL)_automaticallySynchronizeLocalChangesOnResignActive;
-(void)_onQueueSynchronizeWithAutosynchronizeMask:(unsigned long long)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)_onQueueUpdateTimerForAutomaticSyncOptionChanges;
-(unsigned long long)automaticSynchronizeOptions;
-(void)setAutomaticSynchronizeOptions:(unsigned long long)arg1 ;
-(void)_onQueueSynchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_onQueuePushMetadataItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_onQueuePullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)_accountForSyncing;
-(void)_onQueueLoadRemoteDomainVersionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)_onQueueRunTaskWithName:(id)arg1 taskCompletionHandler:(/*^block*/id)arg2 runTaskBlock:(/*^block*/id)arg3 ;
-(void)_onQueueStartNewTimer;
-(void)_onQueueRunNextPendingTaskBlock;
-(double)_effectiveAutorefreshRate;
-(void)_updateSettingsFromLoadedBagContext:(id)arg1 ;
-(NSDate *)dateToFireNextTimer;
-(BOOL)_timerIsStopped;
-(void)_onQueueScheduleTimer;
-(void)deprecated_setDataSource:(id)arg1 ;
-(id)initWithDomain:(id)arg1 dataSource:(id)arg2 automaticSynchronizeOptions:(unsigned long long)arg3 isActive:(BOOL)arg4 ;
-(void)setHasLocalChangesToSync:(BOOL)arg1 ;
-(BOOL)hasLocalChangesToSync;
-(void)setAutomaticallySynchronizeLocalChangesOnResignActive:(BOOL)arg1 ;
-(BOOL)automaticallySynchronizeLocalChangesOnResignActive;
-(void)setAutomaticallySynchronizeOnBecomeActive:(BOOL)arg1 ;
-(BOOL)automaticallySynchronizeOnBecomeActive;
-(void)pushMetadataItem:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)pullMetadataItemWithItemIdentifier:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)synchronizeImmediatelyWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)checkForAvailabilityWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadRemoteDomainVersionWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)loadBagContextWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)setLookupDomainVersionTask:(SBKAsynchronousTask *)arg1 ;
-(void)setBagLookupTask:(SBKAsynchronousTask *)arg1 ;
-(SBKRequestHandler *)currentTaskRequestHandler;
-(void)setCurrentTaskRequestHandler:(SBKRequestHandler *)arg1 ;
@end
