/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <libobjc.A.dylib/CTCarrierSpaceClientDelegate.h>
#import <libobjc.A.dylib/ConfigurableObjectProtocol.h>
#import <SymptomEvaluator/SymptomAdditionalProtocol.h>
#import <libobjc.A.dylib/ManagedEventInfoProtocol.h>

@protocol OS_dispatch_source;
@class State, NSArray, NetworkAnalyticsStateRelay, NSObject, MotionStateRelay, SystemSettingsRelay, AWDAgent, NSDate, NWUsageTargetSelector, CTCarrierSpaceClient, AWDUsageDeltaTracker, CanUseAppsCache, NSMutableDictionary, NSString, NSDictionary;

@interface CellFallbackHandler : NSObject <CTCarrierSpaceClientDelegate, ConfigurableObjectProtocol, SymptomAdditionalProtocol, ManagedEventInfoProtocol> {

	State* currentState;
	NSArray* states;
	NetworkAnalyticsStateRelay* cellRelay;
	NetworkAnalyticsStateRelay* wifiRelay;
	id relayReadyObserver;
	id iccidObserver;
	id polledFlowObserver;
	id appsActivityObserver;
	int notifyToken;
	NSObject*<OS_dispatch_source> motionTimer;
	unsigned motionDetectorState;
	MotionStateRelay* motionRelay;
	SystemSettingsRelay* settingsRelay;
	unsigned administrativeState;
	AWDAgent* awdAgent;
	unsigned long long appBlacklistsSettleTime;
	unsigned long long appBlacklistsFreePassCellMax;
	unsigned long long appBlacklistsFreePassFlowMax;
	double appBlacklistsRNFToCellRatio;
	BOOL nonDefaultAppBlacklistsRNFToCellRatio;
	BOOL highCapacityCellPlan;
	BOOL nonDefaultHighCapacityCellPlan;
	void* cellFallbackObserver;
	BOOL cellFallbackInUse;
	NSObject*<OS_dispatch_source> mptcpObserver;
	BOOL mptcpInUse;
	BOOL needExtendedSignatures;
	BOOL useAllTCPStats;
	NSObject*<OS_dispatch_source> cellFallbackTimer;
	NSObject*<OS_dispatch_source> elevatedStateTimer;
	NSObject*<OS_dispatch_source> wrongUsageGracePeriodTimer;
	NSDate* lastCellFallbackTime;
	unsigned long long lastCellFallbackUsageMarker;
	NWUsageTargetSelector* targetFlowsRNF;
	NWUsageTargetSelector* targetFlowsCell;
	CTCarrierSpaceClient* cellPlanObserver;
	unsigned long long appPolicyCheckedCount;
	unsigned long long appPolicyDeniedCount;
	NSObject*<OS_dispatch_source> timerTriggerDisconnect;
	AWDUsageDeltaTracker* usageTriggerDisconnect;
	CanUseAppsCache* appsCache;
	NSMutableDictionary* overdraftLedger;
	NSMutableDictionary* blockedRenewalLedger;
	NSMutableDictionary* dynamicBlacklist;
	NSObject*<OS_dispatch_source> boostedTimer;
	unsigned boostedState;
	NSString* _currentDataSimICCID;
	BOOL hasMDMProfile;
	unsigned long long currentPolicy;
	NSDictionary* mdmProfile;
	NSObject*<OS_dispatch_source> rnfTestIdleTimer;
	/*^block*/id rnfTestAbortReply;
	BOOL _rnfActivated;
	BOOL _wifiCallUnderway;
	BOOL _boosted;
	BOOL _runningRNFTest;
	BOOL _internalBuild;
	unsigned _activationIdentifier;
	long long _fallbackAdvice;

}

