/*
* Generated on Thursday, January 14, 2021 at 2:24:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
*/


@class NSString, FlowOriginLedger, NSUUID, NSMutableArray;

@interface FlowLedger : NSObject {

	BOOL _trafficClassIsAudioVideo;
	BOOL _flowIsUDP;
	BOOL _flowIsTCP;
	BOOL _flowIsQUIC;
	BOOL _lastSampleWasIdle;
	BOOL _flowStartedAsForeground;
	BOOL _flowLastSeenAsForeground;
	BOOL _notedAsFGAudioVideoTC;
	BOOL _notedAsAudioVideoTC;
	BOOL _rxTransferSizeLowerThreshold;
	BOOL _rxTransferSizeUpperThreshold;
	BOOL _txTransferSizeLowerThreshold;
	BOOL _txTransferSizeUpperThreshold;
	unsigned _numSamples;
	unsigned _trafficClass;
	unsigned _expectedTransferState;
	NSString* _latestClassification;
	FlowOriginLedger* _creatorLedger;
	NSUUID* _flowUUID;
	unsigned long long _flowIdentifier;
	unsigned long long _totalObservedIfTypeRxBytes;
	unsigned long long _totalObservedIfTypeTxBytes;
	double _prevSampleTime;
	double _flowIdleDuration;
	double _flowNonIdleDuration;
	double _pendingFlowNonIdleDuration;
	double _maxRxThroughput;
	double _maxTxThroughput;
	double _minRxThroughput;
	double _minTxThroughput;
	NSMutableArray* _alternatingIdleNonIdlePeriods;
	NSMutableArray* _nonIdleSamples;
	NSString* _flowType;
	double _transferStateEntryTimestamp;

}

