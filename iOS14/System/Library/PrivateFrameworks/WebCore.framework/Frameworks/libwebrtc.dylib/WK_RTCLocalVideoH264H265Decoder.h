/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@class WK_RTCVideoDecoderH264, WK_RTCVideoDecoderH265;

@interface WK_RTCLocalVideoH264H265Decoder : NSObject {

	WK_RTCVideoDecoderH264* m_h264Decoder;
	WK_RTCVideoDecoderH265* m_h265Decoder;

}
-(long long)releaseDecoder;
-(long long)decodeData:(const char*)arg1 size:(unsigned long long)arg2 timeStamp:(unsigned)arg3 ;
-(id)initH264DecoderWithCallback:(/*^block*/id)arg1 ;
-(id)initH265DecoderWithCallback:(/*^block*/id)arg1 ;
@end

