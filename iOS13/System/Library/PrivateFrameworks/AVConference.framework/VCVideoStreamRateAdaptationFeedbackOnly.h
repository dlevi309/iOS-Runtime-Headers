/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoStreamRateAdaptation.h>

@protocol OS_dispatch_source;
@class AVCStatisticsCollector, NSObject;

@interface VCVideoStreamRateAdaptationFeedbackOnly : VCVideoStreamRateAdaptation {

	AVCStatisticsCollector* _statisticsCollector;
	NSObject*<OS_dispatch_source> _rateControlFeedbackSource;
	BOOL _didReceiveVideo;
	BOOL _useLowPrecisionEchoTimeStamp;
	unsigned _previousRTPTimestamp;
	unsigned _totalPacketsReceived;
	unsigned _lastTimestamp;
	double _lastTimestampReceiveTime;

}

@property (assign,nonatomic) BOOL didReceiveVideo;              //@synthesize didReceiveVideo=_didReceiveVideo - In the implementation block
-(void)dealloc;
-(double)owrd;
-(id)initWithRTPHandle:(tagHANDLE*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 receiverStats:(id)arg3 dumpID:(unsigned)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6 lowTimestampPrecision:(BOOL)arg7 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 size:(unsigned)arg4 endOfFrame:(BOOL)arg5 ;
-(void)updateRateControlInfoWithStatisticsMessage:(SCD_Struct_AV29)arg1 ;
-(void)setDidReceiveVideo:(BOOL)arg1 ;
-(void)stopFeedbackSource;
-(void)startFeedbackSource;
-(void)sendRateControlFeedback;
-(BOOL)didReceiveVideo;
@end

