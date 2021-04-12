/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/Frameworks/libwebrtc.dylib
*/


@protocol RTCVideoFrameBuffer <NSObject>
@property (nonatomic,readonly) int width; 
@property (nonatomic,readonly) int height; 
@required
-(int)width;
-(int)height;
-(id)toI420;

@end

