/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoDecoder.h>

@class NSString;

@interface WK_RTCWrappedNativeVideoDecoder : NSObject <RTCVideoDecoder> {

	unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> >* _wrappedDecoder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> >*)releaseWrappedDecoder;
-(id)implementationName;
-(long long)startDecodeWithNumberOfCores:(int)arg1 ;
-(long long)decode:(id)arg1 missingFrames:(BOOL)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4 ;
-(long long)releaseDecoder;
-(id)initWithNativeDecoder:(unique_ptr<webrtc::VideoDecoder, std::__1::default_delete<webrtc::VideoDecoder> >*)arg1 ;
@end

