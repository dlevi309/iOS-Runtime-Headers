/*
* Generated on Thursday, January 14, 2021 at 2:24:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
*/


@protocol IMCloudKitEventHandlerAccountInfoProvider;
@class IMWeakReferenceCollection, IMEventNotificationManager, NSTimer, IMCloudKitSyncState, IMCloudKitSyncProgress;

@interface IMCloudKitEventNotificationManager : NSObject {

	id<IMCloudKitEventHandlerAccountInfoProvider> _accountInfoProvider;
	double _progressPollingInterval;
	IMWeakReferenceCollection* _eventHandlers;
	IMEventNotificationManager* _notificationManager;
	NSTimer* _fetchStatsTimer;
	IMCloudKitSyncState* _previousState;
	IMCloudKitSyncProgress* _progressToSend;

}

@property (readonly) IMWeakReferenceCollection * eventHandlers;                                    //@synthesize eventHandlers=_eventHandlers - In the implementation block
@property (retain) IMEventNotificationManager * notificationManager;                               //@synthesize notificationManager=_notificationManager - In the implementation block
@property (__weak) NSTimer * fetchStatsTimer;                                                      //@synthesize fetchStatsTimer=_fetchStatsTimer - In the implementation block
@property (retain) IMCloudKitSyncState * previousState;                                            //@synthesize previousState=_previousState - In the implementation block
@property (retain) IMCloudKitSyncProgress * progressToSend;                                        //@synthesize progressToSend=_progressToSend - In the implementation block
@property (__weak) id<IMCloudKitEventHandlerAccountInfoProvider> accountInfoProvider;              //@synthesize accountInfoProvider=_accountInfoProvider - In the implementation block
@property (assign) BOOL didPromptForCloudKitSync; 
@property (assign) double progressPollingInterval;                                                 //@synthesize progressPollingInterval=_progressPollingInterval - In the implementation block
@property (readonly) IMCloudKitSyncState * syncState; 
+(id)sharedInstance;
+(void)__setSingleton__im:(id)arg1 ;
+(id)__singleton__im;
+(id)logHandle;
-(IMCloudKitSyncState *)syncState;
-(IMCloudKitSyncState *)previousState;
-(IMWeakReferenceCollection *)eventHandlers;
-(id)cloudKitHooks;
-(id)init;
-(void)setPreviousState:(IMCloudKitSyncState *)arg1 ;
-(IMEventNotificationManager *)notificationManager;
-(void)removeEventHandler:(id)arg1 ;
-(void)setAccountInfoProvider:(id<IMCloudKitEventHandlerAccountInfoProvider>)arg1 ;
-(id)logHandle;
-(void)setNotificationManager:(IMEventNotificationManager *)arg1 ;
-(void)setProgressPollingInterval:(double)arg1 ;
-(double)progressPollingInterval;
-(void)fetchSyncState;
-(void)fetchSyncStateAfterClearingErrorsWithRepairSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)addEventHandler:(id)arg1 ;
-(void)fetchRampStateWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSyncStateWithCompletion:(/*^block*/id)arg1 ;
-(void)setCloudKitSyncEnabled:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_syncStateDidChange:(id)arg1 ;
-(BOOL)accountHasiMessageEnabled;
-(void)visitEventHandlers:(/*^block*/id)arg1 ;
-(id)syncStateWithDictionary:(id)arg1 ;
-(void)_sendSyncStateChangedEventToEventListeners:(id)arg1 ;
-(void)_updateProgressWithState:(id)arg1 ;
-(void)startInitialSync;
-(id<IMCloudKitEventHandlerAccountInfoProvider>)accountInfoProvider;
-(void)performAdditionalStorageRequiredCheck;
-(void)fetchSyncStateStatistics;
-(void)_sendSyncStatisticsToEventHandlers:(id)arg1 error:(id)arg2 ;
-(void)_fetchSyncStateStatistics:(/*^block*/id)arg1 ;
-(NSTimer *)fetchStatsTimer;
-(void)setFetchStatsTimer:(NSTimer *)arg1 ;
-(void)_cancelStatsFetchingTimer;
-(void)_timerExpiredForSyncStatsFetching:(id)arg1 ;
-(IMCloudKitSyncProgress *)progressToSend;
-(void)setProgressToSend:(IMCloudKitSyncProgress *)arg1 ;
-(double)progressBroadcastDelay;
-(void)_sendProgressToEventListenersDeferred;
-(void)_sendProgressToEventListeners:(id)arg1 ;
-(BOOL)_hasProgressEventListeners;
-(void)_rescheduleFetchSyncProgress;
-(void)_sendHiddenProgressToEventListeners;
-(void)fetchSyncStateAfterFetchingAccountStatus;
-(void)fetchSyncStateAfterClearingErrors;
-(void)setCloudKitSyncEnabled:(BOOL)arg1 ;
-(void)startPeriodicSync;
-(BOOL)didPromptForCloudKitSync;
-(void)setDidPromptForCloudKitSync:(BOOL)arg1 ;
-(void)disableAllSyncEnabledCloudKitDevices;
-(void)fetchSyncStateStatisticsWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchSyncDebuggingInfo:(id)arg1 ;
@end

