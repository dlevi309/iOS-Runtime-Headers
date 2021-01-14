/*
* Generated on Thursday, January 14, 2021 at 2:28:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@protocol RTCVideoEncoder <NSObject>
@required
-(void)setCallback:(/*^block*/id)arg1;
-(id)implementationName;
-(long long)startEncodeWithSettings:(id)arg1 numberOfCores:(int)arg2;
-(long long)releaseEncoder;
-(long long)encode:(id)arg1 codecSpecificInfo:(id)arg2 frameTypes:(id)arg3;
-(int)setBitrate:(unsigned)arg1 framerate:(unsigned)arg2;
-(id)scalingSettings;

@end