@property (nonatomic,readonly) unsigned activationIdentifier;              //@synthesize activationIdentifier=_activationIdentifier - In the implementation block
@property (assign) BOOL rnfActivated;                                      //@synthesize rnfActivated=_rnfActivated - In the implementation block
@property (assign) BOOL wifiCallUnderway;                                  //@synthesize wifiCallUnderway=_wifiCallUnderway - In the implementation block
@property (assign) long long fallbackAdvice;                               //@synthesize fallbackAdvice=_fallbackAdvice - In the implementation block
@property (assign) BOOL boosted;                                           //@synthesize boosted=_boosted - In the implementation block
@property (assign) BOOL runningRNFTest;                                    //@synthesize runningRNFTest=_runningRNFTest - In the implementation block
@property (assign) BOOL internalBuild;                                     //@synthesize internalBuild=_internalBuild - In the implementation block
@property (readonly) BOOL adminDisabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)stopRunningRNFTestWithReply:(/*^block*/id)arg1 ;
+(int)awdWifiAssistPolicyForRNFPolicy:(unsigned long long)arg1 ;
+(void)startRunningRNFTest;
+(id)configureClass:(id)arg1 ;
+(id)internalStateDictionary;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(void)canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(float)appPolicyDenialsScore;
+(id)mdmProfilePath;
+(void)requestBoost:(unsigned)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)_dumpState;
-(id)_states;
-(BOOL)internalBuild;
-(int)configureInstance:(id)arg1 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(id)_currentState;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setRunningRNFTest:(BOOL)arg1 ;
-(BOOL)boosted;
-(id)init;
-(void)_setDataUsagePolicy:(unsigned long long)arg1 ;
-(BOOL)rnfActivated;
-(void)postSpeculativeTelemetryForKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(void)postUpwards:(long long)arg1 ;
-(BOOL)runningRNFTest;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)adminDisabled;
-(id)initTestInstanceWithCellRelay:(id)arg1 wifiRelay:(id)arg2 motionRelay:(id)arg3 ;
-(void)_completeInitialization;
-(void)processRefreshedRNFDataUsageWithGrace:(BOOL)arg1 ;
-(void)_trackCellUsageAfterTriggerDisconnectWithNewSeries:(BOOL)arg1 ;
-(unsigned)activationIdentifier;
-(void)_peekIntoCellPlan;
-(BOOL)_idempotentInitializationFromIdleWithCellRelay:(id)arg1 wifiRelay:(id)arg2 motionRelay:(id)arg3 ;
-(void)_setPolicyVerdictLedgerGivenAsk:(id)arg1 exceptions:(id)arg2 verdict:(id)arg3 explain:(id)arg4 ;
-(void)_bringStateToIdle;
-(BOOL)_isAppName:(id)arg1 withState:(long long)arg2 inListType:(long long)arg3 ;
-(void)commonInit;
-(void)_toggleElevatedState;
-(void)setFallbackAdvice:(long long)arg1 ;
-(void)_administrativeEnable;
-(void)dataPlanMetricsDidChange;
-(BOOL)highCapacityCellPlan;
-(long long)fallbackAdvice;
-(double)appBlacklistsRNFToCellRatio;
-(void)setWifiCallUnderway:(BOOL)arg1 ;
-(void)_administrativeDisable;
-(void)stopElevatedStateWatchdog;
-(id)internalStateDictionary;
-(unsigned long long)appBlacklistsSettleTime;
-(void)stopRNFTestIdleTimer;
-(int)_motionToAwdCode;
-(void)_setDefaultDataUsageParameters;
-(void)rnfTestAbortCFSMWentIdleReply:(BOOL)arg1 ;
-(float)_appPolicyDenialsScore;
-(id)_createAndInitializeAWDMetricForAppQuery:(id)arg1 verdictCode:(int)arg2 reasonCode:(int)arg3 ;
-(void)setBoosted:(BOOL)arg1 ;
-(void)_setUnlimitedDataUsageParameters;
-(void)postAdminChangeUpwards:(BOOL)arg1 ;
-(BOOL)wifiCallUnderway;
-(void)postUpwards:(long long)arg1 appsWithStates:(id)arg2 always:(BOOL)arg3 ;
-(void)postHasAdviceNotification:(BOOL)arg1 ;
-(void)stopWrongUsageGracePeriodTimer;
-(BOOL)_idempotentInitializationFromIdle;
-(void)RNFTestAbortWaitForIdleUntil:(double)arg1 reply:(/*^block*/id)arg2 ;
-(unsigned long long)lookUpDataUsagePolicyForICCID:(id)arg1 fromPolicies:(id)arg2 ;
-(void)startElevatedStateWatchdogWithPeriod:(unsigned long long)arg1 ;
-(void)updateFallbackAdvice:(long long)arg1 ;
-(void)postMotionDetector:(unsigned)arg1 ;
-(void)applyDataUsagePolicyForICCID:(id)arg1 givenPolicies:(id)arg2 ;
-(void)setRnfActivated:(BOOL)arg1 ;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)_updateMptcpState;
-(void)_setUnlimitedDataUsagePolicy:(BOOL)arg1 ;
-(void)dealloc;
-(void)_updateCellFallbackState;
-(void)requestBoost:(unsigned)arg1 ;
@end

