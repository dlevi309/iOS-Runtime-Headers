/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/VCVideoStreamRateControlProtocol.h>

@class NSString;

@interface VCVideoStreamRTTPLRRateControl : NSObject <VCVideoStreamRateControlProtocol> {

	double _rampUpFrozenDuration;
	unsigned short _currentTierIndex;
	double _packetLossRate;
	double _roundTripTime;
	double _rampUpFrozenTime;
	double _rampDownPacketLossRate;
	double _rampDownRoundTripTime;
	double _rampUpPacketLossRate;
	int _state;
	double _rateControlTime;
	unsigned _targetBitrate;
	unsigned short _minTierIndex;
	unsigned short _maxTierIndex;
	double _rateControlInterval;

}

@property (nonatomic,readonly) int state;                             //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) unsigned targetBitrate;                //@synthesize targetBitrate=_targetBitrate - In the implementation block
@property (nonatomic,readonly) double owrd; 
@property (nonatomic,readonly) double nowrd; 
@property (nonatomic,readonly) double nowrdShort; 
@property (nonatomic,readonly) double nowrdAcc; 
@property (assign,nonatomic) double rateControlInterval;              //@synthesize rateControlInterval=_rateControlInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)owrd;
-(double)nowrd;
-(id)className;
-(NSString *)description;
-(int)state;
-(unsigned)targetBitrate;
-(void)setMaxTierIndex:(unsigned short)arg1 minTierIndex:(unsigned short)arg2 ;
-(BOOL)shouldRampDown;
-(unsigned short)rampDownTier;
-(void)stateChange:(int)arg1 ;
-(BOOL)shouldRampUp;
-(unsigned short)rampUpTier;
-(void)stateExit;
-(void)stateEnter;
-(void)doRateControlWithTime:(double)arg1 roundTripTime:(double)arg2 packetLossRate:(double)arg3 operatingTierIndex:(unsigned short)arg4 averageReceivedBitrate:(unsigned)arg5 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 ;
-(double)nowrdShort;
-(double)nowrdAcc;
-(double)rateControlInterval;
-(void)setRateControlInterval:(double)arg1 ;
-(void)printRateControlFullInfoWithLogDump:(void*)arg1 time:(double)arg2 videoStall:(BOOL)arg3 videoFrozenDuration:(double)arg4 averageTargetBitrate:(unsigned)arg5 ;
@end

