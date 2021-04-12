/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <PowerUI/PowerUISignalMonitorDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingPrivate.h>
#import <PowerUI/PowerUISmartChargeManaging.h>

@protocol _CDLocalContext, _DKKnowledgeQuerying_DKKnowledgeSaving, OS_os_log, OS_dispatch_queue, OS_dispatch_source;
@class NSString, _CDContextualKeyPath, UNUserNotificationCenter, NSObject, NSDate, NSDictionary, PowerUIMLTwoStageModelPredictor, NSArray, PowerUIBatteryMitigationManager, NSXPCListener, PowerUITrialManager;

@interface PowerUISmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingPrivate, PowerUISmartChargeManaging> {

	BOOL _enabled;
	BOOL _temporarilyDisabled;
	BOOL __hasLegitimateUsage;
	BOOL _lastChargerWasWireless;
	BOOL _firstNotificationRequested;
	BOOL _firstNotificationDisplayed;
	BOOL _progressNotificationsEnabled;
	BOOL _signalsIgnored;
	BOOL _overrideAllSignals;
	BOOL _encounteredTLCDuringTopOff;
	BOOL _isDesktopDevice;
	unsigned _service;
	int _powerlogToken;
	int _lastBatteryLevel;
	int _lastPluginStatus;
	int _lastFullyCharged;
	int _chargingStateNotification;
	id<_CDLocalContext> _context;
	id<_DKKnowledgeQuerying><_DKKnowledgeSaving> _knowledgeStore;
	NSString* _defaultsDomain;
	/*^block*/id _beforeBatteryCallback;
	/*^block*/id _afterBatteryCallback;
	_CDContextualKeyPath* _checkpointKP;
	UNUserNotificationCenter* _unCenter;
	NSObject*<OS_os_log> _log;
	unsigned long long _checkpoint;
	unsigned long long _currentState;
	NSDate* _disabledUntilDate;
	NSDate* __fullChargeDeadline;
	NSDate* _uiDeadline;
	NSDictionary* _signalDeadline;
	NSDate* _lastComputedSignalDeadline;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_dispatch_source> _timer;
	NSDate* _lastInterruptedTime;
	double _empiricalTimeToFullChargeDurationMinutes;
	NSString* _lastScheduledFullChargeNotificationID;
	long long _deadlineSignalID;
	unsigned long long _predictorType;
	long long _previousDecisionMakerID;
	NSDate* _previousDecisionMakerDate;
	PowerUIMLTwoStageModelPredictor* _modelTwoStagePredictor;
	NSArray* _monitors;
	NSDictionary* _powerLogStatus;
	NSDictionary* _previousPowerLogStatus;
	NSDate* _engagementTimeOverride;
	NSDate* _fullChargeDeadlineOverride;
	NSDate* _repeatEngagementOverrideEndDate;
	NSDate* _lastDesktopModeChangeDate;
	PowerUIBatteryMitigationManager* _batteryMitigationManager;
	NSXPCListener* _listener;
	PowerUITrialManager* _trialManager;

}

