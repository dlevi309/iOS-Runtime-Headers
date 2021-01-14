/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCVideoSource <NSObject>
@optional
-(BOOL)setAnimoji:(id)arg1;
-(void)setCameraZoomFactor:(double)arg1;
-(void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
-(BOOL)setMemoji:(id)arg1;
-(void)addStickerWithURL:(id)arg1 atPosition:(CGPoint)arg2 identifier:(id)arg3;
-(void)setViewPointCorrectionEnabaled:(BOOL)arg1;
-(void)frameCount:(int*)arg1 averageProcessTime:(float*)arg2;

@required
-(int)stop:(BOOL)arg1;
-(int)setFrameRate:(int)arg1;
-(int)startPreview;
-(BOOL)isPreviewRunning;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)copyColorInfo:(const *)arg1;
-(int)configureCaptureWithToken:(VCVideoSourceToken)arg1;
-(BOOL)isFrontCamera;
-(int)frameCount:(BOOL)arg1;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;

@end

