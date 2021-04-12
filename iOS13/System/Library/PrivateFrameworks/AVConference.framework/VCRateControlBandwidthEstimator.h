/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class SuddenChangeParameters;

@interface VCRateControlBandwidthEstimator : NSObject {

	unsigned _totalBytesInProbingSequence;
	unsigned _totalPacketsInProbingSequence;
	double _lastPacketInProbingSequenceArrivalTime;
	double _referencePacketArrivalTime;
	double _earlyProbingPacketArrivalTime;
	unsigned _earlyBytesInProbingSequence;
	unsigned _earlyPacketsInProbingSequence;
	unsigned _referencePacketDataSize;
	BOOL _isInitialized;
	BOOL _isFirstBWEstimationReleased;
	unsigned _lastProbingSequenceReferenceTimestamp;
	double _firstDivergeTime;
	int _bandwidthDivergeCount;
	int _suddenChangeBandwidthBufferIndex;
	double _suddenChangeBandwidthBuffer[30];
	unsigned _overRangePacketsCount;
	double _totalBandwidth;
	SuddenChangeParameters* _suddenChangeParameters;
	unsigned _minPacketsCount;
	double _minEstimationWindowDuration;
	double _maxDetectableBandwidth;
	unsigned _maxOverRangePacketsCount;
	double _estimatedBandwidth;
	double _estimatedBandwidthUncapped;
	unsigned _radioAccessTechnology;
	unsigned _mode;
	unsigned _bandwidthEstimationState;

}

@property (assign,nonatomic) double estimatedBandwidth;                      //@synthesize estimatedBandwidth=_estimatedBandwidth - In the implementation block
@property (assign,nonatomic) double estimatedBandwidthUncapped;              //@synthesize estimatedBandwidthUncapped=_estimatedBandwidthUncapped - In the implementation block
@property (assign,nonatomic) unsigned radioAccessTechnology;                 //@synthesize radioAccessTechnology=_radioAccessTechnology - In the implementation block
@property (assign,nonatomic) unsigned mode;                                  //@synthesize mode=_mode - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(unsigned)radioAccessTechnology;
-(void)setRadioAccessTechnology:(unsigned)arg1 ;
-(void)setEstimatedBandwidth:(double)arg1 ;
-(double)estimatedBandwidth;
-(double)estimatedBandwidthUncapped;
-(void)calculateBandwidthEstimationForBandwidthSample:(double)arg1 arrivalTime:(double)arg2 ;
-(void)calculateBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned)arg2 mediaDataSize:(unsigned)arg3 probingSequence:(BOOL)arg4 probingSequenceID:(unsigned)arg5 ;
-(void)updateQualificationParameters;
-(void)initializeBandwidthEstimationAtTime:(double)arg1 mediaTimestamp:(unsigned)arg2 probingSequence:(BOOL)arg3 probingSequenceID:(unsigned)arg4 ;
-(BOOL)isPacketProcessedLateWithArrivalTime:(double)arg1 ;
-(double)resetBandwidthWithParameters:(double)arg1 probingSequenceDuration:(double)arg2 probingSequenceSize:(unsigned)arg3 packetsInProbingSequence:(unsigned)arg4 ;
-(double)updateBandwidthEstimation:(double)arg1 arrivalTime:(double)arg2 ;
-(void)updateInitialBandwidthEstimationForCellularAtTime:(double)arg1 bandwidth:(double)arg2 ;
-(void)detectSuddenChangeWithBandwidth:(double)arg1 suddenChangeAbove:(BOOL*)arg2 suddenChangeBelow:(BOOL*)arg3 ;
-(void)compensateSuddenChangeBandwidths;
-(void)recordSuddenChangeBandwidth:(double)arg1 ;
-(BOOL)isSuddenChangeDurationMetAtArrivalTime:(double)arg1 ;
-(void)updateBandwidthDivergeCountAtArrivalTime:(double)arg1 suddenChangeAbove:(BOOL)arg2 suddenChangeBelow:(BOOL)arg3 ;
-(void)setEstimatedBandwidthUncapped:(double)arg1 ;
@end

