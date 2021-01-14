/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <AVConference/AVConference-Structs.h>
#import <AVConference/VCVideoTransmitterBase.h>

@interface VCVideoTransmitterDefault : VCVideoTransmitterBase {

	tagHANDLE* _videoTransmitterHandle;

}

@property (readonly) tagHANDLE* videoTransmitterHandle;              //@synthesize videoTransmitterHandle=_videoTransmitterHandle - In the implementation block
+(void)setupBandwidthEstimationOptions:(tagBWEOPTION*)arg1 featureString:(id)arg2 ;
+(double)minKeyFrameGenerationIntervalForMode:(int)arg1 ;
-(id)initWithConfig:(id)arg1 ;
-(void)dealloc;
-(void)setTargetBitrate:(unsigned)arg1 ;
-(void)generateKeyFrame;
-(unsigned)setTemporaryMaximumBitrate:(unsigned)arg1 ;
-(void)startVideo;
-(void)stopVideo;
-(BOOL)enqueueVideoFrame:(opaqueCMSampleBufferRef)arg1 frameTime:(SCD_Struct_VC84)arg2 cameraStatusBits:(unsigned char)arg3 ;
-(void)setKeyFrameOnlyStreamID:(unsigned short)arg1 ;
-(void)setStreamIDs:(unsigned short*)arg1 numOfStreamIDs:(unsigned char)arg2 repairedStreamIDs:(unsigned short*)arg3 numOfRepairedStreamIDs:(unsigned char)arg4 ;
-(void)setFECRatio:(double)arg1 ;
-(void)setFECRedundancyVector:(const SCD_Struct_VC50*)arg1 ;
-(void)setMediaSuggestion:(VCRateControlMediaSuggestion*)arg1 ;
-(BOOL)setEncodingMode:(int)arg1 ;
-(void)handleActiveConnectionChange:(id)arg1 ;
-(void)collectChannelMetrics:(SCD_Struct_VC79*)arg1 interval:(float)arg2 ;
-(unsigned)parameterSetForPayload:(int)arg1 pixelFormat:(unsigned)arg2 ;
-(void)computeTimestamp:(unsigned*)arg1 hostTime:(double*)arg2 forFrame:(opaqueCMSampleBufferRef)arg3 ;
-(void)setIsServerBasedBandwidthProbingEnabled:(BOOL)arg1 ;
-(tagHANDLE*)videoTransmitterHandle;
@end

