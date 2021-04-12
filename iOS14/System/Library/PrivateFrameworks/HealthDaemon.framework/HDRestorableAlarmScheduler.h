/*
* Generated on Thursday, January 14, 2021 at 2:25:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/HDDiagnosticObject.h>
#import <libobjc.A.dylib/HDDatabaseProtectedDataObserver.h>
#import <libobjc.A.dylib/HDHealthDaemonReadyObserver.h>

@protocol OS_dispatch_queue;
@class HDProfile, NSObject, NSMapTable, HDXPCAlarm, NSDate, NSString;

@interface HDRestorableAlarmScheduler : NSObject <HDDiagnosticObject, HDDatabaseProtectedDataObserver, HDHealthDaemonReadyObserver> {

	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	int _significantTimeChangeNotificationToken;
	NSMapTable* _clients;
	BOOL _hasInitializedSystemScheduler;
	BOOL _maintenanceOperationQueued;
	BOOL _needsMaintenanceNotifyAndSchedule;
	BOOL _needsLockStateUpdates;
	BOOL _isDeviceOnWrist;
	BOOL _isRegisteredForOnWristUpdates;
	BOOL _isRegisteredForLockStateUpdates;
	HDXPCAlarm* _systemScheduler;
	NSDate* __unitTest_currentDate;

}

@property (nonatomic,copy) NSDate * _unitTest_currentDate;                        //@synthesize _unitTest_currentDate=__unitTest_currentDate - In the implementation block
@property (nonatomic,readonly) BOOL isRegisteredForOnWristUpdates;                //@synthesize isRegisteredForOnWristUpdates=_isRegisteredForOnWristUpdates - In the implementation block
@property (nonatomic,readonly) BOOL isRegisteredForLockStateUpdates;              //@synthesize isRegisteredForLockStateUpdates=_isRegisteredForLockStateUpdates - In the implementation block
@property (nonatomic,readonly) HDXPCAlarm * systemScheduler;                      //@synthesize systemScheduler=_systemScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)removeAlarm:(id)arg1 ;
-(void)daemonReady:(id)arg1 ;
-(HDXPCAlarm *)systemScheduler;
-(BOOL)scheduleEvents:(id)arg1 error:(id*)arg2 ;
-(void)addAlarm:(id)arg1 ;
-(NSDate *)_unitTest_currentDate;
-(id)initWithProfile:(id)arg1 ;
-(void)_queue_updateProtectedDataObserverStateIfRequired;
-(void)_queue_beginReceivingSystemEventsIfNecessary;
-(id)_currentDate;
-(void)_queue_processDueEventsWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_fetchCurrentWristStateWithCompletion:(/*^block*/id)arg1 ;
-(id)scheduledEventsForClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_queue_runMaintenanceNotifyAndScheduleWithReason:(id)arg1 ;
-(void)_startObservingSignificantTimeChangeNotification;
-(void)_queue_enqueueMaintenanceNotifyAndScheduleWithReason:(id)arg1 ;
-(BOOL)removeEvents:(id)arg1 error:(id*)arg2 ;
-(BOOL)_performWriteTransactionAndFireEventsWithError:(id*)arg1 block:(/*^block*/id)arg2 ;
-(NSString *)description;
-(id)diagnosticDescription;
-(BOOL)removeAllEventsWithClientIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)_queue_registerForWristStateUpdates:(BOOL)arg1 ;
-(void)_queue_setNeedsMaintenanceNotifyAndSchedule:(BOOL)arg1 ;
-(void)_queue_significantTimeChangeDidOccur;
-(BOOL)_enumerateAllAlarmEventsWithError:(id*)arg1 enumerationHandler:(/*^block*/id)arg2 ;
-(void)checkForDueEventsImmediatelyWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_registerForLockStateUpdates:(BOOL)arg1 ;
-(BOOL)isRegisteredForLockStateUpdates;
-(BOOL)_queue_notifyClientsOfDueEventsAndScheduleNextFireDateWithError:(id*)arg1 ;
-(BOOL)replaceAllScheduledEventsWithClientIdentifier:(id)arg1 newEvents:(id)arg2 error:(id*)arg3 ;
-(BOOL)isRegisteredForOnWristUpdates;
-(void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2 ;
-(void)_stopObservingSignificantTimeChangeNotification;
-(void)dealloc;
-(void)set_unitTest_currentDate:(NSDate *)arg1 ;
@end

