/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@interface VCRateControlOWRDEstimator : NSObject {

	unsigned _mode;
	BOOL _useUINT16;
	unsigned _firstSendTimestamp;
	unsigned _previousSendTimestamp;
	unsigned _previousSendTimestampDiff;
	unsigned long long _sendTimestampWrappedAround;
	double _firstSendTime;
	unsigned _firstReceiveTimestamp;
	unsigned _previousReceiveTimestamp;
	unsigned _previousReceiveTimestampDiff;
	unsigned long long _receiveTimestampWrappedAround;
	double _firstReceiveTime;
	double _shortAverageLag;
	double _longAverageLag;
	double _owrd;
	unsigned _abnormalOWRDSampleCount;
	BOOL _sendTimestampSpikeDetected;
	BOOL _receiveTimestampSpikeDetected;
	double _averageSendInterval;
	double _averageReceiveInterval;

}

@property (nonatomic,readonly) double owrd;              //@synthesize owrd=_owrd - In the implementation block
@property (assign,nonatomic) unsigned mode;              //@synthesize mode=_mode - In the implementation block
-(unsigned)mode;
-(double)owrd;
-(void)setMode:(unsigned)arg1 ;
-(double)relativeSendTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
-(double)relativeReceiveTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
-(void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2 roundTripTime:(double)arg3 ;
-(BOOL)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned)arg1 ;
-(BOOL)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned)arg1 ;
-(BOOL)detectAbnormalOWRDWithRoundTripTime:(double)arg1 ;
-(void)resetOWRDEstimation;
@end

