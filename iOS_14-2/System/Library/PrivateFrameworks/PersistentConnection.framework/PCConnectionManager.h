/*
* Generated on Thursday, January 14, 2021 at 2:24:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <libobjc.A.dylib/PCCarrierBundleHelperDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol PCConnectionManagerDelegate, OS_dispatch_queue, OS_os_log, PCGrowthAlgorithm;
@class NSString, NSRunLoop, NSObject, PCPersistentTimer, PCKeepAliveState;

@interface PCConnectionManager : NSObject <PCCarrierBundleHelperDelegate, PCInterfaceMonitorDelegate> {

	int _connectionClass;
	id<PCConnectionManagerDelegate> _delegate;
	NSString* _serviceIdentifier;
	NSString* _duetIdentifier;
	int _prefsStyle;
	int _onlyAllowedStyle;
	BOOL _onlyAllowedStyleSet;
	long long _interfaceIdentifier;
	unsigned long long _guidancePriority;
	NSRunLoop* _delegateRunLoop;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	NSObject*<OS_os_log> _logObject;
	id<PCGrowthAlgorithm> _wwanGrowthAlgorithm[2];
	id<PCGrowthAlgorithm> _wifiGrowthAlgorithm[2];
	id<PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
	PCPersistentTimer* _intervalTimer;
	PCPersistentTimer* _reconnectWakeTimer;
	PCPersistentTimer* _delayTimer;
	unsigned _powerAssertionID;
	double _onTimeKeepAliveTime;
	double _lastResumeTime;
	double _lastStopTime;
	double _lastStartTime;
	double _lastReachableTime;
	double _lastReconnectTime;
	double _lastScheduledIntervalTime;
	double _timerGuidance;
	double _keepAliveGracePeriod;
	double _lastElapsedInterval;
	BOOL _minimumIntervalFallbackEnabled;
	BOOL _operatorMinimumIntervalFallbackAllowed;
	unsigned _reconnectIteration;
	int _timerGuidanceToken;
	int _pushIsConnectedToken;
	int _prefsChangedToken;
	double _defaultPollingInterval;
	double _pollingIntervalOverride;
	BOOL _pollingIntervalOverrideSet;
	BOOL _hasStarted;
	BOOL _isRunning;
	BOOL _inCallback;
	BOOL _isInReconnectMode;
	BOOL _reconnectWithKeepAliveDelay;
	BOOL _forceManualWhenRoaming;
	BOOL _enableNonCellularConnections;
	BOOL _isReachable;
	BOOL _disableEarlyFire;
	BOOL _alwaysWantsInterfaceChangeCallbacks;
	int _lastProcessedAction;
	BOOL _deviceUnderGoodCondition;
	int _currentGrowthStage;
	id _duetContextRegistration;
	BOOL _powerOptimizationsForExpensiveNetworkingDisabled;
	double _nonCellularEarlyFireConstantInterval;
	int _currentAddressFamily;

}

@property (assign,nonatomic,__weak) id<PCConnectionManagerDelegate> delegate; 
@property (nonatomic,copy) NSString * duetIdentifier; 
@property (nonatomic,readonly) BOOL isRunning; 
@property (nonatomic,readonly) double currentKeepAliveInterval; 
@property (assign,nonatomic) double minimumKeepAliveInterval; 
@property (assign) double maximumKeepAliveInterval; 
@property (nonatomic,readonly) PCKeepAliveState * currentKeepAliveState; 
@property (assign,nonatomic) double serverStatsMaxKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsExpectedKeepAliveInterval; 
@property (assign,nonatomic) double serverStatsMinKeepAliveInterval; 
@property (assign,nonatomic) BOOL usingServerStatsAggressively; 
@property (nonatomic,readonly) unsigned long long countOfGrowthActions; 
@property (assign,nonatomic) BOOL disableEarlyFire; 
@property (assign,nonatomic) BOOL minimumIntervalFallbackEnabled;                                //@synthesize minimumIntervalFallbackEnabled=_minimumIntervalFallbackEnabled - In the implementation block
@property (assign,nonatomic) long long interfaceIdentifier;                                      //@synthesize interfaceIdentifier=_interfaceIdentifier - In the implementation block
@property (assign,nonatomic) BOOL alwaysWantsInterfaceChangeCallbacks;                           //@synthesize alwaysWantsInterfaceChangeCallbacks=_alwaysWantsInterfaceChangeCallbacks - In the implementation block
@property (assign,nonatomic) BOOL powerOptimizationsForExpensiveNetworkingDisabled;              //@synthesize powerOptimizationsForExpensiveNetworkingDisabled=_powerOptimizationsForExpensiveNetworkingDisabled - In the implementation block
@property (assign,nonatomic) int currentAddressFamily; 
@property (nonatomic,readonly) int lastProcessedAction;                                          //@synthesize lastProcessedAction=_lastProcessedAction - In the implementation block
@property (assign,nonatomic) double keepAliveGracePeriod;                                        //@synthesize keepAliveGracePeriod=_keepAliveGracePeriod - In the implementation block
@property (assign,nonatomic) double nonCellularEarlyFireConstantInterval;                        //@synthesize nonCellularEarlyFireConstantInterval=_nonCellularEarlyFireConstantInterval - In the implementation block
@property (nonatomic,readonly) double pollingInterval; 
@property (nonatomic,readonly) int currentGrowthStage; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)intervalCacheDictionaries;
+(BOOL)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2 ;
+(Class)growthAlgorithmClass;
+(id)_keepAliveCachePath;
-(long long)interfaceIdentifier;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(void)_deregisterForDeviceConditionsNotifications;
-(int)currentGrowthStage;
-(double)nonCellularEarlyFireConstantInterval;
-(void)_adjustInterfaceAssertions;
-(void)setCurrentAddressFamily:(int)arg1 ;
-(BOOL)disableEarlyFire;
-(void)_resolveStateWithAction:(int)arg1 ;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)_setMinimumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(void)_clearTimersReleasingPowerAssertion:(BOOL)arg1 ;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1 ;
-(void)_setupTimerForPollForAdjustment:(BOOL)arg1 ;
-(double)serverStatsMaxKeepAliveInterval;
-(id<PCConnectionManagerDelegate>)delegate;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3 ;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1 ;
-(id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5 ;
-(void)_clearTimers;
-(BOOL)powerOptimizationsForExpensiveNetworkingDisabled;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(void)setOnlyAllowedStyle:(int)arg1 ;
-(void)_pauseTimers;
-(void)_adjustMinimumIntervalFallback;
-(double)pollingInterval;
-(void)_adjustPollTimerIfNecessary;
-(BOOL)shouldClientScheduleReconnectDueToFailure;
-(void)setUsingServerStatsAggressively:(BOOL)arg1 ;
-(int)currentAddressFamily;
-(void)setEnableNonCellularConnections:(BOOL)arg1 ;
-(BOOL)alwaysWantsInterfaceChangeCallbacks;
-(id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg1 ;
-(void)cancelPollingIntervalOverride;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg1 ;
-(void)_delayTimerFired;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4 ;
-(void)setDelegate:(id<PCConnectionManagerDelegate>)arg1 ;
-(int)currentStyle;
-(void)setInterfaceIdentifier:(long long)arg1 ;
-(double)serverStatsExpectedKeepAliveInterval;
-(void)_calloutWithEvent:(int)arg1 context:(id)arg2 ;
-(void)setPowerOptimizationsForExpensiveNetworkingDisabled:(BOOL)arg1 ;
-(void)startManager;
-(void)setDisableEarlyFire:(BOOL)arg1 ;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMinKeepAliveInterval;
-(unsigned long long)countOfGrowthActions;
-(void)stopAndResetManager;
-(double)currentKeepAliveInterval;
-(void)_loadPreferencesGeneratingEvent:(BOOL)arg1 ;
-(void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)arg1 ;
-(void)setKeepAliveOverrideOnInterface:(long long)arg1 interval:(double)arg2 timeout:(double)arg3 ;
-(id)_stringForAction:(int)arg1 ;
-(void)setPollingIntervalOverride:(double)arg1 ;
-(void)_registerForDeviceConditionsNotifications;
-(void)resumeManagerWithAction:(int)arg1 ;
-(void)setKeepAliveGracePeriod:(double)arg1 ;
-(id)_stringForEvent:(int)arg1 ;
-(BOOL)operatorMinimumIntervalFallbackAllowed;
-(void)_takePowerAssertionWithTimeout:(double)arg1 ;
-(void)stopManager;
-(double)maximumKeepAliveInterval;
-(BOOL)isRunning;
-(void)_setTimerGuidance:(double)arg1 ;
-(double)keepAliveGracePeriod;
-(id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6 ;
-(id)_growthAlgorithmOnInterface:(long long)arg1 ;
-(void)_setupKeepAliveForReconnect;
-(void)_processDeviceConditionChanges;
-(void)_releasePowerAssertion;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)_callDelegateWithEventAndContext:(id)arg1 ;
-(int)lastProcessedAction;
-(BOOL)_hasBudgetRemaining;
-(id)_currentGrowthAlgorithm;
-(void)setAlwaysWantsInterfaceChangeCallbacks:(BOOL)arg1 ;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(void)carrierBundleDidChange;
-(void)_intervalTimerFired;
-(BOOL)usingServerStatsAggressively;
-(id)_stringForStyle:(int)arg1 ;
-(void)setNonCellularEarlyFireConstantInterval:(double)arg1 ;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)_saveWWANKeepAliveInterval;
-(void)resumeManagerWithAction:(int)arg1 forceGrow:(BOOL)arg2 ;
-(id)_stringForAddressFamily:(int)arg1 ;
-(BOOL)_isPushConnected;
-(NSString *)duetIdentifier;
-(PCKeepAliveState *)currentKeepAliveState;
-(void)_setupTimerForPushWithKeepAliveInterval:(double)arg1 ;
-(id)persistentInterfaceManager;
-(void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(void)_validateActionForCurrentStyle:(int)arg1 ;
-(void)dealloc;
-(void)_handleDeviceConditionChangeCallback;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1 ;
-(double)minimumKeepAliveInterval;
-(void)setDuetIdentifier:(NSString *)arg1 ;
-(void)_preferencesChanged;
@end

