/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <SleepDaemon/SleepDaemon-Structs.h>
#import <libobjc.A.dylib/HDSPDiagnosticsProvider.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineDelegate.h>
#import <libobjc.A.dylib/HDSPEnvironmentStateMachineInfoProvider.h>
#import <libobjc.A.dylib/HDSPSystemReadyDelegate.h>

@protocol HKSPUserDefaults, HKSPQueueBackedScheduler;
@class _HKBehavior, HDSPSleepScheduleModelManager, HDSPSleepStorage, HDSPSleepEventScheduler, HDSPSleepScheduleStateCoordinator, HDSPSleepModeManager, HDSPSleepTrackingManager, HDSPSleepActionManager, HDSPSleepNotificationManager, HDSPEnvironmentStateMachine, NAFuture, HDSPSleepStoreServer, HDSPGoodMorningAlertManager, HDSPChargingReminderManager, HDSPWakeDetectionManager, HDSPWakeUpResultsNotificationManager, HDSPSleepAlarmManager, HKSPHealthStoreProvider, HDSPDiagnostics, HDSPNotificationListener, HDSPSleepLockScreenManager, HDSPSystemMonitor, HDSPAssertionManager, HDSPTimeChangeListener, HKSPSensitiveUIMonitor, HDSPSleepScheduleModelMigrationManager, HDSPContextStoreManager, HDSPDoNotDisturbManager, HDSPIDSServiceManager, HDSPAnalyticsManager, NSString;

@interface HDSPEnvironment : NSObject <HDSPDiagnosticsProvider, HDSPEnvironmentStateMachineDelegate, HDSPEnvironmentStateMachineInfoProvider, HDSPSystemReadyDelegate> {

	os_unfair_lock_s _stateMachineLock;
	_HKBehavior* _behavior;
	HDSPSleepScheduleModelManager* _sleepScheduleModelManager;
	HDSPSleepStorage* _sleepStorage;
	HDSPSleepEventScheduler* _sleepScheduler;
	HDSPSleepScheduleStateCoordinator* _sleepCoordinator;
	HDSPSleepModeManager* _sleepModeManager;
	HDSPSleepTrackingManager* _sleepTrackingManager;
	HDSPSleepActionManager* _actionManager;
	HDSPSleepNotificationManager* _notificationManager;
	HDSPEnvironmentStateMachine* _stateMachine;
	NAFuture* _environmentIsReady;
	/*^block*/id _currentDateProvider;
	id<HKSPUserDefaults> _userDefaults;
	HDSPSleepStoreServer* _sleepServer;
	HDSPGoodMorningAlertManager* _goodMorningAlertManager;
	HDSPChargingReminderManager* _chargingReminderManager;
	HDSPWakeDetectionManager* _wakeDetectionManager;
	HDSPWakeUpResultsNotificationManager* _wakeUpResultsNotificationManager;
	HDSPSleepAlarmManager* _sleepAlarmManager;
	HKSPHealthStoreProvider* _healthStoreProvider;
	HDSPDiagnostics* _diagnostics;
	HDSPNotificationListener* _notificationListener;
	HDSPSleepLockScreenManager* _sleepLockScreenManager;
	HDSPSystemMonitor* _systemMonitor;
	HDSPAssertionManager* _assertionManager;
	HDSPTimeChangeListener* _timeChangeListener;
	HKSPSensitiveUIMonitor* _sensitiveUIMonitor;
	HDSPSleepScheduleModelMigrationManager* _migrationManager;
	HDSPContextStoreManager* _contextStoreManager;
	HDSPDoNotDisturbManager* _doNotDisturbManager;
	HDSPIDSServiceManager* _idsServiceManager;
	id<HKSPQueueBackedScheduler> _defaultCallbackScheduler;
	HDSPAnalyticsManager* _analyticsManager;

}

