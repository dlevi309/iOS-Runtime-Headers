/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/

#import <libobjc.A.dylib/UNUserNotificationCenterDelegate.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <PowerUI/PowerUISignalMonitorDelegate.h>
#import <PowerUI/PowerUISmartChargeManagingPrivate.h>
#import <PowerUI/PowerUISmartChargeManaging.h>

@protocol _CDUserContext, OS_os_log, OS_dispatch_queue;
@class _CDContextualKeyPath, UNUserNotificationCenter, NSObject, NSDate, NSDictionary, NSString, PowerUIMLClassifierModelPredictor, PowerUIMLTwoStageModelPredictor, PowerUIHistogramPredictor, NSArray, PowerUIBatteryMitigationManager, NSXPCListener;

@interface PowerUISmartChargeManager : NSObject <UNUserNotificationCenterDelegate, NSXPCListenerDelegate, PowerUISignalMonitorDelegate, PowerUISmartChargeManagingPrivate, PowerUISmartChargeManaging> {

	BOOL _shouldDisableCharging;
	BOOL __hasLegitimateUsage;
	BOOL _lastChargerWasWireless;
	BOOL _firstNotificationRequested;
	BOOL _firstNotificationDisplayed;
	BOOL _enabled;
	BOOL _temporarilyDisabled;
	BOOL _progressNotificationsEnabled;
	BOOL _signalsIgnored;
	BOOL _overrideAllSignals;
	BOOL _encounteredTLCDuringTopOff;
	unsigned _service;
	int _lastBatteryLevel;
	int _lastPluginStatus;
	int _lastFullyCharged;
	id<_CDUserContext> _context;
	_CDContextualKeyPath* _checkpointKP;
	UNUserNotificationCenter* _unCenter;
	NSObject*<OS_os_log> _log;
	unsigned long long _checkpoint;
	NSDate* __fullChargeDeadline;
	NSDate* _uiDeadline;
	NSDictionary* _signalDeadline;
	NSDate* _lastComputedSignalDeadline;
	NSDate* _twoStageDeadline;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastInterruptedTime;
	double _empiricalTimeToFullChargeDurationMinutes;
	NSString* _lastScheduledFullChargeNotificationID;
	long long _deadlineSignalID;
	unsigned long long _currentState;
	NSDate* _disabledUntilDate;
	unsigned long long _predictorType;
	long long _previousDecisionMakerID;
	NSDate* _previousDecisionMakerDate;
	PowerUIMLClassifierModelPredictor* _modelClassifierPredictor;
	PowerUIMLTwoStageModelPredictor* _modelTwoStagePredictor;
	PowerUIHistogramPredictor* _histogramPredictor;
	NSArray* _monitors;
	NSDictionary* _powerLogStatus;
	NSDictionary* _previousPowerLogStatus;
	NSDate* _engagementTimeOverride;
	NSDate* _fullChargeDeadlineOverride;
	PowerUIBatteryMitigationManager* _batteryMitigationManager;
	NSXPCListener* _listener;

}

