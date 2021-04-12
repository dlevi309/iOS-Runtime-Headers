/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol CannedVideoFrameFeeder <NSObject>
@required
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
-(int)setWidth:(int)arg1 height:(int)arg2;

@end

