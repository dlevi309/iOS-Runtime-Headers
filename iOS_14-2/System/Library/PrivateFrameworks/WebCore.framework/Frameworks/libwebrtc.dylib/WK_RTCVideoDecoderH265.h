/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoDecoder.h>

@class NSString;

@interface WK_RTCVideoDecoderH265 : NSObject <RTCVideoDecoder> {

	opaqueCMFormatDescriptionRef _videoFormat;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	/*^block*/id _callback;
	int _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)init;
-(void)setVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(void)dealloc;
-(id)implementationName;
-(long long)startDecodeWithNumberOfCores:(int)arg1 ;
-(long long)decode:(id)arg1 missingFrames:(BOOL)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4 ;
-(long long)releaseDecoder;
-(void)destroyDecompressionSession;
-(long long)decodeData:(const char*)arg1 size:(unsigned long long)arg2 timeStamp:(unsigned)arg3 ;
-(int)resetDecompressionSession;
-(void)configureDecompressionSession;
@end

