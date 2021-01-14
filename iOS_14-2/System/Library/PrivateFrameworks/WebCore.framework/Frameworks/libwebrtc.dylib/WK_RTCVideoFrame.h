/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@protocol RTCVideoFrameBuffer;
#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@interface WK_RTCVideoFrame : NSObject {

	long long _rotation;
	long long _timeStampNs;
	int timeStamp;
	id<RTCVideoFrameBuffer> _buffer;

}

@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (nonatomic,readonly) long long rotation; 
@property (nonatomic,readonly) long long timeStampNs; 
@property (assign,nonatomic) int timeStamp; 
@property (nonatomic,readonly) id<RTCVideoFrameBuffer> buffer;              //@synthesize buffer=_buffer - In the implementation block
-(int)width;
-(long long)rotation;
-(int)height;
-(int)timeStamp;
-(id<RTCVideoFrameBuffer>)buffer;
-(void)setTimeStamp:(int)arg1 ;
-(long long)timeStampNs;
-(id)initWithBuffer:(id)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3 ;
-(id)newI420VideoFrame;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 rotation:(long long)arg2 timeStampNs:(long long)arg3 ;
-(id)initWithPixelBuffer:(CVBufferRef)arg1 scaledWidth:(int)arg2 scaledHeight:(int)arg3 cropWidth:(int)arg4 cropHeight:(int)arg5 cropX:(int)arg6 cropY:(int)arg7 rotation:(long long)arg8 timeStampNs:(long long)arg9 ;
@end

