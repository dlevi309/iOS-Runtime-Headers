/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/

#import <libwebrtc.dylib/libwebrtc.dylib-Structs.h>
#import <libobjc.A.dylib/RTCVideoEncoder.h>

@class NSString;

@interface WK_RTCWrappedNativeVideoEncoder : NSObject <RTCVideoEncoder> {

	unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> >* _wrappedEncoder;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setCallback:(/*^block*/id)arg1 ;
-(id)implementationName;
-(unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> >*)releaseWrappedEncoder;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2 ;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3 ;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2 ;
-(id)scalingSettings;
-(id)initWithNativeEncoder:(unique_ptr<webrtc::VideoEncoder, std::__1::default_delete<webrtc::VideoEncoder> >*)arg1 ;
@end

