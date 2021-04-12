/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>

@protocol OS_os_transaction;
@class NSMutableDictionary, NSMutableSet, NetworkAnalyticsStateRelay, AWDSymptomsNetworkAnalyticsRRCConnectedPeriod, NSObject;

@interface NOIAnalyticsEngine : AnalyticsEngineCore {

	NSMutableDictionary* liveClients;
	NSMutableSet* managedNOIs;
	id _cellEpochObserver;
	id _wifiEpochObserver;
	id _wiredEpochObserver;
	id _modelTurndownObserver;
	id _cellStateChangeObserver;
	id _cellStateCapabilityObserver;
	id _cellFallbackObserver;
	id _considerAlternateUpdateObserver;
	id _primaryObserver;
	int notifyToken;
	BOOL xpcShutdown;
	NSMutableSet* _predictionQueryClients;
	unsigned long long _predictionQueryCount;
	unsigned long long _startConnectionTimestamp;
	unsigned long long _startBackgroundConnectionTimestamp;
	unsigned long long _lastDisconnectTimestamp;
	unsigned _ingressLQM;
	unsigned long long _ingressUlThroughput;
	unsigned long long _ingressDlThroughput;
	unsigned long long _ingressBytesIn;
	unsigned long long _ingressBytesOut;
	unsigned long long _ingressPacketsIn;
	unsigned long long _ingressPacketsOut;
	unsigned long long _lastDisconnectedSecs;
	BOOL _ingressMetricAvailable;
	NetworkAnalyticsStateRelay* _cellRelay;
	NetworkAnalyticsStateRelay* _wifiRelay;
	NetworkAnalyticsStateRelay* _wiredRelay;
	AWDSymptomsNetworkAnalyticsRRCConnectedPeriod* _rrcConnectionMetric;
	NSObject*<OS_os_transaction> _noiLiveClientTransaction;

}
+(void)getQueryStatistics:(SCD_Struct_NO9*)arg1 ;
+(id)queue;
+(void)resetQueryStatistics;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_coreNOIMembershipChangeOn:(id)arg1 forNOIs:(id)arg2 isAddEvent:(BOOL)arg3 ;
-(id)_clientNOIEvent:(id)arg1 forNOIs:(id)arg2 isAddEvent:(BOOL)arg3 ;
-(void)canUseOnAlternate:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_bottomUpNOIEvent:(id)arg1 withInfo:(id)arg2 ;
-(void)_resetQueryStatistics;
-(void)_updateRrcStateChangeTimestamp:(long long)arg1 forRrcState:(int)arg2 ;
-(void)clientEvent:(id)arg1 isAddEvent:(BOOL)arg2 ;
-(void)_getQueryStatistics:(SCD_Struct_NO9*)arg1 ;
-(void)_resetRRCMetricCounters;
-(void)l2ThroughputMetrics:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)estTransferTime:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_observeStateRelays;
-(void)auditableLinkQuality:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)inquireNOIFor:(id)arg1 orPredicate:(id)arg2 requestedKeys:(id)arg3 options:(id)arg4 connection:(id)arg5 reply:(/*^block*/id)arg6 ;
-(id)_validatedNOIs:(id)arg1 orPredicate:(id)arg2 ;
-(void)clientTransactionsRelease;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)subscribeToNOIsFor:(id)arg1 orPredicate:(id)arg2 options:(id)arg3 connection:(id)arg4 ;
-(void)_evalPostingNotificationForNOI:(id)arg1 forEvent:(id)arg2 withInfo:(id)arg3 ;
-(void)networkAttachmentInfo:(id)arg1 options:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_dumpClientStructure;
-(BOOL)_initializeAllManagedNOIs;
-(void)unsubscribeToNOIs:(id)arg1 connection:(id)arg2 ;
-(void)dealloc;
@end

