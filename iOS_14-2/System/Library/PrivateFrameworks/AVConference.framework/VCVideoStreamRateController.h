/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoStreamRateControlProtocol, OS_dispatch_queue;
@class NSObject;

@interface VCVideoStreamRateController : NSObject {

	id<VCVideoStreamRateControlProtocol> _rateControl;
	int _algorithm;
	unsigned short _maxTierIndex;
	unsigned short _minTierIndex;
	unsigned short _operatingTierIndex;
	unsigned _minBitrate;
	unsigned _maxBitrate;
	unsigned _targetBitrate;
	double _rateControlTime;
	double _rateControlInterval;
	unsigned _previousRTPTimestamp;
	unsigned _averageTargetBitrate;
	unsigned long long _accumulatedTargetDataSize;
	double _totalTime;
	double _videoFrozenDuration;
	BOOL _didVideoStall;
	void* _logDump;
	NSObject*<OS_dispatch_queue> _videoStreamRateControllerQueue;

}

@property (nonatomic,readonly) unsigned minBitrate;                 //@synthesize minBitrate=_minBitrate - In the implementation block
@property (nonatomic,readonly) unsigned maxBitrate;                 //@synthesize maxBitrate=_maxBitrate - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;              //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
-(double)owrd;
-(double)nowrd;
-(id)className;
-(void)dealloc;
-(unsigned)maxBitrate;
-(unsigned)targetBitrate;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(double)nowrdShort;
-(double)nowrdAcc;
-(void)setRateControlInterval:(double)arg1 ;
-(void)updateVideoStall:(BOOL)arg1 withStallDuration:(unsigned)arg2 ;
-(id)initWithDumpID:(unsigned)arg1 ;
-(void)setMaxTargetBitrate:(unsigned)arg1 minTargetBitrate:(unsigned)arg2 ;
-(unsigned)minBitrate;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingBitrate:(unsigned)arg4 averageReceivedBitrate:(unsigned)arg5 ;
-(void)createLogDumpFile:(unsigned)arg1 ;
-(void)releaseLogDumpFile;
-(unsigned short)minTierIndex:(unsigned)arg1 ;
-(unsigned short)maxTierIndex:(unsigned)arg1 ;
-(void)updateAverageTargetBitrate:(unsigned)arg1 interval:(double)arg2 ;
-(void)setOperatingTierIndexWithBitrate:(unsigned)arg1 ;
@end

