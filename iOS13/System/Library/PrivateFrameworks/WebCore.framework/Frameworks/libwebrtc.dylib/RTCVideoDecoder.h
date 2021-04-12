/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@protocol RTCVideoDecoder <NSObject>
@required
-(void)setCallback:(/*^block*/id)arg1;
-(id)implementationName;
-(long long)startDecodeWithNumberOfCores:(int)arg1;
-(long long)decode:(id)arg1 missingFrames:(BOOL)arg2 codecSpecificInfo:(id)arg3 renderTimeMs:(long long)arg4;
-(long long)releaseDecoder;

@end

