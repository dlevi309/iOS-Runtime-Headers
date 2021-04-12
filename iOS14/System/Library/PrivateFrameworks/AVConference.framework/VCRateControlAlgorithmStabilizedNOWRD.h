/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <libobjc.A.dylib/VCRateControlAlgorithm.h>

@class VCRateControlMediaController, NSString;

@interface VCRateControlAlgorithmStabilizedNOWRD : NSObject <VCRateControlAlgorithm> {

	VCRateControlAlgorithmConfig* _config;
	VCRateControlMediaController* _mediaController;
	int _state;
	int _rampUpStatus;
	int _rampDownStatus;
	BOOL _paused;
	unsigned short _echoedTimestamp;
	unsigned short _previousTimestamp;
	unsigned short _queuingDelayTimestamp;
	unsigned _receiveTimestamp;
	unsigned _timestampWrapAroundCounter;
	double _rateControlTime;
	unsigned _rateControlCounter;
	unsigned _rateChangeCounter;
	unsigned _lastRateChangeCounter;
	unsigned _newOWRDSampleCollected;
	BOOL _isRemoteBandwidthEstimationStable;
	unsigned _remoteBandwidthEstimation;
	unsigned _localBandwidthEstimation;
	SCD_Struct_VC139 _history[500];
	int _currentHistorySize;
	int _currentHistoryIndex;
	double _owrd;
	SCD_Struct_VC66 _owrdList;
	BOOL _isOWRDListReady;
	BOOL _isOWRDConstant;
	double _nowrd;
	double _nowrdShort;
	double _nowrdAcc;
	double _previousNOWRD;
	double _firstOWRDFrozenTime;
	double _lastNoOvershootBWEstimationTime;
	double _firstBelowNoRampUpBandwidthTime;
	double _sendBitrateLimitedStartTime;
	double _rampUpFrozenTime;
	double _rampUpFrozenDuration;
	double _extendedRampUpFrozenExitTime;
	double _stabilizationTime;
	double _rateChangeSystemTime;
	double _lastRampDownTimeDueToFeedback;
	double _lastRampDownTimeDueToBaseband;
	double _lastPositiveOWRDTime;
	double _lastAllowRampUpTime;
	BOOL _isCongested;
	BOOL _isRampUpSettling;
	BOOL _isStable;
	BOOL _isSendBitrateLimited;
	BOOL _isOvershoot;
	BOOL _belowNoRampUpBandwidth;
	BOOL _isFirstTimestampArrived;
	BOOL _isNewRateSentOut;
	BOOL _isFirstInitialRampUpDone;
	double _inVideoBitrate;
	double _outVideoBitrate;
	double _inAudioBitrate;
	double _outAudioBitrate;
	unsigned _fastRampDownBitrateRange;
	unsigned _consecutiveRampDown;
	double _lastTimeStartRampingDown;
	double _rampUpSettleDuration;
	double _basebandNotificationArrivalTime;
	unsigned _basebandAverageBitrate;
	unsigned _basebandTotalQueueDepth;
	double _basebandExpectedQueuingDelay;
	double _basebandNormalizedBDCD;
	double _basebandNormalizedQueuingDelay;
	double _basebandLTEOrGreaterRATSwitchTime;
	int _basebandRadioTechnology;
	BOOL _isWaitingForBasebandRampDown;
	double _lastBasebandRampDownTime;
	double _lastHighNBDCDTime;
	int _basebandAdditionalTiersForRampUp;
	BOOL _basebandAdaptationEnabled;
	unsigned _totalPacketReceived;
	unsigned _packetReceivedVideo;
	unsigned _mostBurstLoss;
	unsigned _packetBurstLoss;
	unsigned _roundTripTimeTick;
	double _roundTripTime;
	double _roundTripTimeMinEnvelope;
	double _previousRoundTripTime;
	double _worstRecentRoundTripTime;
	double _packetLossRate;
	double _packetLossRateAudio;
	double _packetLossRateVideo;
	double _lastNetworkUnstableTime;
	unsigned _worstRecentBurstLoss;
	int _currentTierIndex;
	int _previousTierIndex;
	unsigned _targetBitrate;
	unsigned _actualBitrate;
	void* _logDump;
	void* _logBasebandDump;
	BOOL _isPeriodicLoggingEnabled;
	BOOL _didMBLRampDown;

}

