/*
* Generated on Monday, March 1, 2021 at 2:33:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol CannedVideoFrameFeeder <NSObject>
@required
-(CVBufferRef)createPixelBufferForFrameIndex:(int)arg1;
-(void)getFrameRate:(double*)arg1 frameCount:(int*)arg2;
-(int)setWidth:(int)arg1 height:(int)arg2;
-(int)rotatePixelBuffer:(CVBufferRef)arg1 andStoreTo:(*)arg2;

@end

