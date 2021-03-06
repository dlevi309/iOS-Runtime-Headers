/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/

#import <SymptomEvaluator/SymptomEvaluator-Structs.h>
#import <SymptomEvaluator/AnalyticsEngineCore.h>
#import <libobjc.A.dylib/WiFiShimDelegate.h>
#import <libobjc.A.dylib/ProxyAnalyticsDelegate.h>
#import <libobjc.A.dylib/CoreTelephonyShimDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;
@class NSMutableDictionary, NSDate, NSString, NSMutableData, NSMutableArray, ImpoExpoService, NWPathEvaluator, NSObject, NetworkAnalyticsModel, WiFiShim, SystemSettingsRelay, NSData, NLCRunner, ProxyAnalytics;

@interface NetworkAnalyticsEngine : AnalyticsEngineCore <WiFiShimDelegate, ProxyAnalyticsDelegate, CoreTelephonyShimDelegate> {

	id trafficObserver;
	id dnsObserver;
	id tdObserver;
	id dataStallObserver;
	id captivityRedirectsObserver;
	id certErrorObserver;
	id limObserver;
	NSMutableDictionary* activeEpochs;
	NStatManagerRef routeManager;
	/*^block*/id routeMetricsRefreshCompletionBlock;
	NSMutableDictionary* liveDefaultRoutes;
	int lastScoreExit[5];
	BOOL xpcShutdown;
	NSDate* lastEpochRemoved;
	NSDate* lastKnownGoodNotified;
	NSDate* pendedRssiEdge;
	unsigned long long pendedRssiEdgeTarget;
	int lastReportedRrcValue;
	NSString* lastReportedRrcInterface;
	int combinedCellDNSCounts;
	int combinedWifiDNSCounts;
	NSMutableDictionary* snapshots;
	NSMutableData* journalRecords;
	NSMutableArray* memoryJournalRecords;
	ImpoExpoService* ieService;
	NSDate* journalLastFlushed;
	NWPathEvaluator* cellPathEvaluator;
	NWPathEvaluator* wifiPathEvaluator;
	NWPathEvaluator* etherPathEvaluator;
	NWPathEvaluator* primaryPathEvaluator;
	CTServerConnectionRef serverConnection;
	int cellInternetStatus;
	NSString* cellInternetPDPContext;
	NSObject*<OS_dispatch_queue> notificationQueueWithElevatedPriority;
	unsigned long long cellSPIType;
	NetworkAnalyticsModel* model;
	WiFiShim* _wifiShim;
	SystemSettingsRelay* systemSettingsRelay;
	BOOL _wifiShimFastLQMUpdates;
	BOOL _isABCEnabled;
	BOOL _isInternalBuild;
	NSData* _hashSalt;
	unsigned long long _wifiSingleDNSFailureCount;
	unsigned long long _wifiCompleteDNSFailureCount;
	unsigned long long _cellSingleDNSFailureCount;
	unsigned long long _cellCompleteDNSFailureCount;
	id _rnfWiFiObserver;
	NSObject*<OS_dispatch_source> rnfTestTimeoutTimer;
	NLCRunner* rnfTestNLCRunner;
	BOOL nlcRuleScheduled;
	unsigned long long rnfRssiExtraDescentFactor;
	NSString* _currentICCID;
	BOOL _delegateToProxyAnalytics;
	BOOL _removeOldRecordsNow;
	ProxyAnalytics* _proxyAnalytics;
	NSObject*<OS_os_transaction> _activeEpochTransaction;

}

