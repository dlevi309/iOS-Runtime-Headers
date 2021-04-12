/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoTransmitterBase.h>

@interface VCVideoTransmitterDefault : VCVideoTransmitterBase {

	tagHANDLE* _videoTransmitterHandle;

}

@property (readonly) tagHANDLE* videoTransmitterHandle;              //@synthesize videoTransmitterHandle=_videoTransmitterHandle - In the implementation block
+(double)minKeyFrameGenerationIntervalForMode:(int)arg1 ;
-(void)dealloc;
-(id)initWithConfig:(id)arg1 ;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)generateKeyFrame;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_AV77)arg2 droppedFrames:(int)arg3 cameraStatusBits:(unsigned char)arg4 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)collectChannelMetrics:(SCD_Struct_VC69*)arg1 interval:(float)arg2 ;
-(unsigned)parameterSetForPayload:(int)arg1 ;
-(void)computeTimestamp:(unsigned*)arg1 hostTime:(double*)arg2 forFrame:(opaqueCMSampleBufferRef)arg3 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1 ;
-(tagHANDLE*)videoTransmitterHandle;
@end

