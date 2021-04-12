/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Frameworks/ViceroyTrace.framework/ViceroyTrace
*/

#import <ViceroyTrace/ViceroyTrace-Structs.h>
#import <ViceroyTrace/VCAggregator.h>

@class VCHistogram, NSMutableDictionary, NSString;

@interface VCAggregatorSecondDisplay : VCAggregator {

	double _sessionTotalDuration;
	double _lastReportedVideoStallTime;
	double _totalVideoStallTime;
	double _maxVideoStallInterval;
	int _videoStallCount;
	int _avgFramerate;
	int _averageReceiveBitrate;
	int _averageSendBitrate;
	int _maxSendBitrate;
	int _averageTargetBitrate;
	int _maxTargetBitrate;
	int _maxPLR;
	int _totalFIRCounter;
	int _videoWidth;
	int _videoHeight;
	int _codec;
	int _transportType;
	double _averageExpirationTime;
	double _maxExpirationTime;
	double _averageWiFiPacketDelay;
	double _averageMaxAverageWiFiPacketDelay;
	unsigned _averageWiFiThroughput;
	unsigned _totalNACKCounter;
	unsigned _averageBurstyPacketLossCount;
	unsigned _maxBurstyPacketLossCount;
	unsigned _averagePacketLossRate;
	unsigned _averageBandwidthEstimation;
	unsigned _maxBandwidthEstimation;
	unsigned _averageJitterQueueSize;
	unsigned _maxJitterQueueSize;
	unsigned _averageRoundTripTime;
	unsigned _maxRoundTripTime;
	unsigned _averageHIDEventLatencySampleCount;
	unsigned _averageHIDEventLatency;
	unsigned _maxHIDEventLatency;
	unsigned _minHIDEventLatency;
	unsigned _videoFrameNonFECTotalCounter;
	unsigned _videoFrameNonFECCompleteCounter;
	unsigned _videoFrameDisplayedCounter;
	unsigned _decodedVideoFrameEnqueueCounter;
	unsigned _videoFrameReceivedCounter;
	unsigned _videoFrameExpectedCounter;
	unsigned _rtcpTimeoutCount;
	VCHistogram* _RBR;
	VCHistogram* _TBR;
	VCHistogram* _SBR;
	VCHistogram* _VST;
	VCHistogram* _PLR;
	VCHistogram* _BPL;
	VCHistogram* _EXT;
	VCHistogram* _BWE;
	VCHistogram* _VJS;
	VCHistogram* _RTT;
	VCHistogram* _HEL;
	NSMutableDictionary* _fecStatsDict;
	NSString* _channelSequence;
	SCD_Struct_VC1 _channelSequenceStats;
	NSString* _previousChannelSequence;
	SCD_Struct_VC1 _previousChannelSequenceStats;
	NSString* _remoteOSBuildVersion;
	NSString* _remoteFrameworkVersion;
	NSString* _remoteDeviceModel;

}

@property (nonatomic,copy) NSString * channelSequence;                        //@synthesize channelSequence=_channelSequence - In the implementation block
@property (nonatomic,retain) NSString * previousChannelSequence;              //@synthesize previousChannelSequence=_previousChannelSequence - In the implementation block
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)saveCallSegmentHistory;
-(id)aggregatedSegmentReport:(int)arg1 ;
-(id)aggregatedSegmentQRReport;
-(void)flushCurrentSegment;
-(void)updateVideoFECStats:(id)arg1 ;
-(void)processEventWithCategory:(unsigned short)arg1 type:(unsigned short)arg2 payload:(id)arg3 ;
-(void)initAdaptiveLearningWithParameters:(id)arg1 ;
-(id)aggregatedCallReports;
-(id)aggregatedSessionReport;
-(NSString *)previousChannelSequence;
-(NSString *)channelSequence;
-(id)sessionFECReport;
-(void)setPreviousChannelSequence:(NSString *)arg1 ;
-(void)setChannelSequence:(NSString *)arg1 ;
-(void)processRealtimeStats:(id)arg1 ;
-(void)updateReceiverVideoStreamConfiguration:(id)arg1 ;
-(void)updateSenderVideoStreamConfiguration:(id)arg1 ;
@end

