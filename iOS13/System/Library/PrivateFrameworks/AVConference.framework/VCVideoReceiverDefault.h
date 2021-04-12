/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoReceiverBase.h>

@class VideoAttributes, VCVideoStreamRateAdaptationFeedbackOnly, VCDisplayLink;

@interface VCVideoReceiverDefault : VCVideoReceiverBase {

	tagVCVideoReceiverConfig* _videoReceiverConfig;
	tagHANDLE* _videoReceiverHandle;
	tagHANDLE* _videoTransmitterHandle;
	long long _streamToken;
	void* _controlInfoGenerator;
	unsigned remoteFrameWidth;
	unsigned remoteFrameHeight;
	VideoAttributes* remoteVideoAttributes;
	BOOL receivedFirstRemoteFrame;
	BOOL _shouldEnableFaceZoom;
	double _lastKeyFrameRequestTime;
	unsigned short _lastKeyFrameRequestStreamID;
	VCVideoStreamRateAdaptationFeedbackOnly* _rateAdaptation;
	VCDisplayLink* _displayLink;

}

@property (retain) VideoAttributes * remoteVideoAttributes; 
@property (assign,nonatomic) BOOL shouldEnableFaceZoom;                  //@synthesize shouldEnableFaceZoom=_shouldEnableFaceZoom - In the implementation block
-(void)dealloc;
-(void)pauseVideo;
-(void)displayLinkTick:(id)arg1 ;
-(double)roundTripTime;
-(void)startVideo;
-(void)stopVideo;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)setTargetStreamID:(unsigned short)arg1 ;
-(void)setEnableRateAdaptation:(BOOL)arg1 maxBitrate:(unsigned)arg2 minBitrate:(unsigned)arg3 adaptationInterval:(double)arg4 ;
-(void)setRoundTripTime:(double)arg1 ;
-(void)setEnableCVO:(BOOL)arg1 cvoExtensionID:(unsigned long long)arg2 ;
-(void)updateSourcePlayoutTimestamp:(SCD_Struct_AV77*)arg1 ;
-(void)rtcpSendIntervalElapsed;
-(unsigned)lastDisplayedFrameRTPTimestamp;
-(void)setShouldEnableFaceZoom:(BOOL)arg1 ;
-(void)collectChannelMetrics:(SCD_Struct_VC69*)arg1 interval:(float)arg2 ;
-(double)lastReceivedVideoRTPPacketTime;
-(double)lastReceivedVideoRTCPPacketTime;
-(VideoAttributes *)remoteVideoAttributes;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(id)initWithConfig:(tagVCVideoReceiverConfig*)arg1 delegate:(id)arg2 reportingAgent:(opaqueRTCReportingRef)arg3 statisticsCollector:(id)arg4 transmitterHandle:(tagHANDLE*)arg5 ;
-(void)handleRemoteFrame:(CVBufferRef)arg1 timestamp:(SCD_Struct_AV77)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)handleRequestingKeyFrameGenerationWithStreamID:(unsigned short)arg1 ;
-(void)handleKeyFrameRequestWithSizeAndFistMBs:(unsigned short*)arg1 count:(int)arg2 didReceiveRTCPFB:(BOOL)arg3 didReceiveFIR:(BOOL)arg4 ;
-(void)didSwitchFromStreamID:(unsigned short)arg1 toStreamID:(unsigned short)arg2 ;
-(BOOL)shouldEnableFaceZoom;
@end

