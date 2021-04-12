/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
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
	tcp_connection_fallback_watch_sRef cellFallbackObserver;
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
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)configureClass:(id)arg1 ;
+(float)appPolicyDenialsScore;
+(void)canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)internalStateDictionary;
+(void)requestBoost:(unsigned)arg1 ;
+(id)mdmProfilePath;
+(int)awdWifiAssistPolicyForRNFPolicy:(unsigned long long)arg1 ;
+(void)startRunningRNFTest;
+(void)stopRunningRNFTestWithReply:(/*^block*/id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)commonInit;
-(id)_currentState;
-(id)_states;
-(unsigned)activationIdentifier;
-(BOOL)internalBuild;
-(void)setInternalBuild:(BOOL)arg1 ;
-(void)_dumpState;
-(void)dataPlanMetricsDidChange;
-(int)configureInstance:(id)arg1 ;
-(int)read:(id)arg1 returnedValues:(id)arg2 ;
-(void)generateInfoForId:(unsigned long long)arg1 context:(const char*)arg2 uuid:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(BOOL)noteSymptom:(id)arg1 ;
-(void)_completeInitialization;
-(void)_bringStateToIdle;
-(void)_administrativeDisable;
-(void)_administrativeEnable;
-(id)internalStateDictionary;
-(void)requestBoost:(unsigned)arg1 ;
-(BOOL)_idempotentInitializationFromIdle;
-(BOOL)rnfActivated;
-(BOOL)wifiCallUnderway;
-(void)postHasAdviceNotification:(BOOL)arg1 ;
-(void)applyDataUsagePolicyForICCID:(id)arg1 givenPolicies:(id)arg2 ;
-(void)postUpwards:(long long)arg1 appsWithStates:(id)arg2 always:(BOOL)arg3 ;
-(void)_updateCellFallbackState;
-(void)_updateMptcpState;
-(void)_setDataUsagePolicy:(unsigned long long)arg1 ;
-(void)_peekIntoCellPlan;
-(BOOL)_idempotentInitializationFromIdleWithCellRelay:(id)arg1 wifiRelay:(id)arg2 motionRelay:(id)arg3 ;
-(void)_setUnlimitedDataUsageParameters;
-(void)_setDefaultDataUsageParameters;
-(unsigned long long)lookUpDataUsagePolicyForICCID:(id)arg1 fromPolicies:(id)arg2 ;
-(void)postMotionDetector:(unsigned)arg1 ;
-(void)setRnfActivated:(BOOL)arg1 ;
-(void)setFallbackAdvice:(long long)arg1 ;
-(void)stopElevatedStateWatchdog;
-(void)stopWrongUsageGracePeriodTimer;
-(void)rnfTestAbortCFSMWentIdleReply:(BOOL)arg1 ;
-(void)startElevatedStateWatchdogWithPeriod:(unsigned long long)arg1 ;
-(BOOL)boosted;
-(void)postUpwards:(long long)arg1 ;
-(int)_motionToAwdCode;
-(void)setBoosted:(BOOL)arg1 ;
-(void)_toggleElevatedState;
-(void)postSpeculativeTelemetryForKey:(id)arg1 oldValue:(id)arg2 newValue:(id)arg3 ;
-(long long)fallbackAdvice;
-(void)_canUseApps:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)setRunningRNFTest:(BOOL)arg1 ;
-(BOOL)runningRNFTest;
-(void)RNFTestAbortWaitForIdleUntil:(double)arg1 reply:(/*^block*/id)arg2 ;
-(void)stopRNFTestIdleTimer;
-(id)_createAndInitializeAWDMetricForAppQuery:(id)arg1 verdictCode:(int)arg2 reasonCode:(int)arg3 ;
-(BOOL)_isAppName:(id)arg1 withState:(long long)arg2 inListType:(long long)arg3 ;
-(void)_setPolicyVerdictLedgerGivenAsk:(id)arg1 exceptions:(id)arg2 verdict:(id)arg3 explain:(id)arg4 ;
-(float)_appPolicyDenialsScore;
-(void)processRefreshedRNFDataUsageWithGrace:(BOOL)arg1 ;
-(void)setWifiCallUnderway:(BOOL)arg1 ;
-(void)_trackCellUsageAfterTriggerDisconnectWithNewSeries:(BOOL)arg1 ;
-(id)initTestInstanceWithCellRelay:(id)arg1 wifiRelay:(id)arg2 motionRelay:(id)arg3 ;
-(void)_setUnlimitedDataUsagePolicy:(BOOL)arg1 ;
-(unsigned long long)appBlacklistsSettleTime;
-(double)appBlacklistsRNFToCellRatio;
-(BOOL)highCapacityCellPlan;
-(void)updateFallbackAdvice:(long long)arg1 ;
@end