@property (nonatomic,readonly) HDSPEnvironmentStateMachine * stateMachine;                                           //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,readonly) os_unfair_lock_s stateMachineLock;                                                    //@synthesize stateMachineLock=_stateMachineLock - In the implementation block
@property (nonatomic,readonly) NAFuture * environmentIsReady;                                                        //@synthesize environmentIsReady=_environmentIsReady - In the implementation block
@property (nonatomic,readonly) BOOL isSystemReady; 
@property (nonatomic,readonly) BOOL isDisabled; 
@property (nonatomic,readonly) BOOL isDemoEnvironment; 
@property (nonatomic,copy,readonly) id currentDateProvider;                                                          //@synthesize currentDateProvider=_currentDateProvider - In the implementation block
@property (nonatomic,readonly) id<HKSPUserDefaults> userDefaults;                                                    //@synthesize userDefaults=_userDefaults - In the implementation block
@property (nonatomic,readonly) HDSPSleepStoreServer * sleepServer;                                                   //@synthesize sleepServer=_sleepServer - In the implementation block
@property (nonatomic,readonly) HDSPGoodMorningAlertManager * goodMorningAlertManager;                                //@synthesize goodMorningAlertManager=_goodMorningAlertManager - In the implementation block
@property (nonatomic,readonly) HDSPChargingReminderManager * chargingReminderManager;                                //@synthesize chargingReminderManager=_chargingReminderManager - In the implementation block
@property (nonatomic,readonly) HDSPWakeDetectionManager * wakeDetectionManager;                                      //@synthesize wakeDetectionManager=_wakeDetectionManager - In the implementation block
@property (nonatomic,readonly) HDSPWakeUpResultsNotificationManager * wakeUpResultsNotificationManager;              //@synthesize wakeUpResultsNotificationManager=_wakeUpResultsNotificationManager - In the implementation block
@property (nonatomic,readonly) HDSPSleepAlarmManager * sleepAlarmManager;                                            //@synthesize sleepAlarmManager=_sleepAlarmManager - In the implementation block
@property (nonatomic,readonly) HKSPHealthStoreProvider * healthStoreProvider;                                        //@synthesize healthStoreProvider=_healthStoreProvider - In the implementation block
@property (nonatomic,readonly) HDSPDiagnostics * diagnostics;                                                        //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,readonly) HDSPNotificationListener * notificationListener;                                      //@synthesize notificationListener=_notificationListener - In the implementation block
@property (nonatomic,readonly) HDSPSleepLockScreenManager * sleepLockScreenManager;                                  //@synthesize sleepLockScreenManager=_sleepLockScreenManager - In the implementation block
@property (nonatomic,readonly) HDSPSystemMonitor * systemMonitor;                                                    //@synthesize systemMonitor=_systemMonitor - In the implementation block
@property (nonatomic,readonly) HDSPAssertionManager * assertionManager;                                              //@synthesize assertionManager=_assertionManager - In the implementation block
@property (nonatomic,readonly) HDSPTimeChangeListener * timeChangeListener;                                          //@synthesize timeChangeListener=_timeChangeListener - In the implementation block
@property (nonatomic,readonly) HKSPSensitiveUIMonitor * sensitiveUIMonitor;                                          //@synthesize sensitiveUIMonitor=_sensitiveUIMonitor - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleModelMigrationManager * migrationManager;                            //@synthesize migrationManager=_migrationManager - In the implementation block
@property (nonatomic,readonly) HDSPContextStoreManager * contextStoreManager;                                        //@synthesize contextStoreManager=_contextStoreManager - In the implementation block
@property (nonatomic,readonly) HDSPDoNotDisturbManager * doNotDisturbManager;                                        //@synthesize doNotDisturbManager=_doNotDisturbManager - In the implementation block
@property (nonatomic,readonly) HDSPIDSServiceManager * idsServiceManager;                                            //@synthesize idsServiceManager=_idsServiceManager - In the implementation block
@property (nonatomic,readonly) id<HKSPQueueBackedScheduler> defaultCallbackScheduler;                                //@synthesize defaultCallbackScheduler=_defaultCallbackScheduler - In the implementation block
@property (nonatomic,readonly) HDSPAnalyticsManager * analyticsManager;                                              //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,readonly) BOOL isEnvironmentReady; 
@property (nonatomic,readonly) _HKBehavior * behavior;                                                               //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleModelManager * sleepScheduleModelManager;                            //@synthesize sleepScheduleModelManager=_sleepScheduleModelManager - In the implementation block
@property (nonatomic,readonly) HDSPSleepStorage * sleepStorage;                                                      //@synthesize sleepStorage=_sleepStorage - In the implementation block
@property (nonatomic,readonly) HDSPSleepEventScheduler * sleepScheduler;                                             //@synthesize sleepScheduler=_sleepScheduler - In the implementation block
@property (nonatomic,readonly) HDSPSleepScheduleStateCoordinator * sleepCoordinator;                                 //@synthesize sleepCoordinator=_sleepCoordinator - In the implementation block
@property (nonatomic,readonly) HDSPSleepModeManager * sleepModeManager;                                              //@synthesize sleepModeManager=_sleepModeManager - In the implementation block
@property (nonatomic,readonly) HDSPSleepTrackingManager * sleepTrackingManager;                                      //@synthesize sleepTrackingManager=_sleepTrackingManager - In the implementation block
@property (nonatomic,readonly) HDSPSleepActionManager * actionManager;                                               //@synthesize actionManager=_actionManager - In the implementation block
@property (nonatomic,readonly) HDSPSleepNotificationManager * notificationManager;                                   //@synthesize notificationManager=_notificationManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<NAScheduler> callbackScheduler; 
+(id)demoModeEnvironment;
+(id)standardEnvironment;
+(id)disabledEnvironment;
+(id)unitTestEnvironment;
-(id)diagnosticInfo;
-(HDSPDiagnostics *)diagnostics;
-(BOOL)isDemoEnvironment;
-(HDSPGoodMorningAlertManager *)goodMorningAlertManager;
-(HDSPSleepEventScheduler *)sleepScheduler;
-(HDSPContextStoreManager *)contextStoreManager;
-(HDSPWakeUpResultsNotificationManager *)wakeUpResultsNotificationManager;
-(HDSPDoNotDisturbManager *)doNotDisturbManager;
-(HDSPSleepScheduleModelManager *)sleepScheduleModelManager;
-(void)performWhenEnvironmentIsReady:(/*^block*/id)arg1 ;
-(id)currentState;
-(void)environmentShouldMigrateData;
-(HDSPSleepScheduleStateCoordinator *)sleepCoordinator;
-(void)_withLock:(/*^block*/id)arg1 ;
-(void)systemDidBecomeReady;
-(HDSPAssertionManager *)assertionManager;
-(void)environmentDidBecomeReady;
-(HDSPSleepStorage *)sleepStorage;
-(_HKBehavior *)behavior;
-(HDSPSystemMonitor *)systemMonitor;
-(id<HKSPQueueBackedScheduler>)defaultCallbackScheduler;
-(BOOL)isEnvironmentReady;
-(HDSPIDSServiceManager *)idsServiceManager;
-(BOOL)needsDataMigration;
-(HDSPWakeDetectionManager *)wakeDetectionManager;
-(HDSPSleepScheduleModelMigrationManager *)migrationManager;
-(HKSPSensitiveUIMonitor *)sensitiveUIMonitor;
-(os_unfair_lock_s)stateMachineLock;
-(HKSPHealthStoreProvider *)healthStoreProvider;
-(HDSPTimeChangeListener *)timeChangeListener;
-(HDSPChargingReminderManager *)chargingReminderManager;
-(BOOL)isDisabled;
-(id)currentDateProvider;
-(HDSPSleepNotificationManager *)notificationManager;
-(HDSPNotificationListener *)notificationListener;
-(HDSPSleepActionManager *)actionManager;
-(id)_environmentAwareComponents;
-(id)initWithBehavior:(id)arg1 sleepStorageProvider:(/*^block*/id)arg2 sleepScheduleModelManagerProvider:(/*^block*/id)arg3 sleepSchedulerProvider:(/*^block*/id)arg4 sleepServerProvider:(/*^block*/id)arg5 sleepCoordinatorProvider:(/*^block*/id)arg6 sleepModeManagerProvider:(/*^block*/id)arg7 sleepTrackingManagerProvider:(/*^block*/id)arg8 goodMorningAlertManagerProvider:(/*^block*/id)arg9 chargingReminderManagerProvider:(/*^block*/id)arg10 wakeDetectionManagerProvider:(/*^block*/id)arg11 wakeUpResultsNotificationManagerProvider:(/*^block*/id)arg12 actionManagerProvider:(/*^block*/id)arg13 sleepAlarmManagerProvider:(/*^block*/id)arg14 healthStoreProvider:(id)arg15 contextStoreManagerProvider:(/*^block*/id)arg16 doNotDisturbManagerProvider:(/*^block*/id)arg17 migrationManagerProvider:(/*^block*/id)arg18 notificationManagerProvider:(/*^block*/id)arg19 notificationListenerProvider:(/*^block*/id)arg20 sleepLockScreenManagerProvider:(/*^block*/id)arg21 idsServiceManagerProvider:(/*^block*/id)arg22 diagnosticsProvider:(/*^block*/id)arg23 systemMonitorProvider:(/*^block*/id)arg24 assertionManager:(id)arg25 timeChangeListenerProvider:(/*^block*/id)arg26 sensitiveUIMonitorProvider:(/*^block*/id)arg27 analyticsManagerProvider:(/*^block*/id)arg28 userDefaults:(id)arg29 currentDateProvider:(/*^block*/id)arg30 defaultCallbackScheduler:(id)arg31 ;
-(id<HKSPUserDefaults>)userDefaults;
-(BOOL)isSystemReady;
-(id<NAScheduler>)callbackScheduler;
-(HDSPSleepLockScreenManager *)sleepLockScreenManager;
-(HDSPAnalyticsManager *)analyticsManager;
-(NAFuture *)environmentIsReady;
-(void)performBlock:(/*^block*/id)arg1 withLock:(os_unfair_lock_s*)arg2 ;
-(HDSPSleepAlarmManager *)sleepAlarmManager;
-(void)updateState;
-(id)diagnosticDescription;
-(HDSPSleepTrackingManager *)sleepTrackingManager;
-(HDSPSleepStoreServer *)sleepServer;
-(HDSPEnvironmentStateMachine *)stateMachine;
-(HDSPSleepModeManager *)sleepModeManager;
-(void)prepare;
-(void)dealloc;
@end

