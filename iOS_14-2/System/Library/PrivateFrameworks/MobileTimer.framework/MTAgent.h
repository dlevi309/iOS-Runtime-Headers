/*
* Generated on Thursday, January 14, 2021 at 2:23:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
*/

#import <libobjc.A.dylib/MTAgentDiagnosticDelegate.h>
#import <libobjc.A.dylib/MTSystemStateDelegate.h>

@protocol NAScheduler, MTNotificationCenter;
@class MTSleepManager, NSDate, MTAgentNotificationManager, MTSystemStateListener, MTLanguageChangeListener, MTAgentDiagnosticListener, MTTimeListener, MTAlarmServer, MTAlarmScheduler, MTAlarmSnapshot, MTAlarmStorage, MTTimerServer, MTTimerScheduler, MTTimerSnapshot, MTTimerStorage, MTAlarmIntentDonor, MTTimerIntentDonor, MTCoreDuetMonitor, MTSleepCoordinator, MTSleepModeMonitor, MTSleepSessionManager, MTSleepSessionTracker, MTAlarmSyncDataModel, MTMetrics, NSString;

@interface MTAgent : NSObject <MTAgentDiagnosticDelegate, MTSystemStateDelegate> {

	BOOL _systemReady;
	MTSleepManager* _sleepManager;
	NSDate* _launchDate;
	id<NAScheduler> _serializer;
	MTAgentNotificationManager* _notificationManager;
	MTSystemStateListener* _systemStateListener;
	MTLanguageChangeListener* _languageChangeListener;
	MTAgentDiagnosticListener* _diagnostics;
	MTTimeListener* _timeListener;
	MTAlarmServer* _alarmServer;
	MTAlarmScheduler* _alarmScheduler;
	MTAlarmSnapshot* _alarmSnapshot;
	MTAlarmStorage* _alarmStorage;
	MTTimerServer* _timerServer;
	MTTimerScheduler* _timerScheduler;
	MTTimerSnapshot* _timerSnapshot;
	MTTimerStorage* _timerStorage;
	id<MTNotificationCenter> _notificationCenter;
	MTAlarmIntentDonor* _alarmIntentDonor;
	MTTimerIntentDonor* _timerIntentDonor;
	MTCoreDuetMonitor* _coreDuetMonitor;
	MTSleepCoordinator* _sleepCoordinator;
	MTSleepModeMonitor* _sleepModeMonitor;
	MTSleepSessionManager* _sleepSessionManager;
	MTSleepSessionTracker* _sleepSessionTracker;
	MTAlarmSyncDataModel* _alarmSyncDataModel;
	MTMetrics* _syncMetrics;

}

