/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSMutableSet, ContinuousAVFlowDetector, StrictlyPeriodicAVFlowDetector, FlowScrutinizer, FlowOriginLedger, NSSet;

@interface FlowOracle : NSObject {

	NSMutableSet* _expectedTransferOrigins;
	NSMutableSet* _coreMediaAssetDownloadOrigins;
	NSMutableSet* _likelyBelowThresholdAVFlows;
	NSMutableSet* _likelyOverThresholdAVFlows;
	NSMutableSet* _suppressedAVFlows;
	NSMutableSet* _accumulatedTransferOrigins;
	NSMutableSet* _accumulatedCoreMediaAssetDownloadOrigins;
	NSMutableSet* _highInterfaceUseContributors;
	ContinuousAVFlowDetector* _continuousAVDetector;
	StrictlyPeriodicAVFlowDetector* _strictlyPeriodicAVDetector;
	double _prevStateRefreshTimestamp;
	double _prevStateRefreshTimestampForTputEstimates;
	double _olderSateRefreshTimestampForTputEstimates;
	BOOL _avUseCasesSupported;
	BOOL _hasSustainedInterfaceTraffic;
	BOOL _hasSustainedInterfaceRxTraffic;
	BOOL _hasSustainedInterfaceTxTraffic;
	double _thresholdAudioVideoFlowsClassifiedIntensive;
	unsigned long long _maxAppFlowMetricForAVDetermination;
	unsigned long long _numPhysicalInterfaceSamplesForSustainedHighThroughput;
	double _minPhysicalInterfaceRxUsageForSustainedHighThroughput;
	double _minInitialInterfaceRxUsageForSustainedHighThroughput;
	double _minPhysicalInterfaceTxUsageForSustainedHighThroughput;
	double _minInitialInterfaceTxUsageForSustainedHighThroughput;
	double _coreMediaAssetDownloadThresholdFailureQuarantineTime;
	BOOL _hasSustainedHighInterfaceRxThroughput;
	BOOL _hasSustainedHighInterfaceTxThroughput;
	FlowScrutinizer* _flowScrutinizer;
	double _transferSizeRelatedRecentThroughput;
	double _transferSizeRelatedRecentRxThroughput;
	double _transferSizeRelatedRecentTxThroughput;
	double _busiestOriginRecentThroughput;
	FlowOriginLedger* _busiestOrigin;

}