@property (assign,nonatomic) BOOL delegateToProxyAnalytics;                                    //@synthesize delegateToProxyAnalytics=_delegateToProxyAnalytics - In the implementation block
@property (assign,nonatomic) BOOL removeOldRecordsNow;                                         //@synthesize removeOldRecordsNow=_removeOldRecordsNow - In the implementation block
@property (nonatomic,retain) ProxyAnalytics * proxyAnalytics;                                  //@synthesize proxyAnalytics=_proxyAnalytics - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_transaction> activeEpochTransaction;              //@synthesize activeEpochTransaction=_activeEpochTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)hasNetworkAttachmentOn:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
+(id)sharedInstance;
+(void)relayWiFiViability:(unsigned)arg1 ;
+(int)getLoadedLQMOn:(long long)arg1 ;
+(long long)mapPowerCost:(unsigned char)arg1 ;
+(unsigned)_constructRxSignalExemptionsBitmapFromHint:(BOOL)arg1 reasons:(id)arg2 ;
+(id)mapRadioTechnologyTypeToString:(unsigned char)arg1 ;
+(void)relayRebufferState:(unsigned)arg1 ;
+(BOOL)trainModelAndScore:(BOOL)arg1 lastScoreDate:(id)arg2 output:(id*)arg3 ;
+(id)skimMemoryJournalFor:(unsigned char)arg1 ;
+(void)relayDataStallState:(unsigned)arg1 dnsFailureState:(unsigned)arg2 ;
+(void)performPersistentStoreHealthCheckWithReply:(/*^block*/id)arg1 ;
+(void)setupCoreTelephonyAndBasebandNotificationsOnElevatedPriorityQueue;
+(long long)mapLinkQuality:(int)arg1 ;
+(void)awdCaptureIn:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)hashPrimaryKey:(id)arg1 withSalt:(id)arg2 ;
+(void)sendTrafficInfoFlags:(unsigned)arg1 changeFlags:(unsigned)arg2 foreground:(BOOL)arg3 ;
+(BOOL)performNetAttachmentQueryOn:(long long)arg1 reply:(/*^block*/id)arg2 ;
+(void)layer2MetricsOn:(long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)getStateRelayFor:(long long)arg1 ;
+(id)queue;
+(void)estimatedTransferTimeOn:(long long)arg1 forPayloadInfo:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
+(long long)mapRadioTechnology:(unsigned char)arg1 ;
+(id)mapNrFrequencyBandToString:(char)arg1 ;
+(id)concurrentEpochs;
+(BOOL)getDNSCountsOn:(long long)arg1 total:(long long*)arg2 impacted:(long long*)arg3 ;
+(void)relayCellThroughputAdvice:(unsigned)arg1 ;
+(void)usageToLOICorrelationFor:(long long)arg1 scopedToLOI:(long long)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
+(id)fetchHashSaltFromJournalUsingImpoExpoService:(id)arg1 ;
+(void)getAuditableLoadedLQMOn:(long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
+(id)hashPrimaryKey:(id)arg1 ;
-(void)setCellEstTransferTimeSupportedStatus:(BOOL)arg1 ;
-(void)wifiShim_LQMAsystoleDetected:(double)arg1 ;
-(void)_actUponCellRrcChangeTo:(int)arg1 ;
-(id)_hashPrimaryKey:(id)arg1 withSalt:(id)arg2 ;
-(void)_handleRouteData:(NStatSourceRef)arg1 ;
-(BOOL)_appendJournalRecord:(id)arg1 withPreamble:(SCD_Struct_Ne24*)arg2 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)_actUponLoadedLqmChangeFrom:(int)arg1 to:(int)arg2 onInterfaceType:(long long)arg3 ;
-(void)_getAuditableLoadedLQMOn:(long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(int)_combinedDNSCountForEpoch:(id)arg1 ;
-(void)_registerForSIMStatusChangeNotification:(id)arg1 ;
-(void)_relayDataStallState:(unsigned)arg1 dnsFailureState:(unsigned)arg2 ;
-(void)shutdown;
-(void)wifiShim_L2TriggerDisconnectEdge:(BOOL)arg1 forInterface:(id)arg2 ;
-(void)_disarmFatalSuspector:(id)arg1 withEventAt:(id)arg2 by:(id)arg3 ;
-(void)_retrieveDNSServersForEpoch:(id)arg1 ;
-(void)_establishLqmBaselineOn:(BOOL)arg1 interfaceName:(id)arg2 lqmPtr:(int*)arg3 ;
-(void)_fetchHashSaltFromJournal;
-(void)_setRadioTechnology:(unsigned char)arg1 forInterfaceType:(long long)arg2 ;
-(void)_flowCompleted:(id)arg1 ;
-(void)_processLIM:(id)arg1 ;
-(id)_epochForInterfaceType:(long long)arg1 ;
-(void)_idleExitTransactionCheck;
-(void)_relayWiFiViability:(unsigned)arg1 ;
-(void)abortRNFTestWithReply:(/*^block*/id)arg1 ;
-(void)stopRunningRNFTestWithReply:(/*^block*/id)arg1 ;
-(unsigned char)getCellTrafficClassState;
-(void)processCellDataStallNotification:(id)arg1 ;
-(id)_scoringDuty:(id)arg1 forType:(int)arg2 withRetCode:(int*)arg3 oldestTime:(id*)arg4 ;
-(void)_relayRebufferState:(unsigned)arg1 ;
-(void)_setDefrouteMonitoring:(unsigned)arg1 ofInterfaceType:(long long)arg2 roamingEvent:(BOOL)arg3 family:(unsigned char)arg4 retries:(int)arg5 ;
-(void)_updateCombinedDNSCounts;
-(void)processCellLinkFingerprintNotification:(id)arg1 ;
-(void)processCellHighThroughputNotification:(id)arg1 ;
-(void)_wifiNetworkChange:(id)arg1 ;
-(void)_applyCalculatedScoringMetrics:(id)arg1 entries:(id)arg2 ;
-(BOOL)_flushAllJournalRecords;
-(void)processCellDataTransferTimeEnabledNotification:(id)arg1 ;
-(void)_computeAndApplyLoadedLqmFrom:(int)arg1 oldLqm:(int)arg2 onInterfaceType:(long long)arg3 ;
-(id)_skimMemoryJournalFor:(unsigned char)arg1 ;
-(void)processCellLinkPowerCostNotification:(id)arg1 ;
-(void)processCellDataTransferTimeNotification:(id)arg1 ;
-(void)wifiShim_PreferredNetworksChanged:(id)arg1 ;
-(id)_createNetworkAttachmentIdentifierExclusionList;
-(BOOL)_newCellTransferTimeEstimateRequired;
-(void)wifiShim_WiFiManagerHasRestarted;
-(void)_recoverFromSystemCriticalErrors;
-(id)wifiShim;
-(void)_dumpStats;
-(void)_layer2MetricsOn:(long long)arg1 queue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_awdCaptureIn:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)wifiShim_InfraAdminDisable:(id)arg1 bssid:(id)arg2 ;
-(void)startRNFTestWithConnection:(id)arg1 options:(id)arg2 scenarioName:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_awaitEstimatedDataTransferTimeWithCallbackOnQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)proxyAnalyticsTrainAndScoreComplete:(id)arg1 error:(id)arg2 ;
-(void)_updateAdviceForEpoch:(id)arg1 ;
-(void)_extractCellLinkFingerprintFrom:(CFDataRef)arg1 ;
-(void)_retrieveCellId:(/*^block*/id)arg1 ;
-(void)_trainModelAndScore:(BOOL)arg1 ;
-(void)infoDataTransferTimeEnabledChangedForSubscription:(id)arg1 ;
-(void)infoHighThroughputChangedForSubscription:(id)arg1 ;
-(void)_certError:(id)arg1 ;
-(id)_retrieveCellCarrierName;
-(void)infoTrafficClassChangedForSubscription:(id)arg1 ;
-(unsigned char)getCellRrcState;
-(id)_adviceToNSString:(int)arg1 ;
-(id)lastScoreExits;
-(void)resetCellStatesForXCTests;
-(ProxyAnalytics *)proxyAnalytics;
-(void)infoDataStallChangedForSubscription:(id)arg1 ;
-(BOOL)handlesEntity:(id)arg1 ;
-(long long)_retrieveCellId;
-(void)_registerForLinkQualityNotifications:(id)arg1 ;
-(BOOL)_populateInterfaceTimelineJournalRecord:(SCD_Struct_Ne28*)arg1 forInterface:(long long)arg2 fromDict:(id)arg3 ;
-(void)_updateCellInternetStatus:(int)arg1 pdpContext:(int)arg2 ;
-(void)_observeNetworkFramework;
-(void)signalStrengthChanged:(id)arg1 ;
-(void)ratSelectionChangedForSubscription:(id)arg1 ;
-(void)wifiShim_HintForFallback:(BOOL)arg1 reasons:(id)arg2 ;
-(char)getCellLqmState;
-(void)processCellLinkStateNotification:(id)arg1 ;
-(void)_performPeriodicTasks:(BOOL)arg1 ;
-(int)_generateAdviceForEpoch:(id)arg1 relativeTo:(id)arg2 ;
-(BOOL)_shouldAcceptRouteSource:(NStatSourceRef)arg1 ;
-(void)_sendTrafficInfoFlags:(unsigned)arg1 changeFlags:(unsigned)arg2 foreground:(BOOL)arg3 ;
-(void)_updateICCID:(id)arg1 ;
-(int)_getCellInternetStatus;
-(void)_disarmDOASuspector:(id)arg1 ;
-(void)wifiNetworkChangedForInterface:(id)arg1 roaming:(BOOL)arg2 ;
-(void)wifiShim_L2NewMetrics:(id)arg1 forInterface:(id)arg2 ;
-(void)_removeEpochForInterfaceType:(long long)arg1 ;
-(void)_registerForEnhancedLinkQualityNotifications;
-(NStatSourceRef)_newDefRouteForInterface:(id)arg1 saFamily:(unsigned char)arg2 ;
-(unsigned)_getCellSPIType;
-(id)getCurrCellFpTimeStamp;
-(void)proxyAnalyticsTrainAndScoreInterrupted;
-(void)infoNRServingCellTypeChangedForSubscription:(id)arg1 ;
-(BOOL)delegateToProxyAnalytics;
-(id)setOption:(id)arg1 ;
-(BOOL)processIsAuthorizedForHistoricalSweeps:(id)arg1 ;
-(void)_handleRouteClosing:(NStatSourceRef)arg1 ;
-(void)_computeAndApplyLoadedLqmFrom:(int)arg1 oldLqm:(int)arg2 onInterfaceType:(long long)arg3 loadedLqmAuditRecords:(id)arg4 ;
-(void)_refreshRouteMetricsComplete;
-(id)_model;
-(id)_tcsInfoDescription;
-(void)_refreshRouteMetricsWithCallbackOnQueue:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setRemoveOldRecordsNow:(BOOL)arg1 ;
-(void)cellInfoChangedForSubscription:(id)arg1 ;
-(void)_scoringTrampoline;
-(id)_concurrentEpochs;
-(BOOL)_primaryKeyChange:(id)arg1 interfaceName:(id)arg2 interfaceType:(long long)arg3 roamingEvent:(BOOL)arg4 ;
-(void)setDelegateToProxyAnalytics:(BOOL)arg1 ;
-(void)_armLowQDisconnectSuspector:(id)arg1 ;
-(void)_triggerDisconnectEdge:(id)arg1 ;
-(void)_disarmLowQDisconnectSuspector:(id)arg1 ;
-(void)_armDOASuspector:(id)arg1 ;
-(void)createSnapshotFor:(id)arg1 pred:(id)arg2 actions:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)resetDataFor:(id)arg1 nameKind:(id)arg2 ;
-(void)handleLQMChange;
-(void)performQueryPostProcessing:(id)arg1 actions:(id)arg2 processOutcome:(id)arg3 ;
-(void)_removeOldRouteRecords;
-(id)lastScoreDate;
-(void)_relayCellThroughputAdvice:(unsigned)arg1 ;
-(void)_sendTrafficClassAndExtendedReportToBaseband;
-(id)getOption:(id)arg1 ;
-(void)_awdCaptureHistorical:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_informKernelOfLIMUplink:(BOOL)arg1 downlink:(BOOL)arg2 forInterface:(const char*)arg3 ;
-(id)timeOfDayPrecise;
-(void)performPersistentStoreHealthCheckComplete:(id)arg1 error:(id)arg2 ;
-(void)infoLinkQualityFingeprintChangedForSubscription:(id)arg1 ;
-(void)handleRRCChange;
-(void)_cellNetworkChangeForInterface:(id)arg1 roamingEvent:(BOOL)arg2 ;
-(void)setActiveEpochTransaction:(NSObject*<OS_os_transaction>)arg1 ;
-(void)clientTransactionsRelease;
-(void)_cellNetworkChangeForInterface:(id)arg1 roamingEvent:(BOOL)arg2 subscription:(id)arg3 ;
-(void)performQueryOnEntity:(id)arg1 pred:(id)arg2 sort:(id)arg3 actions:(id)arg4 service:(id)arg5 connection:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)_hasNetworkAttachmentOn:(long long)arg1 isAny:(BOOL)arg2 isBuiltin:(BOOL)arg3 scopedToLOI:(long long)arg4 hasCustomSignature:(id)arg5 queue:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)currentDataSIMIdentifier:(id)arg1 ;
-(BOOL)removeOldRecordsNow;
-(void)_informKernelOfCellRrc:(int)arg1 forInterface:(id)arg2 ;
-(void)_dnsWithSymptoms:(id)arg1 ;
-(BOOL)_recordOfActiveFatalSuspector:(long long)arg1 ;
-(id)initWithWorkspace:(id)arg1 params:(id)arg2 queue:(id)arg3 ;
-(void)infoLinkPowerCostChangedForSubscription:(id)arg1 ;
-(void)_setScalarValueInNetworkAttachments:(id)arg1 targetKeyPath:(id)arg2 basedOn:(id)arg3 matchingKeyPath:(id)arg4 matchValue:(id)arg5 noMatchValue:(id)arg6 ;
-(void)_delayedKnownGoodNetworkAlert;
-(unsigned char)getCellInterfaceState;
-(void)_captivityRedirects:(id)arg1 ;
-(BOOL)_radioTechnologyTypeIsNonLTECellular:(unsigned char)arg1 ;
-(BOOL)_hashPrimaryKeyInPlace:(char*)arg1 withSalt:(id)arg2 ;
-(void)_dataStall:(id)arg1 ;
-(void)wifiShim_BSSIDChangedForInterface:(id)arg1 ;
-(void)_awdCaptureInstant:(id)arg1 replyQueue:(id)arg2 reply:(/*^block*/id)arg3 ;
-(void)_armFatalSuspector:(id)arg1 isActive:(BOOL)arg2 ;
-(void)ctDataStatusChangedForSubscription:(id)arg1 ;
-(void)_retrieveICCID;
-(void)infoLinkStateChangedForSubscription:(id)arg1 ;
-(id)_hashPrimaryKey:(id)arg1 ;
-(void)_trackRealTimeLqmLastUpdatedOnInterfaceType:(long long)arg1 ;
-(void)setProhibitNetworkAgentsForNWParameters:(id)arg1 ;
-(void)_setLastScoreDate:(id)arg1 ;
-(void)_registerForCellChangedNotification:(id)arg1 ;
-(void)_refreshRouteMetrics;
-(void)processCellNRServingCellTypeNotification:(id)arg1 ;
-(void)_setupCoreTelephonyAndBasebandNotificationsOnElevatedPriorityQueue;
-(BOOL)_performNetAttachmentQueryOn:(long long)arg1 reply:(/*^block*/id)arg2 ;
-(BOOL)_populateLIMJournalRecord:(SCD_Struct_Ne29*)arg1 fromKernelDict:(id)arg2 ;
-(NSObject*<OS_os_transaction>)activeEpochTransaction;
-(void)_usageToLOICorrelationFor:(long long)arg1 scopedToLOI:(long long)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_wifiKnownNetworksDeleted:(id)arg1 ;
-(BOOL)getCellEstTransferTimeSupportedStatus;
-(void)_estimatedTransferTimeOn:(long long)arg1 forPayloadInfo:(id)arg2 queue:(id)arg3 reply:(/*^block*/id)arg4 ;
-(void)_updateAdviceForInterfaceType:(long long)arg1 ;
-(id)getPrevCellFpTimeStamp;
-(void)setProxyAnalytics:(ProxyAnalytics *)arg1 ;
-(BOOL)_getDNSCountsOn:(long long)arg1 total:(long long*)arg2 impacted:(long long*)arg3 ;
-(void)_createJournalRecordOfType:(unsigned char)arg1 forInterface:(long long)arg2 fromDict:(id)arg3 ;
-(void)infoDataTransferTimeChangedForSubscription:(id)arg1 ;
-(long long)_processCTCellInfo:(id)arg1 ;
-(void)ctServerConnectionNotification:(CFStringRef)arg1 notificationInfo:(CFDictionaryRef)arg2 ;
-(void)processCellTrafficClassNotification:(id)arg1 ;
-(BOOL)_populateLQMJournalRecord:(SCD_Struct_Ne30*)arg1 fromCellFingerprint:(BOOL)arg2 key:(const char*)arg3 atLOI:(long long)arg4 ofInterfaceType:(long long)arg5 lqm:(int)arg6 isFaulty:(unsigned)arg7 ;
-(id)_getCellInternetPDPContext;
-(int)performQueryOnEntityFromCache:(id)arg1 pred:(id)arg2 altpred:(id*)arg3 actions:(id)arg4 found:(id*)arg5 ;
-(void)dealloc;
@end

