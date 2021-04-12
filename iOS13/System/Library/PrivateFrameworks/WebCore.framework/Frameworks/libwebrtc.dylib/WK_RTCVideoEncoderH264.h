/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoEncoder.h>

@class WK_RTCVideoCodecInfo, NSString;

@interface WK_RTCVideoEncoderH264 : NSObject <RTCVideoEncoder> {

	WK_RTCVideoCodecInfo* _codecInfo;
	unique_ptr<webrtc::BitrateAdjuster, std::__1::default_delete<webrtc::BitrateAdjuster> >* _bitrateAdjuster;
	unsigned _targetBitrateBps;
	unsigned _encoderBitrateBps;
	unsigned _encoderFrameRate;
	unsigned _maxAllowedFrameRate;
	unsigned long long _packetizationMode;
	optional<webrtc::H264::ProfileLevelId> _profile_level_id;
	/*^block*/id _callback;
	int _width;
	int _height;
	BOOL _useVCP;
	OpaqueVTCompressionSessionRef _vtCompressionSession;
	VCPCompressionSessionRef _vcpCompressionSession;
	CVPixelBufferPoolRef _pixelBufferPool;
	unsigned long long _mode;
	H264BitstreamParser* _h264BitstreamParser;
	vector<unsigned char, std::__1::allocator<unsigned char> > _frameScaleBuffer;
	BOOL _disableEncoding;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)implementationName;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)scalingSettings;
-(id)initWithCodecInfo:(id)arg1 ;
-(void)destroyCompressionSession;
-(int)resetCompressionSessionWithPixelFormat:(unsigned)arg1 ;
-(BOOL)hasCompressionSession;
-(BOOL)resetCompressionSessionIfNeededWithFrame:(id)arg1 ;
-(void)setBitrateBps:(unsigned)arg1 frameRate:(unsigned)arg2 ;
-(unsigned)pixelFormatOfFrame:(id)arg1 ;
-(void)configureCompressionSession;
-(void)setEncoderBitrateBps:(unsigned)arg1 frameRate:(unsigned)arg2 ;
-(void)frameWasEncoded:(int)arg1 flags:(unsigned)arg2 sampleBuffer:(opaqueCMSampleBufferRef)arg3 codecSpecificInfo:(id)arg4 width:(int)arg5 height:(int)arg6 renderTimeMs:(long long)arg7 timestamp:(unsigned)arg8 rotation:(long long)arg9 ;
@end

