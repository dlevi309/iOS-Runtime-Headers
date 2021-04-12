/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoDecoder.h>

@class NSString;

@interface WK_RTCVideoDecoderH264 : NSObject <RTCVideoDecoder> {

	opaqueCMFormatDescriptionRef _videoFormat;
	OpaqueCMMemoryPoolRef _memoryPool;
	OpaqueVTDecompressionSessionRef _decompressionSession;
	/*^block*/id _callback;
	int _error;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setError:(int)arg1 ;
-(void)setCallback:(/*^block*/id)arg1 ;
-(void)setVideoFormat:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)implementationName;
-(long long)startDecodeWithNumberOfCores:(int)arg1 ;
-(long long)decode:(id)arg1 missingFrames:(BOOL)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4 ;
-(long long)releaseDecoder;
-(void)destroyDecompressionSession;
-(long long)decodeData:(const char*)arg1 size:(unsigned long long)arg2 timeStamp:(unsigned)arg3 ;
-(int)resetDecompressionSession;
-(void)configureDecompressionSession;
@end

