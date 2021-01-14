/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCI420Buffer.h>

@class NSString;

@interface WK_RTCI420Buffer : NSObject <RTCI420Buffer> {

	scoped_refptr<webrtc::I420BufferInterface>* _i420Buffer;

}

@property (nonatomic,readonly) int chromaWidth; 
@property (nonatomic,readonly) int chromaHeight; 
@property (nonatomic,readonly) const char* dataY; 
@property (nonatomic,readonly) const char* dataU; 
@property (nonatomic,readonly) const char* dataV; 
@property (nonatomic,readonly) int strideY; 
@property (nonatomic,readonly) int strideU; 
@property (nonatomic,readonly) int strideV; 
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)width;
-(int)height;
-(const char*)dataY;
-(const char*)dataU;
-(const char*)dataV;
-(id)initWithWidth:(int)arg1 height:(int)arg2 ;
-(id)toI420;
-(id)initWithFrameBuffer:(scoped_refptr<webrtc::I420BufferInterface>*)arg1 ;
-(int)strideY;
-(int)strideU;
-(int)strideV;
-(id)initWithWidth:(int)arg1 height:(int)arg2 dataY:(const char*)arg3 dataU:(const char*)arg4 dataV:(const char*)arg5 ;
-(id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5 ;
-(int)chromaWidth;
-(int)chromaHeight;
-(scoped_refptr<webrtc::I420BufferInterface>*)nativeI420Buffer;
@end