@property (nonatomic,retain) FlowScrutinizer * flowScrutinizer;                                              //@synthesize flowScrutinizer=_flowScrutinizer - In the implementation block
@property (nonatomic,readonly) int activeLimitedThroughputAudioVideoTrafficForegroundFlowScore; 
@property (nonatomic,readonly) int activeHighThroughputAudioVideoTrafficForegroundFlowScore; 
@property (nonatomic,readonly) unsigned long long numLowerThresholdTransferSizes; 
@property (nonatomic,readonly) unsigned long long numUpperThresholdTransferSizes; 
@property (nonatomic,readonly) unsigned long long numActiveTransferSizes; 
@property (nonatomic,readonly) double transferSizeRelatedRecentThroughput;                                   //@synthesize transferSizeRelatedRecentThroughput=_transferSizeRelatedRecentThroughput - In the implementation block
@property (nonatomic,readonly) double transferSizeRelatedRecentRxThroughput;                                 //@synthesize transferSizeRelatedRecentRxThroughput=_transferSizeRelatedRecentRxThroughput - In the implementation block
@property (nonatomic,readonly) double transferSizeRelatedRecentTxThroughput;                                 //@synthesize transferSizeRelatedRecentTxThroughput=_transferSizeRelatedRecentTxThroughput - In the implementation block
@property (nonatomic,readonly) unsigned long long numCandidateCoreMediaAssetDownloads; 
@property (nonatomic,readonly) unsigned long long numActiveCoreMediaAssetDownloads; 
@property (nonatomic,readonly) double coreMediaAssetDownloadRelatedRecentThroughput; 
@property (nonatomic,readonly) BOOL hasSustainedHighInterfaceThroughput; 
@property (nonatomic,readonly) BOOL hasSustainedHighInterfaceRxThroughput;                                   //@synthesize hasSustainedHighInterfaceRxThroughput=_hasSustainedHighInterfaceRxThroughput - In the implementation block
@property (nonatomic,readonly) BOOL hasSustainedHighInterfaceTxThroughput;                                   //@synthesize hasSustainedHighInterfaceTxThroughput=_hasSustainedHighInterfaceTxThroughput - In the implementation block
@property (nonatomic,readonly) double busiestOriginRecentThroughput;                                         //@synthesize busiestOriginRecentThroughput=_busiestOriginRecentThroughput - In the implementation block
@property (nonatomic,readonly) FlowOriginLedger * busiestOrigin;                                             //@synthesize busiestOrigin=_busiestOrigin - In the implementation block
@property (nonatomic,readonly) NSSet * transferContributors; 
@property (nonatomic,readonly) NSSet * highInterfaceUseContributors;                                         //@synthesize highInterfaceUseContributors=_highInterfaceUseContributors - In the implementation block
@property (nonatomic,readonly) NSSet * coreMediaAssetDownloadContributors; 
@property (nonatomic,readonly) NSSet * allContributors; 
+(id)sharedInstanceForInterfaceType:(long long)arg1 ;
-(id)init;
-(void)_clearState;
-(id)getState:(BOOL)arg1 ;
-(int)setConfiguration:(id)arg1 ;
-(void)restoreDefaults;
-(void)setFlowScrutinizer:(FlowScrutinizer *)arg1 ;
-(FlowScrutinizer *)flowScrutinizer;
-(NSSet *)transferContributors;
-(FlowOriginLedger *)busiestOrigin;
-(NSSet *)coreMediaAssetDownloadContributors;
-(void)startSamplingPeriod:(id)arg1 ;
-(void)logCoreMediaAssetDownloadContributors:(unsigned long long)arg1 ;
-(void)logTransferContributors:(unsigned long long)arg1 ;
-(void)logInterfaceUseContributors:(unsigned long long)arg1 ;
-(unsigned long long)numActiveCoreMediaAssetDownloads;
-(double)coreMediaAssetDownloadRelatedRecentThroughput;
-(void)markCoreMediaAssetDownloadsAsActive;
-(void)markCoreMediaAssetDownloadsAsInactiveAt:(double)arg1 ;
-(unsigned long long)numCandidateCoreMediaAssetDownloads;
-(unsigned long long)numActiveTransferSizes;
-(double)transferSizeRelatedRecentThroughput;
-(void)markTransferSizeFlowsAsInactive;
-(unsigned long long)numUpperThresholdTransferSizes;
-(void)markTransferSizeFlowsAsActive;
-(unsigned long long)numLowerThresholdTransferSizes;
-(BOOL)hasSustainedHighInterfaceThroughput;
-(BOOL)hasSustainedHighInterfaceRxThroughput;
-(BOOL)hasSustainedHighInterfaceTxThroughput;
-(int)activeHighThroughputAudioVideoTrafficForegroundFlowScore;
-(int)activeLimitedThroughputAudioVideoTrafficForegroundFlowScore;
-(BOOL)hadZeroInterfaceTrafficOn:(id)arg1 forLast:(double)arg2 ;
-(void)refreshState:(id)arg1 ;
-(void)refreshTransferSizeState;
-(NSSet *)allContributors;
-(double)busiestOriginRecentThroughput;
-(void)noteClosingFlow:(id)arg1 ledger:(id)arg2 originLedger:(id)arg3 ;
-(BOOL)flowQualfiesForAVHeuristics:(id)arg1 ;
-(void)applyFlowHeuristics:(id)arg1 onBehalfOf:(id)arg2 ;
-(void)evaluatePossibleAVFlows:(id)arg1 currentFlowCount:(unsigned long long)arg2 activeFlowCount:(unsigned long long)arg3 ;
-(void)ensureNonZeroPysicalInterfaceThroughputParameters;
-(double)transferSizeRelatedRecentRxThroughput;
-(double)transferSizeRelatedRecentTxThroughput;
-(NSSet *)highInterfaceUseContributors;
@end