@property (nonatomic,retain) NSDate * launchDate;                                            //@synthesize launchDate=_launchDate - In the implementation block
@property (assign,nonatomic) BOOL systemReady;                                               //@synthesize systemReady=_systemReady - In the implementation block
@property (nonatomic,retain) id<NAScheduler> serializer;                                     //@synthesize serializer=_serializer - In the implementation block
@property (nonatomic,retain) MTAgentNotificationManager * notificationManager;               //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,retain) MTSystemStateListener * systemStateListener;                    //@synthesize systemStateListener=_systemStateListener - In the implementation block
@property (nonatomic,retain) MTLanguageChangeListener * languageChangeListener;              //@synthesize languageChangeListener=_languageChangeListener - In the implementation block
@property (nonatomic,retain) MTAgentDiagnosticListener * diagnostics;                        //@synthesize diagnostics=_diagnostics - In the implementation block
@property (nonatomic,retain) MTTimeListener * timeListener;                                  //@synthesize timeListener=_timeListener - In the implementation block
@property (nonatomic,retain) MTAlarmServer * alarmServer;                                    //@synthesize alarmServer=_alarmServer - In the implementation block
@property (nonatomic,retain) MTAlarmScheduler * alarmScheduler;                              //@synthesize alarmScheduler=_alarmScheduler - In the implementation block
@property (nonatomic,retain) MTAlarmSnapshot * alarmSnapshot;                                //@synthesize alarmSnapshot=_alarmSnapshot - In the implementation block
@property (nonatomic,retain) MTAlarmStorage * alarmStorage;                                  //@synthesize alarmStorage=_alarmStorage - In the implementation block
@property (nonatomic,retain) MTTimerServer * timerServer;                                    //@synthesize timerServer=_timerServer - In the implementation block
@property (nonatomic,retain) MTTimerScheduler * timerScheduler;                              //@synthesize timerScheduler=_timerScheduler - In the implementation block
@property (nonatomic,retain) MTTimerSnapshot * timerSnapshot;                                //@synthesize timerSnapshot=_timerSnapshot - In the implementation block
@property (nonatomic,retain) MTTimerStorage * timerStorage;                                  //@synthesize timerStorage=_timerStorage - In the implementation block
@property (nonatomic,retain) id<MTNotificationCenter> notificationCenter;                    //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (nonatomic,retain) MTAlarmIntentDonor * alarmIntentDonor;                          //@synthesize alarmIntentDonor=_alarmIntentDonor - In the implementation block
@property (nonatomic,retain) MTTimerIntentDonor * timerIntentDonor;                          //@synthesize timerIntentDonor=_timerIntentDonor - In the implementation block
@property (nonatomic,retain) MTCoreDuetMonitor * coreDuetMonitor;                            //@synthesize coreDuetMonitor=_coreDuetMonitor - In the implementation block
@property (nonatomic,retain) MTSleepCoordinator * sleepCoordinator;                          //@synthesize sleepCoordinator=_sleepCoordinator - In the implementation block
@property (nonatomic,retain) MTSleepModeMonitor * sleepModeMonitor;                          //@synthesize sleepModeMonitor=_sleepModeMonitor - In the implementation block
@property (nonatomic,retain) MTSleepSessionManager * sleepSessionManager;                    //@synthesize sleepSessionManager=_sleepSessionManager - In the implementation block
@property (nonatomic,retain) MTSleepSessionTracker * sleepSessionTracker;                    //@synthesize sleepSessionTracker=_sleepSessionTracker - In the implementation block
@property (nonatomic,retain) MTAlarmSyncDataModel * alarmSyncDataModel;                      //@synthesize alarmSyncDataModel=_alarmSyncDataModel - In the implementation block
@property (nonatomic,retain) MTMetrics * syncMetrics;                                        //@synthesize syncMetrics=_syncMetrics - In the implementation block
@property (nonatomic,readonly) MTSleepManager * sleepManager;                                //@synthesize sleepManager=_sleepManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)agent;
-(void)setSerializer:(id<NAScheduler>)arg1 ;
-(MTAgentDiagnosticListener *)diagnostics;
-(void)setDiagnostics:(MTAgentDiagnosticListener *)arg1 ;
-(void)setNotificationCenter:(id<MTNotificationCenter>)arg1 ;
-(void)_setupSecondaryListeners;
-(BOOL)systemReady;
-(NSDate *)launchDate;
-(id)gatherDiagnostics;
-(void)_setupTimers;
-(void)printDiagnostics;
-(MTAlarmStorage *)alarmStorage;
-(void)handleMigrationFinish;
-(id)init;
-(void)setTimeListener:(MTTimeListener *)arg1 ;
-(void)setAlarmIntentDonor:(MTAlarmIntentDonor *)arg1 ;
-(id<MTNotificationCenter>)notificationCenter;
-(void)_setupSync;
-(MTSleepCoordinator *)sleepCoordinator;
-(MTSleepSessionTracker *)sleepSessionTracker;
-(void)setLaunchDate:(NSDate *)arg1 ;
-(void)setSleepSessionManager:(MTSleepSessionManager *)arg1 ;
-(id<NAScheduler>)serializer;
-(void)handleF5Reset;
-(void)setTimerStorage:(MTTimerStorage *)arg1 ;
-(MTTimerScheduler *)timerScheduler;
-(MTCoreDuetMonitor *)coreDuetMonitor;
-(void)_setupNotificationCenter;
-(MTTimerServer *)timerServer;
-(id)_diagnosticProviders;
-(void)setCoreDuetMonitor:(MTCoreDuetMonitor *)arg1 ;
-(MTAgentNotificationManager *)notificationManager;
-(void)setAlarmSnapshot:(MTAlarmSnapshot *)arg1 ;
-(void)setSleepCoordinator:(MTSleepCoordinator *)arg1 ;
-(void)setAlarmScheduler:(MTAlarmScheduler *)arg1 ;
-(MTAlarmScheduler *)alarmScheduler;
-(MTSleepModeMonitor *)sleepModeMonitor;
-(MTAlarmSnapshot *)alarmSnapshot;
-(void)setSystemReady:(BOOL)arg1 ;
-(MTTimerSnapshot *)timerSnapshot;
-(void)setSyncMetrics:(MTMetrics *)arg1 ;
-(MTAlarmServer *)alarmServer;
-(void)_setupAlarms;
-(void)setSystemStateListener:(MTSystemStateListener *)arg1 ;
-(void)setTimerScheduler:(MTTimerScheduler *)arg1 ;
-(void)setNotificationManager:(MTAgentNotificationManager *)arg1 ;
-(void)setAlarmSyncDataModel:(MTAlarmSyncDataModel *)arg1 ;
-(void)setTimerServer:(MTTimerServer *)arg1 ;
-(void)setSleepSessionTracker:(MTSleepSessionTracker *)arg1 ;
-(MTAlarmIntentDonor *)alarmIntentDonor;
-(void)setTimerSnapshot:(MTTimerSnapshot *)arg1 ;
-(void)setTimerIntentDonor:(MTTimerIntentDonor *)arg1 ;
-(void)_setupInitialListeners;
-(MTSleepSessionManager *)sleepSessionManager;
-(MTLanguageChangeListener *)languageChangeListener;
-(void)restoreDidFinish;
-(MTTimerIntentDonor *)timerIntentDonor;
-(void)setSleepModeMonitor:(MTSleepModeMonitor *)arg1 ;
-(MTAlarmSyncDataModel *)alarmSyncDataModel;
-(MTSleepManager *)sleepManager;
-(MTSystemStateListener *)systemStateListener;
-(void)setAlarmStorage:(MTAlarmStorage *)arg1 ;
-(void)setAlarmServer:(MTAlarmServer *)arg1 ;
-(void)setLanguageChangeListener:(MTLanguageChangeListener *)arg1 ;
-(MTTimerStorage *)timerStorage;
-(MTMetrics *)syncMetrics;
-(MTTimeListener *)timeListener;
@end

