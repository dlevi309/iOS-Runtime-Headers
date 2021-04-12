/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue;
@class NSObject, _PASQueueLock, _PASLock, PETScalarEventTracker, NSUserDefaults;

@interface _ATXAppLaunchMonitor : NSObject {

	NSObject*<OS_dispatch_queue> _appLaunchHistoryQueue;
	NSObject*<OS_dispatch_queue> _logQueue;
	_PASQueueLock* _history;
	_PASLock* _cdContext;
	PETScalarEventTracker* _updateLaunchHistoryTracker;
	NSUserDefaults* _userDefaults;

}
+(void)_logPredictionForBundleId:(id)arg1 launchReason:(id)arg2 consumerType:(unsigned long long)arg3 consumerSubType:(unsigned char)arg4 ;
+(void)mergeAppLaunches:(id)arg1 andBacklightTransitions:(id)arg2 callingAppLaunchBlock:(/*^block*/id)arg3 ;
+(void)logAppLaunchForBundleId:(id)arg1 launchReason:(id)arg2 ;
+(void)_logAppLaunch:(id)arg1 from:(unsigned long long)arg2 ;
-(id)init;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)clearHistory;
-(id)initWithInMemoryStore;
-(id)initWithAppInfoManager:(id)arg1 appLaunchHistogramManager:(id)arg2 appLaunchSequenceManager:(id)arg3 appDailyDose:(id)arg4 duetHelper:(id)arg5 ;
-(void)updateLaunchHistoryFromDuet;
-(void)updateLaunchHistoryFromDuet:(double)arg1 callback:(/*^block*/id)arg2 ;
-(void)registerForAppChange;
-(void)registerForBacklightChange;
-(void)processDonationsForPreviousAppSessionEndIfNeeded;
-(void)handleAppLaunchNotification:(id)arg1 reason:(id)arg2 date:(id)arg3 ;
-(void)handleBacklightChangeNotificationWithValue:(int)arg1 date:(id)arg2 ;
-(void)clearIntentHistogramHistory;
-(void)addLaunchWithBundleId:(id)arg1 date:(id)arg2 timeZone:(id)arg3 reason:(id)arg4 ;
-(void)_addSURFLaunchesDuringLastLaunchWithLockWitness:(id)arg1 ;
-(void)_addSurfLaunchesWithLockWitness:(id)arg1 betweenStartDate:(id)arg2 endDate:(id)arg3 ;
-(void)_addLaunchWithLockWitness:(id)arg1 bundleId:(id)arg2 date:(id)arg3 timeZone:(id)arg4 reason:(id)arg5 isExtension:(BOOL)arg6 ;
-(void)startDeltaRecording;
-(id)stopDeltaRecording;
-(id)appInfoManager;
-(id)appLaunchHistogramManager;
-(id)appLaunchSequenceManager;
-(void)swapDuetHelper:(id)arg1 ;
-(id)dailyDose;
-(void)_syncForTests;
@end