@property (nonatomic,retain) VCRateControlMediaController * mediaController;              //@synthesize mediaController=_mediaController - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                                    //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) unsigned rateChangeCounter;                                //@synthesize rateChangeCounter=_rateChangeCounter - In the implementation block
@property (nonatomic,readonly) BOOL isCongested;                                          //@synthesize isCongested=_isCongested - In the implementation block
@property (nonatomic,readonly) unsigned mostBurstLoss;                                    //@synthesize mostBurstLoss=_mostBurstLoss - In the implementation block
@property (nonatomic,readonly) double packetLossRate;                                     //@synthesize packetLossRate=_packetLossRate - In the implementation block
@property (nonatomic,readonly) double packetLossRateAudio;                                //@synthesize packetLossRateAudio=_packetLossRateAudio - In the implementation block
@property (nonatomic,readonly) double packetLossRateVideo;                                //@synthesize packetLossRateVideo=_packetLossRateVideo - In the implementation block
@property (nonatomic,readonly) unsigned totalPacketReceived;                              //@synthesize totalPacketReceived=_totalPacketReceived - In the implementation block
@property (nonatomic,readonly) double roundTripTime;                                      //@synthesize roundTripTime=_roundTripTime - In the implementation block
@property (nonatomic,readonly) double worstRecentRoundTripTime;                           //@synthesize worstRecentRoundTripTime=_worstRecentRoundTripTime - In the implementation block
@property (nonatomic,readonly) unsigned worstRecentBurstLoss;                             //@synthesize worstRecentBurstLoss=_worstRecentBurstLoss - In the implementation block
@property (nonatomic,readonly) double owrd;                                               //@synthesize owrd=_owrd - In the implementation block
@property (nonatomic,readonly) BOOL isNewRateSentOut;                                     //@synthesize isNewRateSentOut=_isNewRateSentOut - In the implementation block
@property (assign,nonatomic) unsigned localBandwidthEstimation;                           //@synthesize localBandwidthEstimation=_localBandwidthEstimation - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                 //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) unsigned actualBitrate;                                    //@synthesize actualBitrate=_actualBitrate - In the implementation block
@property (assign,nonatomic) BOOL didMBLRampDown;                                         //@synthesize didMBLRampDown=_didMBLRampDown - In the implementation block
@property (nonatomic,readonly) BOOL isSendBitrateLimited;                                 //@synthesize isSendBitrateLimited=_isSendBitrateLimited - In the implementation block
@property (nonatomic,readonly) BOOL isFirstInitialRampUpDone;                             //@synthesize isFirstInitialRampUpDone=_isFirstInitialRampUpDone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)owrd;
-(id)className;
-(void)setPaused:(BOOL)arg1 ;
-(VCRateControlMediaController *)mediaController;
-(double)roundTripTime;
-(double)packetLossRate;
-(BOOL)isPaused;
-(void)dealloc;
-(void)setMediaController:(VCRateControlMediaController *)arg1 ;
-(double)worstRecentRoundTripTime;
-(unsigned)worstRecentBurstLoss;
-(BOOL)isSendBitrateLimited;
-(BOOL)didMBLRampDown;
-(void)setDidMBLRampDown:(BOOL)arg1 ;
-(void)configure:(VCRateControlAlgorithmConfig*)arg1 restartRequired:(BOOL)arg2 ;
-(void)enableBasebandDump:(void*)arg1 ;
-(unsigned)targetBitrate;
-(unsigned)rateChangeCounter;
-(BOOL)doRateControlWithStatistics:(SCD_Struct_AV33)arg1 ;
-(BOOL)doRateControlWithBasebandStatistics:(SCD_Struct_AV33)arg1 ;
-(void)enableLogDump:(void*)arg1 enablePeriodicLogging:(BOOL)arg2 ;
-(unsigned)actualBitrate;
-(BOOL)isNewRateSentOut;
-(void)setLocalBandwidthEstimation:(unsigned)arg1 ;
-(BOOL)isFirstInitialRampUpDone;
-(double)packetLossRateAudio;
-(double)packetLossRateVideo;
-(unsigned)mostBurstLoss;
-(BOOL)isCongested;
-(BOOL)shouldRampDown;
-(int)rampDownTier;
-(BOOL)shouldRampUp;
-(int)rampUpTier;
-(void)stateExit;
-(void)stateEnter;
-(void)resetRampingStatus;
-(void)logToDumpFilesWithString:(id)arg1 ;
-(BOOL)doRateControlWithVCRCStatistics:(SCD_Struct_AV33)arg1 ;
-(double)getDoubleTimeFromTimestamp:(unsigned)arg1 timestampTick:(unsigned)arg2 wrapAroundCounter:(unsigned)arg3 ;
-(void)calculateCongestionMetricsFromOWRD:(double)arg1 time:(double)arg2 ;
-(void)checkBandwidthOvershoot;
-(void)checkCongestionStatus;
-(void)stateChangeTo:(int)arg1 ;
-(void)printRateControlInfoToLogDump;
-(BOOL)shouldRampDownDueToBaseband;
-(BOOL)shouldRampUpDueToBaseband;
-(BOOL)recentlyGoAboveRampUpBandwidth;
-(BOOL)shouldUnblockRampUpAfterTimeOut;
-(BOOL)keepOvershootingRampDownBandwidth;
-(unsigned)totalPacketReceived;
-(unsigned)localBandwidthEstimation;
-(unsigned short)getTimestampFromMicroTime:(double)arg1 ;
-(void)updateInternalStatus;
-(BOOL)shouldRampDownDueToNOWRD;
-(BOOL)shouldRampDownDueToNOWRDAcc;
-(void)setBitrateUnstable;
-(BOOL)updateInternalStatistics:(SCD_Struct_AV33)arg1 ;
-(void)runRateControlStateTransition;
-(void)updateVCRateControlHistory;
-(BOOL)shouldEnableBasebandAdaptationWithCurrentBasebandRAT:(int)arg1 previousBasebandRAT:(int)arg2 ;
-(int)rampDownTierDueToBaseband:(double)arg1 ;
-(int)basebandAdditionalTiersForRampUp;
-(BOOL)isBasebandRATGreaterOrSameAsLTE:(int)arg1 ;
-(BOOL)isBitrateOscillatingWithCurrentTierIndex:(int)arg1 ;
-(BOOL)shouldFastRampUp;
-(void)calculateRoundTripTimeWithSample:(double)arg1 ;
-(void)calculatePacketLossWithReceivedPacketCount:(unsigned)arg1 receivedPacketCountVideo:(unsigned)arg2 packetBurstLoss:(unsigned short)arg3 packetLossSample:(double)arg4 ;
-(void)checkMediaQueueBitrates;
-(void)checkStabilizationWithEchoedTimestamp:(unsigned short)arg1 queuingDelay:(unsigned short)arg2 ;
-(double)getRampUpFrozenDuration;
-(void)updateCongestionStatusWhenRampUp;
-(void)updateCongestionStatusWhenRampDown:(double)arg1 ;
-(BOOL)checkNetworkSaturationWithRoundTripTime:(double)arg1 minRoundTripTime:(double)arg2 packetLossRate:(double)arg3 owrd:(double)arg4 ;
-(BOOL)isNetworkSaturated;
-(BOOL)isBasebandNotificationOutOfKeyFrameCoolDownTime;
-(BOOL)isRoundTripTimeDecreasingOrLessThanMinEnvelope;
-(double)getRampUpSettleDuration;
@end