@property (nonatomic,readonly) NSString * createdBy; 
@property (nonatomic,retain) NSString * latestClassification;                             //@synthesize latestClassification=_latestClassification - In the implementation block
@property (nonatomic,retain) FlowOriginLedger * creatorLedger;                            //@synthesize creatorLedger=_creatorLedger - In the implementation block
@property (nonatomic,retain) NSUUID * flowUUID;                                           //@synthesize flowUUID=_flowUUID - In the implementation block
@property (assign,nonatomic) unsigned long long flowIdentifier;                           //@synthesize flowIdentifier=_flowIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeRxBytes;               //@synthesize totalObservedIfTypeRxBytes=_totalObservedIfTypeRxBytes - In the implementation block
@property (assign,nonatomic) unsigned long long totalObservedIfTypeTxBytes;               //@synthesize totalObservedIfTypeTxBytes=_totalObservedIfTypeTxBytes - In the implementation block
@property (assign,nonatomic) double prevSampleTime;                                       //@synthesize prevSampleTime=_prevSampleTime - In the implementation block
@property (assign,nonatomic) double flowIdleDuration;                                     //@synthesize flowIdleDuration=_flowIdleDuration - In the implementation block
@property (assign,nonatomic) double flowNonIdleDuration;                                  //@synthesize flowNonIdleDuration=_flowNonIdleDuration - In the implementation block
@property (assign,nonatomic) double pendingFlowNonIdleDuration;                           //@synthesize pendingFlowNonIdleDuration=_pendingFlowNonIdleDuration - In the implementation block
@property (assign,nonatomic) double maxRxThroughput;                                      //@synthesize maxRxThroughput=_maxRxThroughput - In the implementation block
@property (assign,nonatomic) double maxTxThroughput;                                      //@synthesize maxTxThroughput=_maxTxThroughput - In the implementation block
@property (assign,nonatomic) double minRxThroughput;                                      //@synthesize minRxThroughput=_minRxThroughput - In the implementation block
@property (assign,nonatomic) double minTxThroughput;                                      //@synthesize minTxThroughput=_minTxThroughput - In the implementation block
@property (nonatomic,readonly) double recentRxThroughput; 
@property (nonatomic,readonly) double recentTxThroughput; 
@property (nonatomic,retain) NSMutableArray * alternatingIdleNonIdlePeriods;              //@synthesize alternatingIdleNonIdlePeriods=_alternatingIdleNonIdlePeriods - In the implementation block
@property (nonatomic,retain) NSMutableArray * nonIdleSamples;                             //@synthesize nonIdleSamples=_nonIdleSamples - In the implementation block
@property (nonatomic,retain) NSString * flowType;                                         //@synthesize flowType=_flowType - In the implementation block
@property (assign,nonatomic) unsigned numSamples;                                         //@synthesize numSamples=_numSamples - In the implementation block
@property (assign,nonatomic) unsigned trafficClass;                                       //@synthesize trafficClass=_trafficClass - In the implementation block
@property (assign,nonatomic) BOOL trafficClassIsAudioVideo;                               //@synthesize trafficClassIsAudioVideo=_trafficClassIsAudioVideo - In the implementation block
@property (assign,nonatomic) BOOL flowIsUDP;                                              //@synthesize flowIsUDP=_flowIsUDP - In the implementation block
@property (assign,nonatomic) BOOL flowIsTCP;                                              //@synthesize flowIsTCP=_flowIsTCP - In the implementation block
@property (assign,nonatomic) BOOL flowIsQUIC;                                             //@synthesize flowIsQUIC=_flowIsQUIC - In the implementation block
@property (assign,nonatomic) BOOL lastSampleWasIdle;                                      //@synthesize lastSampleWasIdle=_lastSampleWasIdle - In the implementation block
@property (assign,nonatomic) BOOL flowStartedAsForeground;                                //@synthesize flowStartedAsForeground=_flowStartedAsForeground - In the implementation block
@property (assign,nonatomic) BOOL flowLastSeenAsForeground;                               //@synthesize flowLastSeenAsForeground=_flowLastSeenAsForeground - In the implementation block
@property (assign,nonatomic) BOOL notedAsFGAudioVideoTC;                                  //@synthesize notedAsFGAudioVideoTC=_notedAsFGAudioVideoTC - In the implementation block
@property (assign,nonatomic) BOOL notedAsAudioVideoTC;                                    //@synthesize notedAsAudioVideoTC=_notedAsAudioVideoTC - In the implementation block
@property (assign,nonatomic) unsigned expectedTransferState;                              //@synthesize expectedTransferState=_expectedTransferState - In the implementation block
@property (assign,nonatomic) double transferStateEntryTimestamp;                          //@synthesize transferStateEntryTimestamp=_transferStateEntryTimestamp - In the implementation block
@property (assign,nonatomic) BOOL rxTransferSizeLowerThreshold;                           //@synthesize rxTransferSizeLowerThreshold=_rxTransferSizeLowerThreshold - In the implementation block
@property (assign,nonatomic) BOOL rxTransferSizeUpperThreshold;                           //@synthesize rxTransferSizeUpperThreshold=_rxTransferSizeUpperThreshold - In the implementation block
@property (assign,nonatomic) BOOL txTransferSizeLowerThreshold;                           //@synthesize txTransferSizeLowerThreshold=_txTransferSizeLowerThreshold - In the implementation block
@property (assign,nonatomic) BOOL txTransferSizeUpperThreshold;                           //@synthesize txTransferSizeUpperThreshold=_txTransferSizeUpperThreshold - In the implementation block
-(void)setTrafficClass:(unsigned)arg1 ;
-(id)briefDescription;
-(unsigned long long)flowIdentifier;
-(unsigned)trafficClass;
-(void)setFlowIdentifier:(unsigned long long)arg1 ;
-(void)setFlowType:(NSString *)arg1 ;
-(id)description;
-(void)setFlowUUID:(NSUUID *)arg1 ;
-(NSUUID *)flowUUID;
-(NSString *)createdBy;
-(NSString *)flowType;
-(unsigned)numSamples;
-(double)prevSampleTime;
-(void)setPrevSampleTime:(double)arg1 ;
-(BOOL)lastSampleWasIdle;
-(NSMutableArray *)alternatingIdleNonIdlePeriods;
-(double)pendingFlowNonIdleDuration;
-(void)setPendingFlowNonIdleDuration:(double)arg1 ;
-(void)setLastSampleWasIdle:(BOOL)arg1 ;
-(void)setAlternatingIdleNonIdlePeriods:(NSMutableArray *)arg1 ;
-(NSMutableArray *)nonIdleSamples;
-(void)setNonIdleSamples:(NSMutableArray *)arg1 ;
-(unsigned long long)totalObservedIfTypeRxBytes;
-(void)setTotalObservedIfTypeRxBytes:(unsigned long long)arg1 ;
-(unsigned long long)totalObservedIfTypeTxBytes;
-(void)setTotalObservedIfTypeTxBytes:(unsigned long long)arg1 ;
-(double)maxRxThroughput;
-(void)setMaxRxThroughput:(double)arg1 ;
-(double)maxTxThroughput;
-(void)setMaxTxThroughput:(double)arg1 ;
-(double)flowNonIdleDuration;
-(void)setFlowNonIdleDuration:(double)arg1 ;
-(double)flowIdleDuration;
-(void)setFlowIdleDuration:(double)arg1 ;
-(void)setExpectedTransferState:(unsigned)arg1 ;
-(void)setTransferStateEntryTimestamp:(double)arg1 ;
-(void)setRxTransferSizeUpperThreshold:(BOOL)arg1 ;
-(void)setRxTransferSizeLowerThreshold:(BOOL)arg1 ;
-(void)setTxTransferSizeUpperThreshold:(BOOL)arg1 ;
-(void)setTxTransferSizeLowerThreshold:(BOOL)arg1 ;
-(BOOL)rxTransferSizeUpperThreshold;
-(BOOL)rxTransferSizeLowerThreshold;
-(BOOL)txTransferSizeUpperThreshold;
-(BOOL)txTransferSizeLowerThreshold;
-(void)setCreatorLedger:(FlowOriginLedger *)arg1 ;
-(void)setFlowStartedAsForeground:(BOOL)arg1 ;
-(void)setLatestClassification:(NSString *)arg1 ;
-(void)setFlowIsTCP:(BOOL)arg1 ;
-(void)setFlowIsUDP:(BOOL)arg1 ;
-(void)setFlowIsQUIC:(BOOL)arg1 ;
-(void)setNotedAsFGAudioVideoTC:(BOOL)arg1 ;
-(BOOL)notedAsFGAudioVideoTC;
-(void)setFlowLastSeenAsForeground:(BOOL)arg1 ;
-(unsigned)expectedTransferState;
-(double)transferStateEntryTimestamp;
-(id)statisticsDescription;
-(BOOL)statisticsForSampleCount:(unsigned long long*)arg1 sampleDuration:(double*)arg2 minRxTput:(double*)arg3 avgRxTput:(double*)arg4 maxRxTput:(double*)arg5 normalizedRxStdDeviation:(double*)arg6 minTxTput:(double*)arg7 avgTxTput:(double*)arg8 maxTxTput:(double*)arg9 normalizedTxStdDeviation:(double*)arg10 ;
-(BOOL)flowIsUDP;
-(BOOL)flowIsTCP;
-(BOOL)flowIsQUIC;
-(BOOL)trafficClassIsAudioVideo;
-(double)minRxThroughput;
-(double)minTxThroughput;
-(id)expectedTransferStateToString:(unsigned)arg1 ;
-(double)recentRxThroughput;
-(double)recentTxThroughput;
-(NSString *)latestClassification;
-(FlowOriginLedger *)creatorLedger;
-(void)setMinRxThroughput:(double)arg1 ;
-(void)setMinTxThroughput:(double)arg1 ;
-(void)setNumSamples:(unsigned)arg1 ;
-(void)setTrafficClassIsAudioVideo:(BOOL)arg1 ;
-(BOOL)flowStartedAsForeground;
-(BOOL)flowLastSeenAsForeground;
-(BOOL)notedAsAudioVideoTC;
-(void)setNotedAsAudioVideoTC:(BOOL)arg1 ;
@end

