/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@class WK_RTCVideoEncoderH264, WK_RTCVideoEncoderH265;

@interface WK_RTCLocalVideoH264H265Encoder : NSObject {

	WK_RTCVideoEncoderH264* m_h264Encoder;
	WK_RTCVideoEncoderH265* m_h265Encoder;

}
-(void)setCallback:(/*^block*/id)arg1 ;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)initWithCodecInfo:(id)arg1 ;
@end

