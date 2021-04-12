/*
* Generated on Thursday, January 14, 2021 at 2:24:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@protocol OS_dispatch_queue, CellThroughputAdviserDelegate;
@class WiFiViabilityMonitor, NSMutableDictionary, AWDSymptomsCellularSDMAdviceChange, NSSet, NSMutableSet, NSObject, FlowOracle, FlowScrutinizer;

@interface CellThroughputAdviser : NSObject {

	BOOL _pollInProgress;
	unsigned _reportedAdvice;
	unsigned long long _reportedCause;
	unsigned long long _initiallyReportedCause;
	unsigned _wifiViability;
	int _traceFD;
	BOOL _traceVerbose;
	BOOL _avUseCasesSupported;
	double _lastStateUpdate;
	double _lastActivityStatsUpdate;
	double _sampleStartTime;
	double _lastHighInterfaceUse;
	double _lastTransferSizeUsageTimestamp;
	double _lastAssetDownloadUsageTimestamp;
	double _lastHighInterfaceUseDampeningInterval;
	double _lastHighTransferSizeDampeningInterval;
	double _lastPromotedTransferSizeDampeningInterval;
	double _totalActiveTime;
	double _totalDisabledTime;
	double _totalQuiesceTime;
	double _totalInferredSleepTime;
	double _inactivityTimeoutForQuiesce;
	unsigned long long _numPolls;
	double _lastPollTime;
	double _pollIntervalHistogramResetTime;
	unsigned _pollIntervalHistogram[36];
	double _minTransferSizeThroughputForUpgrade;
	double _minDisplayOnTransferSizeThroughputForUpgrade;
	double _minTransferSizeThroughputForContinuedUpgradeSub6;
	double _minTransferSizeThroughputForContinuedUpgradeMmWave;
	double _minTransferSizeThroughputForContinuedUpgradeRequest;
	double _minAssetDownloadThroughputForUpgrade;
	double _minAssetDownloadThroughputForContinuedUpgradeRequest;
	double _minAssetDownloadThroughputForContinuedUpgradeSub6;
	double _minAssetDownloadThroughputForContinuedUpgradeMmWave;
	double _maxAssetDownloadDurationBelowThreshold;
	unsigned _numLowerTransferThresholdFlowsForUpperThreshold;
	unsigned _numDisplayOnLowerTransferThresholdFlowsForUpperThreshold;
	unsigned _adviceForSustainedHighInterfaceThroughput;
	unsigned _adviceForModestAVFlows;
	unsigned _adviceForModestAVFlowsLowerCertainty;
	unsigned _adviceForBusyAVFlows;
	unsigned _adviceForBusyAVFlowsLowerCertainty;
	unsigned _stateLogLevel;
	unsigned _stateLogLevelForVerbose;
	unsigned _dispatchAfterSeqno;
	unsigned _powerLogSeqno;
	unsigned _AWDMetricSeqno;
	double _AWDTimeOfLastReport;
	BOOL _quiesced;
	WiFiViabilityMonitor* _wifiViabilityMonitor;
	NSMutableDictionary* _pendingDispatchAfterBlocks;
	NSMutableDictionary* _pendingPowerLogReport;
	AWDSymptomsCellularSDMAdviceChange* _pendingAWDAdviceChangeReport;
	NSSet* _previousSampleContributors;
	NSSet* _prevAWDInitiators;
	BOOL _previousIsScreenDark;
	BOOL _previousIsScreenLocked;
	NSMutableSet* _pendingDelayDetails;
	BOOL _enabled;
	BOOL _isScreenDark;
	BOOL _isScreenLocked;
	char _nrFrequencyBand;
	unsigned _adminAdviceOverride;
	unsigned _targetAdviceLevel;
	double _propertyChangeTimestamp;
	NSObject*<OS_dispatch_queue> _queue;
	id<CellThroughputAdviserDelegate> _delegate;
	FlowOracle* _flowOracle;
	FlowScrutinizer* _flowScrutinizer;

}

@property (nonatomic,retain) FlowOracle * flowOracle;                                        //@synthesize flowOracle=_flowOracle - In the implementation block
@property (nonatomic,retain) FlowScrutinizer * flowScrutinizer;                              //@synthesize flowScrutinizer=_flowScrutinizer - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                                   //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL isScreenDark;                                              //@synthesize isScreenDark=_isScreenDark - In the implementation block
@property (assign,nonatomic) BOOL isScreenLocked;                                            //@synthesize isScreenLocked=_isScreenLocked - In the implementation block
@property (assign,nonatomic) char nrFrequencyBand;                                           //@synthesize nrFrequencyBand=_nrFrequencyBand - In the implementation block
@property (assign,nonatomic) unsigned adminAdviceOverride;                                   //@synthesize adminAdviceOverride=_adminAdviceOverride - In the implementation block
@property (assign,nonatomic) unsigned targetAdviceLevel;                                     //@synthesize targetAdviceLevel=_targetAdviceLevel - In the implementation block
@property (assign,nonatomic) double propertyChangeTimestamp;                                 //@synthesize propertyChangeTimestamp=_propertyChangeTimestamp - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                             //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<CellThroughputAdviserDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(int)configureInstance:(id)arg1 ;
-(BOOL)enabled;
-(BOOL)isScreenLocked;
-(id)init;
-(void)setPollingRate:(double)arg1 ;
-(id<CellThroughputAdviserDelegate>)delegate;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setDelegate:(id<CellThroughputAdviserDelegate>)arg1 ;
-(void)quiesce;
-(void)postAWDMetric:(id)arg1 withIdentifier:(unsigned)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setIsScreenLocked:(BOOL)arg1 ;
-(void)setPropertyChangeTimestamp:(double)arg1 ;
-(void)setIsScreenDark:(BOOL)arg1 ;
-(void)setNrFrequencyBand:(char)arg1 ;
-(void)reportPeriodicAWDStatistics;
-(void)willPollFlows;
-(void)didPollFlowsAt:(double)arg1 ;
-(void)noteFlowSnapshot:(id)arg1 withClassification:(id)arg2 ;
-(void)timerCallbackWithContext:(id)arg1 at:(double)arg2 ;
-(id)getStateAt:(double)arg1 ;
-(void)noteCoreMediaAssetDownloadEvent:(unsigned long long)arg1 downloadUUID:(id)arg2 onBehalfOf:(id)arg3 duration:(double)arg4 at:(double)arg5 ;
-(void)noteExpectedTransfer:(unsigned long long)arg1 dueTo:(int)arg2 flowUUID:(id)arg3 at:(double)arg4 ;
-(void)dumpStateAt:(double)arg1 verbose:(BOOL)arg2 ;
-(BOOL)isScreenDark;
-(void)restoreDefaults;
-(void)setFlowOracle:(FlowOracle *)arg1 ;
-(void)setFlowScrutinizer:(FlowScrutinizer *)arg1 ;
-(FlowScrutinizer *)flowScrutinizer;
-(FlowOracle *)flowOracle;
-(id)encodingToNSUUID:(id)arg1 ;
-(BOOL)encodingRepresentsUint64:(id)arg1 ;
-(BOOL)encodingRepresentsInt:(id)arg1 ;
-(BOOL)encodingRepresentsNSString:(id)arg1 ;
-(id)jsonForAWDReport:(id)arg1 ;
-(id)jsonForTimeInterval:(double)arg1 indent:(int)arg2 ;
-(id)_getCombinedStateAt:(double)arg1 ;
-(BOOL)encodingRepresentsNSTimeInterval:(id)arg1 ;
-(void)_traceDelegateCall:(char*)arg1 param1Interval:(double)arg2 param2:(unsigned long long)arg3 ;
-(void)_initiatorArray:(id)arg1 addOriginNameWithForegroundPrefix:(id)arg2 ;
-(void)_traceDelegateCall:(char*)arg1 param1Id:(id)arg2 at:(double)arg3 ;
-(id)_causeInitiators:(unsigned long long)arg1 ;
-(id)_initiatorNameSetFromCauseArray:(id)arg1 ;
-(void)_AWDCollectLatestLinkThroughput:(id)arg1 ;
-(void)_dispatchAfterDelay:(double)arg1 block:(/*^block*/id)arg2 ;
-(void)_startPowerLogCollectionFor:(unsigned)arg1 ;
-(void)_finishPowerLogCollection;
-(BOOL)_powerLogActionForNewAdvice:(unsigned)arg1 cause:(unsigned long long)arg2 at:(double)arg3 ;
-(BOOL)_AWDActionForNewAdvice:(unsigned)arg1 cause:(unsigned long long)arg2 at:(double)arg3 ;
-(id)currentAWDSymptomsCellularSDMPollingStatistics;
-(id)currentAWDSymptomsCellularSDMTimeStatistics;
-(double)_minRequiredCoreMediaAssetDownloadThroughputForCurrentRadioState;
-(unsigned long long)_coreMediaAssetDownloadActiveCauseForCurrentRadioState;
-(unsigned long long)_coreMediaAssetDownloadHysteresisCauseForCurrentRadioState;
-(double)_minRequiredLargeTransferThroughputForCurrentRadioState;
-(unsigned long long)_largeTransferContinuesCauseForCurrentRadioState;
-(unsigned long long)_largeTransferHysteresisCauseForCurrentRadioState;
-(unsigned long long)_largeTransferFinalHysteresisCauseForCurrentRadioState;
-(BOOL)checkCoreMediaAssetDownloadCauses:(unsigned long long*)arg1 ;
-(BOOL)checkLibnetcoreLargeTransferCauses:(unsigned long long*)arg1 ;
-(void)_traceDelegateCall:(char*)arg1 param1Interval:(double)arg2 at:(double)arg3 ;
-(void)performActivityStatsTimekeeping;
-(unsigned)determineAdvice:(unsigned long long*)arg1 ;
-(void)noteAdviceForMetrics:(unsigned)arg1 cause:(unsigned long long)arg2 ;
-(void)_traceDelegateCall:(char*)arg1 param1:(unsigned)arg2 at:(double)arg3 ;
-(void)_traceSetter:(char*)arg1 intval:(int)arg2 ;
-(void)_refreshAdvice:(int)arg1 ;
-(void)unquiesce;
-(void)_traceSetter:(char*)arg1 stringVal:(id)arg2 ;
-(void)_traceCall:(char*)arg1 ;
-(void)_traceCall:(char*)arg1 param1:(id)arg2 ;
-(void)notePollIntervalForMetrics:(double)arg1 ;
-(void)_assessActivityStateForQuiesce;
-(void)_traceStateAt:(double)arg1 ;
-(id)jsonForSnapshot:(id)arg1 ;
-(id)jsonForClassification:(id)arg1 ;
-(void)_traceCall:(char*)arg1 param1:(id)arg2 param2:(id)arg3 ;
-(id)jsonForUint64:(unsigned long long)arg1 ;
-(id)jsonForUUID:(id)arg1 ;
-(id)jsonForNSString:(id)arg1 ;
-(void)_traceCall:(char*)arg1 param1:(id)arg2 param2:(id)arg3 param3:(id)arg4 param4:(id)arg5 param5:(id)arg6 ;
-(id)jsonForInt:(int)arg1 ;
-(void)_traceCall:(char*)arg1 param1:(id)arg2 param2:(id)arg3 param3:(id)arg4 param4:(id)arg5 ;
-(id)_getState:(BOOL)arg1 ;
-(void)_dumpArray:(id)arg1 ;
-(void)setAdminAdviceOverride:(unsigned)arg1 ;
-(void)setTargetAdviceLevel:(unsigned)arg1 ;
-(double)encodingToNSTimeInterval:(id)arg1 ;
-(void)_checkPendingTimers:(double)arg1 ;
-(BOOL)encodingRepresentsNSUUID:(id)arg1 ;
-(unsigned long long)encodingToUint64:(id)arg1 ;
-(int)encodingToInt:(id)arg1 ;
-(id)encodingToNSString:(id)arg1 ;
-(void)_traceCall:(char*)arg1 param1:(id)arg2 param2:(id)arg3 param3:(id)arg4 ;
-(long long)configItemToLongLong:(id)arg1 ;
-(void)setTimerCallbackWithSimulatedDelay:(double)arg1 context:(id)arg2 ;
-(void)performAction:(id)arg1 verbose:(BOOL)arg2 ;
-(char)nrFrequencyBand;
-(unsigned)adminAdviceOverride;
-(unsigned)targetAdviceLevel;
-(double)propertyChangeTimestamp;
@end

