/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
@interface WK_RTCWrappedEncodedImageBuffer : NSObject {

	scoped_refptr<webrtc::EncodedImageBufferInterface>* _buffer;

}

@property (assign,nonatomic) scoped_refptr<webrtc::EncodedImageBufferInterface>* buffer;              //@synthesize buffer=_buffer - In the implementation block
-(void)setBuffer:(scoped_refptr<webrtc::EncodedImageBufferInterface>*)arg1 ;
-(scoped_refptr<webrtc::EncodedImageBufferInterface>*)buffer;
-(id)initWithEncodedImageBuffer:(scoped_refptr<webrtc::EncodedImageBufferInterface>*)arg1 ;
@end

