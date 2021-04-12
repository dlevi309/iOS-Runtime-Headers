/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoStreamRateControlProtocol <NSObject>
@property (nonatomic,readonly) int state; 
@property (nonatomic,readonly) unsigned targetBitrate; 
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (assign,nonatomic) double rateControlInterval; 
@optional
-(void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned)arg5;

@required
-(int)state;
-(unsigned)targetBitrate;
-(double)owrd;
-(void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned)arg5;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3;
-(double)nowrd;
-(double)nowrdShort;
-(double)nowrdAcc;
-(double)rateControlInterval;
-(void)setRateControlInterval:(double)arg1;

@end

