/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

