/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoEncoder.h>

@class WK_RTCVideoCodecInfo, NSString;

@interface WK_RTCVideoEncoderH265 : NSObject <RTCVideoEncoder> {

	WK_RTCVideoCodecInfo* _codecInfo;
	unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster> >* _bitrateAdjuster;
	unsigned _targetBitrateBps;
	unsigned _encoderBitrateBps;
	CFStringRef _profile;
	/*^block*/id _callback;
	int _width;
	int _height;
	OpaqueVTCompressionSessionRef _compressionSession;
	unsigned long long _mode;
	int framesLeft;
	vector<unsigned char, std::__1::allocator<unsigned char> > _nv12ScaleBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)implementationName;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)scalingSettings;
-(id)initWithCodecInfo:(id)arg1 ;
-(void)destroyCompressionSession;
-(void)configureCompressionSession;
-(int)resetCompressionSession;
-(void)setBitrateBps:(unsigned)arg1 ;
-(void)setEncoderBitrateBps:(unsigned)arg1 ;
-(void)frameWasEncoded:(int)arg1 flags:(unsigned)arg2 sampleBuffer:(opaqueCMSampleBufferRef)arg3 width:(int)arg4 height:(int)arg5 renderTimeMs:(long long)arg6 timestamp:(unsigned)arg7 rotation:(long long)arg8 ;
@end