@property (nonatomic,retain) id<_CDLocalContext> context;                                              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) id<_DKKnowledgeQuerying><_DKKnowledgeSaving> knowledgeStore;              //@synthesize knowledgeStore=_knowledgeStore - In the implementation block
@property (nonatomic,retain) NSString * defaultsDomain;                                                //@synthesize defaultsDomain=_defaultsDomain - In the implementation block
@property (nonatomic,copy) id beforeBatteryCallback;                                                   //@synthesize beforeBatteryCallback=_beforeBatteryCallback - In the implementation block
@property (nonatomic,copy) id afterBatteryCallback;                                                    //@synthesize afterBatteryCallback=_afterBatteryCallback - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * checkpointKP;                                      //@synthesize checkpointKP=_checkpointKP - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * unCenter;                                      //@synthesize unCenter=_unCenter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                 //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) unsigned long long checkpoint;                                            //@synthesize checkpoint=_checkpoint - In the implementation block
@property (assign,nonatomic) unsigned service;                                                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                                          //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                             //@synthesize enabled=_enabled - In the implementation block
@property (retain) NSDate * disabledUntilDate;                                                         //@synthesize disabledUntilDate=_disabledUntilDate - In the implementation block
@property (assign,nonatomic) BOOL temporarilyDisabled;                                                 //@synthesize temporarilyDisabled=_temporarilyDisabled - In the implementation block
@property (nonatomic,retain) NSDate * _fullChargeDeadline;                                             //@synthesize _fullChargeDeadline=__fullChargeDeadline - In the implementation block
@property (nonatomic,retain) NSDate * uiDeadline;                                                      //@synthesize uiDeadline=_uiDeadline - In the implementation block
@property (nonatomic,retain) NSDictionary * signalDeadline;                                            //@synthesize signalDeadline=_signalDeadline - In the implementation block
@property (nonatomic,retain) NSDate * lastComputedSignalDeadline;                                      //@synthesize lastComputedSignalDeadline=_lastComputedSignalDeadline - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                                      //@synthesize timer=_timer - In the implementation block
@property (assign,nonatomic) int powerlogToken;                                                        //@synthesize powerlogToken=_powerlogToken - In the implementation block
@property (assign,nonatomic) BOOL _hasLegitimateUsage;                                                 //@synthesize _hasLegitimateUsage=__hasLegitimateUsage - In the implementation block
@property (assign,nonatomic) int lastBatteryLevel;                                                     //@synthesize lastBatteryLevel=_lastBatteryLevel - In the implementation block
@property (assign,nonatomic) int lastPluginStatus;                                                     //@synthesize lastPluginStatus=_lastPluginStatus - In the implementation block
@property (assign,nonatomic) int lastFullyCharged;                                                     //@synthesize lastFullyCharged=_lastFullyCharged - In the implementation block
@property (assign,nonatomic) BOOL lastChargerWasWireless;                                              //@synthesize lastChargerWasWireless=_lastChargerWasWireless - In the implementation block
@property (nonatomic,retain) NSDate * lastInterruptedTime;                                             //@synthesize lastInterruptedTime=_lastInterruptedTime - In the implementation block
@property (assign,nonatomic) double empiricalTimeToFullChargeDurationMinutes;                          //@synthesize empiricalTimeToFullChargeDurationMinutes=_empiricalTimeToFullChargeDurationMinutes - In the implementation block
@property (nonatomic,retain) NSString * lastScheduledFullChargeNotificationID;                         //@synthesize lastScheduledFullChargeNotificationID=_lastScheduledFullChargeNotificationID - In the implementation block
@property (assign,nonatomic) long long deadlineSignalID;                                               //@synthesize deadlineSignalID=_deadlineSignalID - In the implementation block
@property (assign,nonatomic) BOOL firstNotificationRequested;                                          //@synthesize firstNotificationRequested=_firstNotificationRequested - In the implementation block
@property (assign,nonatomic) BOOL firstNotificationDisplayed;                                          //@synthesize firstNotificationDisplayed=_firstNotificationDisplayed - In the implementation block
@property (assign,nonatomic) BOOL progressNotificationsEnabled;                                        //@synthesize progressNotificationsEnabled=_progressNotificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL signalsIgnored;                                                      //@synthesize signalsIgnored=_signalsIgnored - In the implementation block
@property (assign,nonatomic) unsigned long long predictorType;                                         //@synthesize predictorType=_predictorType - In the implementation block
@property (assign,nonatomic) long long previousDecisionMakerID;                                        //@synthesize previousDecisionMakerID=_previousDecisionMakerID - In the implementation block
@property (nonatomic,retain) NSDate * previousDecisionMakerDate;                                       //@synthesize previousDecisionMakerDate=_previousDecisionMakerDate - In the implementation block
@property (nonatomic,retain) PowerUIMLTwoStageModelPredictor * modelTwoStagePredictor;                 //@synthesize modelTwoStagePredictor=_modelTwoStagePredictor - In the implementation block
@property (nonatomic,retain) NSArray * monitors;                                                       //@synthesize monitors=_monitors - In the implementation block
@property (retain) NSDictionary * powerLogStatus;                                                      //@synthesize powerLogStatus=_powerLogStatus - In the implementation block
@property (retain) NSDictionary * previousPowerLogStatus;                                              //@synthesize previousPowerLogStatus=_previousPowerLogStatus - In the implementation block
@property (retain) NSDate * engagementTimeOverride;                                                    //@synthesize engagementTimeOverride=_engagementTimeOverride - In the implementation block
@property (retain) NSDate * fullChargeDeadlineOverride;                                                //@synthesize fullChargeDeadlineOverride=_fullChargeDeadlineOverride - In the implementation block
@property (retain) NSDate * repeatEngagementOverrideEndDate;                                           //@synthesize repeatEngagementOverrideEndDate=_repeatEngagementOverrideEndDate - In the implementation block
@property (assign,nonatomic) BOOL overrideAllSignals;                                                  //@synthesize overrideAllSignals=_overrideAllSignals - In the implementation block
@property (assign,nonatomic) BOOL encounteredTLCDuringTopOff;                                          //@synthesize encounteredTLCDuringTopOff=_encounteredTLCDuringTopOff - In the implementation block
@property (assign,nonatomic) BOOL isDesktopDevice;                                                     //@synthesize isDesktopDevice=_isDesktopDevice - In the implementation block
@property (nonatomic,retain) NSDate * lastDesktopModeChangeDate;                                       //@synthesize lastDesktopModeChangeDate=_lastDesktopModeChangeDate - In the implementation block
@property (nonatomic,retain) PowerUIBatteryMitigationManager * batteryMitigationManager;               //@synthesize batteryMitigationManager=_batteryMitigationManager - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                 //@synthesize listener=_listener - In the implementation block
@property (assign,nonatomic) int chargingStateNotification;                                            //@synthesize chargingStateNotification=_chargingStateNotification - In the implementation block
@property (nonatomic,retain) PowerUITrialManager * trialManager;                                       //@synthesize trialManager=_trialManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(void)setUnCenter:(UNUserNotificationCenter *)arg1 ;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)handleAlarmEvent:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)temporarilyDisabled;
-(double)empiricalTimeToFullChargeDurationMinutes;
-(void)handleTopOffSupervisorEvent;
-(void)setDate:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)loadCheckpoint;
-(id)firsUseNotificationRequest;
-(id)readStringForPreferenceKey:(id)arg1 ;
-(PowerUIMLTwoStageModelPredictor *)modelTwoStagePredictor;
-(NSObject*<OS_dispatch_source>)timer;
-(id)updateAnalyticsWithPluginMetrics:(id)arg1 withBatteryLevel:(int)arg2 ;
-(void)setFirstNotificationDisplayed:(BOOL)arg1 ;
-(NSDate *)_fullChargeDeadline;
-(int)lastPluginStatus;
-(id)ttrURLforBatteryLevel:(int)arg1 withDate:(id)arg2 ;
-(id)stringFromState:(unsigned long long)arg1 ;
-(void)setLastDesktopModeChangeDate:(NSDate *)arg1 ;
-(void)setChargingStateNotification:(int)arg1 ;
-(void)setLastInterruptedTime:(NSDate *)arg1 ;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setTemporarilyDisabled:(BOOL)arg1 ;
-(id)adjustedFullChargeDeadlineWithSignals:(id)arg1 andBatteryMitigationAdvancement:(double)arg2 withDesktopMode:(BOOL)arg3 withFullChargeDeadline:(id)arg4 withResult:(id)arg5 ;
-(long long)previousDecisionMakerID;
-(id)dailyStatsFromLastReported:(id)arg1 ;
-(void)handleInternalCarryPromptEvent;
-(id)setFullChargeDeadline:(id)arg1 withOCVMitigationWaitTime:(double)arg2 ;
-(BOOL)isDesktopDevice;
-(NSObject*<OS_os_log>)log;
-(void)setTemporarilyDisabled:(BOOL)arg1 until:(id)arg2 ;
-(void)setLastPluginStatus:(int)arg1 ;
-(void)clearAllNotificationState;
-(unsigned long long)currentState;
-(BOOL)deviceWasRecentlyConnectedToCharger;
-(BOOL)isExternalConnected;
-(void)setLastChargerWasWireless:(BOOL)arg1 ;
-(unsigned long long)predictorType;
-(BOOL)watchIsInternalAndCarrySwitchDisabled;
-(id)requestAtCheckpoint:(unsigned long long)arg1 atBatteryLevel:(int)arg2 ;
-(void)cleanupOverrides;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(_CDContextualKeyPath *)checkpointKP;
-(BOOL)setChargingStatus:(BOOL)arg1 ;
-(void)updateChargingTimeSaved;
-(id)shouldDisableChargingAtBatteryLevel:(unsigned long long)arg1 withPredictor:(id)arg2 ;
-(void)setProgressNotificationsEnabled:(BOOL)arg1 ;
-(void)setPredictorType:(unsigned long long)arg1 ;
-(NSDate *)uiDeadline;
-(double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)shouldDisableChargingMLPredictor:(unsigned long long)arg1 ;
-(NSDate *)fullChargeDeadlineOverride;
-(id)smartTopOffEngagedRequest:(BOOL)arg1 ;
-(void)setCheckpoint:(unsigned long long)arg1 ;
-(BOOL)deviceHasOverriddenLegitimateUsageDetection;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(void)recallPeriodicCheck;
-(NSDate *)disabledUntilDate;
-(void)reportAggDKeys:(id)arg1 ;
-(id<_CDLocalContext>)context;
-(void)reportBatteryHealthMetrics;
-(NSArray *)monitors;
-(BOOL)signalsIgnored;
-(void)setDeadlineSignalID:(long long)arg1 ;
-(id)initWithDefaultsDomain:(id)arg1 knowledgeStore:(id)arg2 contextStore:(id)arg3 beforeHandlingBatteryChangeCallback:(/*^block*/id)arg4 afterHandlingBatteryChangeCallback:(/*^block*/id)arg5 ;
-(PowerUIBatteryMitigationManager *)batteryMitigationManager;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(id)computeSignalDeadline;
-(double)idleDurationWithEngagedCheckpoints:(id)arg1 withTopOffStartCheckpoints:(id)arg2 withDisabledCheckpoints:(id)arg3 withTopOffStart:(id)arg4 withIdleStart:(id)arg5 withTemporarilyDisabledStart:(id)arg6 withPluginEnd:(id)arg7 ;
-(void)clearPluginTimeline;
-(void)updateDecisionMakerID:(long long)arg1 withCheckpoint:(unsigned long long)arg2 ;
-(void)setBatteryMitigationManager:(PowerUIBatteryMitigationManager *)arg1 ;
-(void)setIsDesktopDevice:(BOOL)arg1 ;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1 ;
-(int)chargingStateNotification;
-(void)resetDevelopmentMode;
-(void)setOverrideAllSignals:(BOOL)arg1 ;
-(NSString *)defaultsDomain;
-(NSDictionary *)signalDeadline;
-(BOOL)firstNotificationDisplayed;
-(id)smartTopOffFailureNotificationAtBatteryLevel:(int)arg1 withDate:(id)arg2 ;
-(void)setCheckpointKP:(_CDContextualKeyPath *)arg1 ;
-(id)constructDailyStats:(id)arg1 ;
-(void)setDisabledUntilDate:(NSDate *)arg1 ;
-(id)recentEngagements;
-(BOOL)deviceWasRecentlyActive;
-(void)setPreviousDecisionMakerDate:(NSDate *)arg1 ;
-(id)constructAnalyticsStatusFromEvents:(id)arg1 ;
-(BOOL)deviceHasSeveralInteractions;
-(void)setBeforeBatteryCallback:(id)arg1 ;
-(id)fullChargeDeadline;
-(long long)deadlineSignalID;
-(void)registerForFirstWakeupNotification;
-(double)totalTemporarilyDisabledHours:(id)arg1 withEngagements:(id)arg2 withPluginEnd:(id)arg3 ;
-(NSDate *)lastComputedSignalDeadline;
-(void)engageFrom:(id)arg1 until:(id)arg2 repeatUntil:(id)arg3 overrideAllSignals:(BOOL)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)setPowerlogToken:(int)arg1 ;
-(void)setTrialManager:(PowerUITrialManager *)arg1 ;
-(NSXPCListener *)listener;
-(int)lastBatteryLevel;
-(BOOL)overrideAllSignals;
-(BOOL)predictor:(unsigned long long)arg1 suggestsDiablingChargingAtBatteryLevel:(unsigned long long)arg2 ;
-(void)setPreviousDecisionMakerID:(long long)arg1 ;
-(NSDate *)previousDecisionMakerDate;
-(void)setDefaultsDomain:(NSString *)arg1 ;
-(void)handleTopOffSupervisorEventInternal;
-(void)isOBCSupportedWithHandler:(/*^block*/id)arg1 ;
-(void)enableCharging;
-(void)setEncounteredTLCDuringTopOff:(BOOL)arg1 ;
-(void)dispatchAlarmAfter:(long long)arg1 withName:(id)arg2 ;
-(id)desktopModeOverride;
-(void)setSignalsIgnored:(BOOL)arg1 ;
-(void)resetState;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)shouldDisableChargingAsOfDate:(id)arg1 atBatteryLevel:(unsigned long long)arg2 overrideAllSignals:(BOOL)arg3 withPredictor:(id)arg4 bypassSaved:(BOOL)arg5 ;
-(void)simulateCurrentOutputAsOfDate:(id)arg1 overrideAllSignals:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setEngagementTimeOverride:(NSDate *)arg1 ;
-(id)timeStringFromDate:(id)arg1 ;
-(void)set_hasLegitimateUsage:(BOOL)arg1 ;
-(BOOL)isDeviceWithLegitimateUsage;
-(void)setLastFullyCharged:(int)arg1 ;
-(void)setMonitors:(NSArray *)arg1 ;
-(void)evaluateIfDesktopDeviceForced:(BOOL)arg1 ;
-(void)monitor:(id)arg1 maySuggestNewFullChargeDeadline:(id)arg2 ;
-(void)updateNotificationSettings:(BOOL)arg1 ;
-(unsigned long long)checkpoint;
-(PowerUITrialManager *)trialManager;
-(void)setService:(unsigned)arg1 ;
-(NSDate *)lastInterruptedTime;
-(double)totalTopOffDurationWithTopOffStartCheckpoints:(id)arg1 withFullyChargedCheckpoints:(id)arg2 withTopOffStart:(id)arg3 withFullyChargedDate:(id)arg4 withPluginEnd:(id)arg5 ;
-(id)uiDeadlineFromFullChargeDeadline:(id)arg1 atDate:(id)arg2 ;
-(id)readAndRemoveRecentEngagements;
-(void)setKnowledgeStore:(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)arg1 ;
-(id<_DKKnowledgeQuerying><_DKKnowledgeSaving>)knowledgeStore;
-(void)stopAllMonitoring;
-(id)fullChargeDeadlineStringFromDate:(id)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(id)constructAnalyticsStatus;
-(void)addEngagementFromDate:(id)arg1 withDuration:(double)arg2 ;
-(double)periodicCheckDuration;
-(void)setLastScheduledFullChargeNotificationID:(NSString *)arg1 ;
-(void)setAfterBatteryCallback:(id)arg1 ;
-(void)client:(id)arg1 setChargingStatus:(BOOL)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)loadDefaults;
-(void)cleanupPluginHistoryWithActivity:(id)arg1 ;
-(BOOL)_hasLegitimateUsage;
-(BOOL)lastChargerWasWireless;
-(void)startAllMonitoring;
-(id)cloakingMetrics:(id)arg1 withIdleCheckpoints:(id)arg2 withIdleStart:(id)arg3 withTopOffStart:(id)arg4 withPluginEnd:(id)arg5 ;
-(void)pluginTimelineAddEvent:(id)arg1 atDate:(id)arg2 withBatteryLevel:(unsigned long long)arg3 ;
-(void)setLastBatteryLevel:(int)arg1 ;
-(void)evaluateIfDesktopDevice;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSDate *)repeatEngagementOverrideEndDate;
-(void)handleXPCActivityOnBoot;
-(id)smartTopOffEngagedContent:(BOOL)arg1 ;
-(void)recordAnalytics;
-(double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 includeTLCDelay:(BOOL)arg2 ;
-(void)enterDevelopmentMode;
-(void)setFullChargeDeadlineOverride:(NSDate *)arg1 ;
-(id)readDateForPreferenceKey:(id)arg1 ;
-(void)setString:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)addPowerLogEventForCheckpoint:(unsigned long long)arg1 decisionSignalID:(id)arg2 decisionDate:(id)arg3 ;
-(int)powerlogToken;
-(void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)resetEngagementOverrideWithHandler:(/*^block*/id)arg1 ;
-(unsigned long long)projectedBatteryLevelForDuration:(unsigned long long)arg1 withInitialBatteryLevel:(unsigned long long)arg2 ;
-(void)setFirstNotificationRequested:(BOOL)arg1 ;
-(int)lastFullyCharged;
-(void)resetDeviceHasLegitimateUsage;
-(NSString *)lastScheduledFullChargeNotificationID;
-(NSDate *)lastDesktopModeChangeDate;
-(void)recomputeEmpiricalTimeToFullCharge;
-(id)stringFromDecisionMaker:(long long)arg1 decisionDate:(id)arg2 ;
-(void)handleCallback;
-(void)statusWithHandler:(/*^block*/id)arg1 ;
-(id)beforeBatteryCallback;
-(id)chargePrediction:(unsigned long long)arg1 fullyCharged:(BOOL)arg2 previousCheckpoint:(unsigned long long)arg3 predictor:(unsigned long long)arg4 ;
-(id)defaultDateToDisableUntilGivenDate:(id)arg1 ;
-(BOOL)deviceHasEnoughPluggedInTime;
-(id)stringFromInterval:(id)arg1 ;
-(void)requestPeriodicCheck;
-(NSDictionary *)previousPowerLogStatus;
-(UNUserNotificationCenter *)unCenter;
-(void)set_fullChargeDeadline:(NSDate *)arg1 ;
-(void)handleCallback:(BOOL)arg1 ;
-(void)setCheckpoint:(unsigned long long)arg1 withSelector:(SEL)arg2 ;
-(id)readNumberForPreferenceKey:(id)arg1 ;
-(void)setPreviousPowerLogStatus:(NSDictionary *)arg1 ;
-(void)setSignalDeadline:(NSDictionary *)arg1 ;
-(void)setModelTwoStagePredictor:(PowerUIMLTwoStageModelPredictor *)arg1 ;
-(void)isOBCEngagedWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldDisableChargingOverrideModel:(unsigned long long)arg1 ;
-(id)checkpointNameFromCheckpoint:(unsigned long long)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setEmpiricalTimeToFullChargeDurationMinutes:(double)arg1 ;
-(BOOL)progressNotificationsEnabled;
-(BOOL)encounteredTLCDuringTopOff;
-(void)setLastComputedSignalDeadline:(NSDate *)arg1 ;
-(void)handleNewBatteryLevel:(int)arg1 whileExternalConnected:(BOOL)arg2 fullyCharged:(BOOL)arg3 ;
-(void)disableCharging;
-(BOOL)firstNotificationRequested;
-(void)setPowerLogStatus:(NSDictionary *)arg1 ;
-(void)reportHistoricalEngagements;
-(NSDictionary *)powerLogStatus;
-(void)setRepeatEngagementOverrideEndDate:(NSDate *)arg1 ;
-(void)setUiDeadline:(NSDate *)arg1 ;
-(unsigned)service;
-(id)afterBatteryCallback;
-(NSDate *)engagementTimeOverride;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)eligibleEngagementIntervalFromTimelineEvents:(id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
-(id)timelineEventDate:(id)arg1 ;
-(void)setContext:(id<_CDLocalContext>)arg1 ;
@end

