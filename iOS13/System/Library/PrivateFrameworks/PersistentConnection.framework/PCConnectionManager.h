/*
* Generated on Monday, March 1, 2021 at 2:32:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
*/

#import <libobjc.A.dylib/PCCarrierBundleHelperDelegate.h>
#import <libobjc.A.dylib/PCInterfaceMonitorDelegate.h>

@protocol PCConnectionManagerDelegate, OS_dispatch_queue, OS_os_log, PCGrowthAlgorithm;
@class NSString, NSRunLoop, NSObject, PCPersistentTimer;

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
+(Class)growthAlgorithmClass;
+(id)_keepAliveCachePath;
+(id)intervalCacheDictionaries;
+(BOOL)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2 ;
-(void)dealloc;
-(id<PCConnectionManagerDelegate>)delegate;
-(void)setDelegate:(id<PCConnectionManagerDelegate>)arg1 ;
-(BOOL)isRunning;
-(int)currentStyle;
-(void)interfaceManagerInternetReachabilityChanged:(id)arg1 ;
-(void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1 ;
-(void)interfaceManagerInHomeCountryStatusChanged:(id)arg1 ;
-(void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2 ;
-(double)minimumKeepAliveInterval;
-(void)setMinimumKeepAliveInterval:(double)arg1 ;
-(double)currentKeepAliveInterval;
-(double)maximumKeepAliveInterval;
-(void)setMaximumKeepAliveInterval:(double)arg1 ;
-(id)_stringForAction:(int)arg1 ;
-(double)serverStatsExpectedKeepAliveInterval;
-(void)setServerStatsExpectedKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMaxKeepAliveInterval;
-(void)setServerStatsMaxKeepAliveInterval:(double)arg1 ;
-(double)serverStatsMinKeepAliveInterval;
-(void)setServerStatsMinKeepAliveInterval:(double)arg1 ;
-(BOOL)minimumIntervalFallbackEnabled;
-(void)setMinimumIntervalFallbackEnabled:(BOOL)arg1 ;
-(BOOL)usingServerStatsAggressively;
-(void)setUsingServerStatsAggressively:(BOOL)arg1 ;
-(unsigned long long)countOfGrowthActions;
-(id)_getCachedWWANKeepAliveIntervalForAddressFamily:(int)arg1 ;
-(id)_stringForAddressFamily:(int)arg1 ;
-(void)_setTimerGuidance:(double)arg1 ;
-(id)persistentInterfaceManager;
-(void)_preferencesChanged;
-(void)_loadPreferencesGeneratingEvent:(BOOL)arg1 ;
-(long long)interfaceIdentifier;
-(id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 serviceIdentifier:(id)arg6 ;
-(id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(long long)arg2 guidancePriority:(unsigned long long)arg3 delegate:(id)arg4 serviceIdentifier:(id)arg5 ;
-(void)_clearTimers;
-(id)_stringForStyle:(int)arg1 ;
-(void)_setMinimumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(void)_setMaximumKeepAliveInterval:(double)arg1 onInterface:(long long)arg2 ;
-(void)setOperatorMinimumIntervalFallbackAllowed:(BOOL)arg1 ;
-(void)_adjustInterfaceAssertions;
-(void)_registerForDeviceConditionsNotifications;
-(void)_deregisterForDeviceConditionsNotifications;
-(void)_calloutWithEvent:(int)arg1 context:(id)arg2 ;
-(void)_handleDeviceConditionChangeCallback;
-(void)_processDeviceConditionChanges;
-(void)_setupTimerForPollForAdjustment:(BOOL)arg1 ;
-(void)_pauseTimers;
-(double)pollingInterval;
-(id)_currentGrowthAlgorithm;
-(void)resumeManagerWithAction:(int)arg1 ;
-(void)resumeManagerWithAction:(int)arg1 forceGrow:(BOOL)arg2 ;
-(void)_validateActionForCurrentStyle:(int)arg1 ;
-(void)_resolveStateWithAction:(int)arg1 ;
-(void)_setupTimerForPushWithKeepAliveInterval:(double)arg1 ;
-(void)_saveWWANKeepAliveInterval;
-(void)_setupKeepAliveForReconnect;
-(void)stopManager;
-(id)_growthAlgorithmOnInterface:(long long)arg1 ;
-(BOOL)_isPushConnected;
-(void)_adjustMinimumIntervalFallback;
-(void)_intervalTimerFired;
-(void)_takePowerAssertionWithTimeout:(double)arg1 ;
-(BOOL)_hasBudgetRemaining;
-(void)_releasePowerAssertion;
-(void)startManager;
-(void)_delayTimerFired;
-(void)_clearTimersReleasingPowerAssertion:(BOOL)arg1 ;
-(id)_stringForEvent:(int)arg1 ;
-(void)_callDelegateWithEventAndContext:(id)arg1 ;
-(void)_adjustPollTimerIfNecessary;
-(void)carrierBundleDidChange;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(id)arg3 serviceIdentifier:(id)arg4 ;
-(id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3 ;
-(void)setDuetIdentifier:(NSString *)arg1 ;
-(NSString *)duetIdentifier;
-(void)setOnlyAllowedStyle:(int)arg1 ;
-(int)currentGrowthStage;
-(void)stopAndResetManager;
-(void)setKeepAliveGracePeriod:(double)arg1 ;
-(void)setKeepAliveOverrideOnInterface:(long long)arg1 interval:(double)arg2 timeout:(double)arg3 ;
-(void)setNonCellularEarlyFireConstantInterval:(double)arg1 ;
-(void)setPollingIntervalOverride:(double)arg1 ;
-(void)cancelPollingIntervalOverride;
-(BOOL)shouldClientScheduleReconnectDueToFailure;
-(void)setEnableNonCellularConnections:(BOOL)arg1 ;
-(BOOL)disableEarlyFire;
-(void)setDisableEarlyFire:(BOOL)arg1 ;
-(BOOL)operatorMinimumIntervalFallbackAllowed;
-(void)setCurrentAddressFamily:(int)arg1 ;
-(int)currentAddressFamily;
-(double)keepAliveGracePeriod;
-(void)setInterfaceIdentifier:(long long)arg1 ;
-(int)lastProcessedAction;
-(double)nonCellularEarlyFireConstantInterval;
-(BOOL)alwaysWantsInterfaceChangeCallbacks;
-(void)setAlwaysWantsInterfaceChangeCallbacks:(BOOL)arg1 ;
-(BOOL)powerOptimizationsForExpensiveNetworkingDisabled;
-(void)setPowerOptimizationsForExpensiveNetworkingDisabled:(BOOL)arg1 ;
@end

