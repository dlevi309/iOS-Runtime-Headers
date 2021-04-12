/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	BOOL _sendTimestampSpikeDetected;
	BOOL _receiveTimestampSpikeDetected;
	double _averageSendInterval;
	double _averageReceiveInterval;

}

@property (nonatomic,readonly) double owrd;              //@synthesize owrd=_owrd - In the implementation block
@property (assign,nonatomic) unsigned mode;              //@synthesize mode=_mode - In the implementation block
-(void)setMode:(unsigned)arg1 ;
-(unsigned)mode;
-(double)owrd;
-(double)relativeSendTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
-(double)relativeReceiveTimeWithTimestamp:(unsigned)arg1 timestampRate:(unsigned)arg2 ;
-(void)calculateOWRDWithSendTime:(double)arg1 receiveTime:(double)arg2 ;
-(BOOL)detectOutOfOrderAndSpikeWithSendTimestamp:(unsigned)arg1 ;
-(BOOL)detectOutOfOrderAndSpikeWithReceiveTimestamp:(unsigned)arg1 ;
-(void)resetOWRDEstimation;
@end

