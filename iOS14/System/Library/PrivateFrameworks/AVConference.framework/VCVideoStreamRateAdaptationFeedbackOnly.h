/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)owrd;
-(void)dealloc;
-(id)initWithRTPHandle:(tagHANDLE*)arg1 reportingAgent:(opaqueRTCReportingRef)arg2 receiverStats:(id)arg3 dumpID:(unsigned)arg4 reportingParentID:(int)arg5 statisticsCollector:(id)arg6 lowTimestampPrecision:(BOOL)arg7 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(void)updateRTPReceiveWithTimestamp:(unsigned)arg1 sampleRate:(unsigned)arg2 time:(double)arg3 size:(unsigned)arg4 endOfFrame:(BOOL)arg5 ;
-(void)updateRateControlInfoWithStatisticsMessage:(SCD_Struct_AV33)arg1 ;
-(void)setDidReceiveVideo:(BOOL)arg1 ;
-(void)stopFeedbackSource;
-(void)startFeedbackSource;
-(void)sendRateControlFeedback;
-(BOOL)didReceiveVideo;
@end