@property (nonatomic,retain) id<_CDUserContext> context;                                                //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) _CDContextualKeyPath * checkpointKP;                                       //@synthesize checkpointKP=_checkpointKP - In the implementation block
@property (nonatomic,retain) UNUserNotificationCenter * unCenter;                                       //@synthesize unCenter=_unCenter - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                                                  //@synthesize log=_log - In the implementation block
@property (assign,nonatomic) unsigned long long checkpoint;                                             //@synthesize checkpoint=_checkpoint - In the implementation block
@property (assign,nonatomic) BOOL shouldDisableCharging;                                                //@synthesize shouldDisableCharging=_shouldDisableCharging - In the implementation block
@property (assign,nonatomic) unsigned service;                                                          //@synthesize service=_service - In the implementation block
@property (nonatomic,retain) NSDate * _fullChargeDeadline;                                              //@synthesize _fullChargeDeadline=__fullChargeDeadline - In the implementation block
@property (nonatomic,retain) NSDate * uiDeadline;                                                       //@synthesize uiDeadline=_uiDeadline - In the implementation block
@property (nonatomic,retain) NSDictionary * signalDeadline;                                             //@synthesize signalDeadline=_signalDeadline - In the implementation block
@property (nonatomic,retain) NSDate * lastComputedSignalDeadline;                                       //@synthesize lastComputedSignalDeadline=_lastComputedSignalDeadline - In the implementation block
@property (nonatomic,retain) NSDate * twoStageDeadline;                                                 //@synthesize twoStageDeadline=_twoStageDeadline - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL _hasLegitimateUsage;                                                  //@synthesize _hasLegitimateUsage=__hasLegitimateUsage - In the implementation block
@property (assign,nonatomic) int lastBatteryLevel;                                                      //@synthesize lastBatteryLevel=_lastBatteryLevel - In the implementation block
@property (assign,nonatomic) int lastPluginStatus;                                                      //@synthesize lastPluginStatus=_lastPluginStatus - In the implementation block
@property (assign,nonatomic) int lastFullyCharged;                                                      //@synthesize lastFullyCharged=_lastFullyCharged - In the implementation block
@property (assign,nonatomic) BOOL lastChargerWasWireless;                                               //@synthesize lastChargerWasWireless=_lastChargerWasWireless - In the implementation block
@property (nonatomic,retain) NSDate * lastInterruptedTime;                                              //@synthesize lastInterruptedTime=_lastInterruptedTime - In the implementation block
@property (assign,nonatomic) double empiricalTimeToFullChargeDurationMinutes;                           //@synthesize empiricalTimeToFullChargeDurationMinutes=_empiricalTimeToFullChargeDurationMinutes - In the implementation block
@property (nonatomic,retain) NSString * lastScheduledFullChargeNotificationID;                          //@synthesize lastScheduledFullChargeNotificationID=_lastScheduledFullChargeNotificationID - In the implementation block
@property (assign,nonatomic) long long deadlineSignalID;                                                //@synthesize deadlineSignalID=_deadlineSignalID - In the implementation block
@property (assign,nonatomic) BOOL firstNotificationRequested;                                           //@synthesize firstNotificationRequested=_firstNotificationRequested - In the implementation block
@property (assign,nonatomic) BOOL firstNotificationDisplayed;                                           //@synthesize firstNotificationDisplayed=_firstNotificationDisplayed - In the implementation block
@property (assign,nonatomic) unsigned long long currentState;                                           //@synthesize currentState=_currentState - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                              //@synthesize enabled=_enabled - In the implementation block
@property (retain) NSDate * disabledUntilDate;                                                          //@synthesize disabledUntilDate=_disabledUntilDate - In the implementation block
@property (assign,nonatomic) BOOL temporarilyDisabled;                                                  //@synthesize temporarilyDisabled=_temporarilyDisabled - In the implementation block
@property (assign,nonatomic) BOOL progressNotificationsEnabled;                                         //@synthesize progressNotificationsEnabled=_progressNotificationsEnabled - In the implementation block
@property (assign,nonatomic) BOOL signalsIgnored;                                                       //@synthesize signalsIgnored=_signalsIgnored - In the implementation block
@property (assign,nonatomic) unsigned long long predictorType;                                          //@synthesize predictorType=_predictorType - In the implementation block
@property (assign,nonatomic) long long previousDecisionMakerID;                                         //@synthesize previousDecisionMakerID=_previousDecisionMakerID - In the implementation block
@property (nonatomic,retain) NSDate * previousDecisionMakerDate;                                        //@synthesize previousDecisionMakerDate=_previousDecisionMakerDate - In the implementation block
@property (nonatomic,retain) PowerUIMLClassifierModelPredictor * modelClassifierPredictor;              //@synthesize modelClassifierPredictor=_modelClassifierPredictor - In the implementation block
@property (nonatomic,retain) PowerUIMLTwoStageModelPredictor * modelTwoStagePredictor;                  //@synthesize modelTwoStagePredictor=_modelTwoStagePredictor - In the implementation block
@property (nonatomic,retain) PowerUIHistogramPredictor * histogramPredictor;                            //@synthesize histogramPredictor=_histogramPredictor - In the implementation block
@property (nonatomic,retain) NSArray * monitors;                                                        //@synthesize monitors=_monitors - In the implementation block
@property (retain) NSDictionary * powerLogStatus;                                                       //@synthesize powerLogStatus=_powerLogStatus - In the implementation block
@property (retain) NSDictionary * previousPowerLogStatus;                                               //@synthesize previousPowerLogStatus=_previousPowerLogStatus - In the implementation block
@property (retain) NSDate * engagementTimeOverride;                                                     //@synthesize engagementTimeOverride=_engagementTimeOverride - In the implementation block
@property (retain) NSDate * fullChargeDeadlineOverride;                                                 //@synthesize fullChargeDeadlineOverride=_fullChargeDeadlineOverride - In the implementation block
@property (assign,nonatomic) BOOL overrideAllSignals;                                                   //@synthesize overrideAllSignals=_overrideAllSignals - In the implementation block
@property (assign,nonatomic) BOOL encounteredTLCDuringTopOff;                                           //@synthesize encounteredTLCDuringTopOff=_encounteredTLCDuringTopOff - In the implementation block
@property (nonatomic,retain) PowerUIBatteryMitigationManager * batteryMitigationManager;                //@synthesize batteryMitigationManager=_batteryMitigationManager - In the implementation block
@property (nonatomic,retain) NSXPCListener * listener;                                                  //@synthesize listener=_listener - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)manager;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(NSXPCListener *)listener;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id<_CDUserContext>)context;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(void)setListener:(NSXPCListener *)arg1 ;
-(NSObject*<OS_os_log>)log;
-(unsigned long long)currentState;
-(unsigned long long)checkpoint;
-(unsigned)service;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(NSArray *)monitors;
-(void)setMonitors:(NSArray *)arg1 ;
-(void)userNotificationCenter:(id)arg1 didReceiveNotificationResponse:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)setCurrentState:(unsigned long long)arg1 ;
-(void)setService:(unsigned)arg1 ;
-(void)resetState;
-(void)setString:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)handleCallback:(BOOL)arg1 ;
-(id)timeStringFromDate:(id)arg1 ;
-(id)readNumberForPreferenceKey:(id)arg1 ;
-(id)stringFromInterval:(id)arg1 ;
-(void)statusWithHandler:(/*^block*/id)arg1 ;
-(void)powerLogStatusWithHandler:(/*^block*/id)arg1 ;
-(void)fullChargeDeadlineWithHandler:(/*^block*/id)arg1 ;
-(void)isSmartChargingCurrentlyEnabledWithHandler:(/*^block*/id)arg1 ;
-(void)client:(id)arg1 setState:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)engageFrom:(id)arg1 until:(id)arg2 overrideAllSignals:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)resetEngagementOverrideWithHandler:(/*^block*/id)arg1 ;
-(NSDictionary *)powerLogStatus;
-(void)monitor:(id)arg1 maySuggestNewFullChargeDeadline:(id)arg2 ;
-(id)readDateForPreferenceKey:(id)arg1 ;
-(void)handleXPCActivityOnBoot;
-(void)loadCheckpoint;
-(void)loadDefaults;
-(void)registerForFirstWakeupNotification;
-(void)handleCallback;
-(UNUserNotificationCenter *)unCenter;
-(int)lastBatteryLevel;
-(id)requestAtCheckpoint:(unsigned long long)arg1 atBatteryLevel:(int)arg2 ;
-(void)handleNewBatteryLevel:(int)arg1 whileExternalConnected:(BOOL)arg2 fullyCharged:(BOOL)arg3 ;
-(void)enableCharging;
-(void)disableCharging;
-(id)smartTopOffEngagedRequest:(BOOL)arg1 ;
-(id)smartTopOffFailureNotificationAtBatteryLevel:(int)arg1 withDate:(id)arg2 ;
-(id)firsUseNotificationRequest;
-(id)readDictForPreferenceKey:(id)arg1 ;
-(void)reportAggDKeys:(id)arg1 ;
-(void)cleanupPluginHistoryWithActivity:(id)arg1 ;
-(void)reportHistoricalEngagements;
-(BOOL)isDeviceWithLegitimateUsage;
-(void)startAllMonitoring;
-(NSDictionary *)previousPowerLogStatus;
-(void)setPreviousPowerLogStatus:(NSDictionary *)arg1 ;
-(id)checkpointNameFromCheckpoint:(unsigned long long)arg1 ;
-(double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 ;
-(unsigned long long)projectedBatteryLevelForDuration:(unsigned long long)arg1 withInitialBatteryLevel:(unsigned long long)arg2 ;
-(void)setNumber:(id)arg1 forPreferenceKey:(id)arg2 ;
-(void)addPowerLogEventForCheckpoint:(unsigned long long)arg1 decisionSignalID:(id)arg2 decisionDate:(id)arg3 ;
-(void)setCheckpoint:(unsigned long long)arg1 withSelector:(SEL)arg2 ;
-(void)setTemporarilyDisabled:(BOOL)arg1 until:(id)arg2 ;
-(void)setFullChargeDeadlineOverride:(NSDate *)arg1 ;
-(void)setEngagementTimeOverride:(NSDate *)arg1 ;
-(NSDate *)engagementTimeOverride;
-(NSDate *)fullChargeDeadlineOverride;
-(void)setPowerLogStatus:(NSDictionary *)arg1 ;
-(id)readStringForPreferenceKey:(id)arg1 ;
-(int)lastPluginStatus;
-(void)recallPeriodicCheck;
-(BOOL)isExternalConnected;
-(void)handleTopOffSupervisorEvent;
-(void)handleInternalCarryPromptEvent;
-(void)pluginTimelineAddEvent:(id)arg1 atDate:(id)arg2 withBatteryLevel:(unsigned long long)arg3 ;
-(void)setLastFullyCharged:(int)arg1 ;
-(void)setLastBatteryLevel:(int)arg1 ;
-(void)resetDeviceHasLegitimateUsage;
-(void)recordAnalytics;
-(void)clearPluginTimeline;
-(void)setLastPluginStatus:(int)arg1 ;
-(id)constructAnalyticsStatus;
-(void)setDict:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)setFullChargeDeadline:(id)arg1 withOCVMitigationWaitTime:(double)arg2 ;
-(void)setDate:(id)arg1 forPreferenceKey:(id)arg2 ;
-(id)defaultDateToDisableUntilGivenDate:(id)arg1 ;
-(void)requestPeriodicCheck;
-(id)chargePrediction:(unsigned long long)arg1 fullyCharged:(BOOL)arg2 previousCheckpoint:(unsigned long long)arg3 predictor:(unsigned long long)arg4 ;
-(void)updateDecisionMakerID:(long long)arg1 withCheckpoint:(unsigned long long)arg2 ;
-(void)stopAllMonitoring;
-(void)updateChargingTimeSaved;
-(void)clearAllNotificationState;
-(id)computeSignalDeadline;
-(void)recomputeEmpiricalTimeToFullCharge;
-(double)durationToFullChargeFromBatteryLevel:(unsigned long long)arg1 includeTLCDelay:(BOOL)arg2 ;
-(NSDictionary *)signalDeadline;
-(id)shouldDisableChargingMLPredictor:(unsigned long long)arg1 ;
-(id)shouldDisableChargingAtBatteryLevel:(unsigned long long)arg1 withPredictor:(id)arg2 ;
-(BOOL)shouldDisableChargingOverrideModel:(unsigned long long)arg1 ;
-(BOOL)deviceWasRecentlyConnectedToCharger;
-(BOOL)predictor:(unsigned long long)arg1 suggestsDiablingChargingAtBatteryLevel:(unsigned long long)arg2 ;
-(BOOL)deviceHasOverriddenLegitimateUsageDetection;
-(BOOL)deviceHasSeveralChargeSessions;
-(id)roundedDateFromDate:(id)arg1 ;
-(id)uiDeadlineFromFullChargeDeadline:(id)arg1 atDate:(id)arg2 ;
-(id)smartTopOffEngagedContent:(BOOL)arg1 ;
-(void)addEngagementFromDate:(id)arg1 withDuration:(double)arg2 ;
-(BOOL)setChargingStatus:(BOOL)arg1 ;
-(id)ttrURLforBatteryLevel:(int)arg1 withDate:(id)arg2 ;
-(id)fullChargeDeadline;
-(id)fullChargeDeadlineStringFromDate:(id)arg1 ;
-(id)readAndRemoveRecentEngagements;
-(id)stringFromDecisionMaker:(long long)arg1 decisionDate:(id)arg2 ;
-(id)recentEngagements;
-(id)stringFromState:(unsigned long long)arg1 ;
-(void)setTemporarilyDisabled:(BOOL)arg1 ;
-(void)handleAlarmEvent:(id)arg1 ;
-(void)dispatchAlarmAfter:(long long)arg1 withName:(id)arg2 ;
-(BOOL)deviceHasSeveralInteractions;
-(BOOL)deviceWasRecentlyActive;
-(_CDContextualKeyPath *)checkpointKP;
-(void)setCheckpointKP:(_CDContextualKeyPath *)arg1 ;
-(void)setUnCenter:(UNUserNotificationCenter *)arg1 ;
-(void)setCheckpoint:(unsigned long long)arg1 ;
-(BOOL)shouldDisableCharging;
-(void)setShouldDisableCharging:(BOOL)arg1 ;
-(NSDate *)_fullChargeDeadline;
-(void)set_fullChargeDeadline:(NSDate *)arg1 ;
-(NSDate *)uiDeadline;
-(void)setUiDeadline:(NSDate *)arg1 ;
-(void)setSignalDeadline:(NSDictionary *)arg1 ;
-(NSDate *)lastComputedSignalDeadline;
-(void)setLastComputedSignalDeadline:(NSDate *)arg1 ;
-(NSDate *)twoStageDeadline;
-(void)setTwoStageDeadline:(NSDate *)arg1 ;
-(BOOL)_hasLegitimateUsage;
-(void)set_hasLegitimateUsage:(BOOL)arg1 ;
-(int)lastFullyCharged;
-(BOOL)lastChargerWasWireless;
-(void)setLastChargerWasWireless:(BOOL)arg1 ;
-(NSDate *)lastInterruptedTime;
-(void)setLastInterruptedTime:(NSDate *)arg1 ;
-(double)empiricalTimeToFullChargeDurationMinutes;
-(void)setEmpiricalTimeToFullChargeDurationMinutes:(double)arg1 ;
-(NSString *)lastScheduledFullChargeNotificationID;
-(void)setLastScheduledFullChargeNotificationID:(NSString *)arg1 ;
-(long long)deadlineSignalID;
-(void)setDeadlineSignalID:(long long)arg1 ;
-(BOOL)firstNotificationRequested;
-(void)setFirstNotificationRequested:(BOOL)arg1 ;
-(BOOL)firstNotificationDisplayed;
-(void)setFirstNotificationDisplayed:(BOOL)arg1 ;
-(NSDate *)disabledUntilDate;
-(void)setDisabledUntilDate:(NSDate *)arg1 ;
-(BOOL)temporarilyDisabled;
-(BOOL)progressNotificationsEnabled;
-(void)setProgressNotificationsEnabled:(BOOL)arg1 ;
-(BOOL)signalsIgnored;
-(void)setSignalsIgnored:(BOOL)arg1 ;
-(unsigned long long)predictorType;
-(void)setPredictorType:(unsigned long long)arg1 ;
-(long long)previousDecisionMakerID;
-(void)setPreviousDecisionMakerID:(long long)arg1 ;
-(NSDate *)previousDecisionMakerDate;
-(void)setPreviousDecisionMakerDate:(NSDate *)arg1 ;
-(PowerUIMLClassifierModelPredictor *)modelClassifierPredictor;
-(void)setModelClassifierPredictor:(PowerUIMLClassifierModelPredictor *)arg1 ;
-(PowerUIMLTwoStageModelPredictor *)modelTwoStagePredictor;
-(void)setModelTwoStagePredictor:(PowerUIMLTwoStageModelPredictor *)arg1 ;
-(PowerUIHistogramPredictor *)histogramPredictor;
-(void)setHistogramPredictor:(PowerUIHistogramPredictor *)arg1 ;
-(BOOL)overrideAllSignals;
-(void)setOverrideAllSignals:(BOOL)arg1 ;
-(BOOL)encounteredTLCDuringTopOff;
-(void)setEncounteredTLCDuringTopOff:(BOOL)arg1 ;
-(PowerUIBatteryMitigationManager *)batteryMitigationManager;
-(void)setBatteryMitigationManager:(PowerUIBatteryMitigationManager *)arg1 ;
@end

