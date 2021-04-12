/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VideoCaptureProtocol
@optional
-(void)setCameraZoomFactor:(double)arg1;
-(void)setCameraZoomFactor:(double)arg1 withRate:(double)arg2;
-(BOOL)setAnimoji:(id)arg1;
-(BOOL)setMemoji:(id)arg1;
-(void)addStickerWithURL:(id)arg1 atPosition:(CGPoint)arg2 identifier:(id)arg3;
-(void)setViewPointCorrectionEnabaled:(BOOL)arg1;

@required
-(int)startPreview;
-(int)stop:(BOOL)arg1;
-(BOOL)isPreviewRunning;
-(int)setFrameRate:(int)arg1;
-(int)startCaptureWithWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)setWidth:(int)arg1 height:(int)arg2 frameRate:(int)arg3;
-(int)copyColorInfo:(const *)arg1;
-(int)setCameraWithUID:(id)arg1;
-(id)getCameraUID;
-(BOOL)isFrontCamera;
-(int)getPreviewFrameCount:(int*)arg1 captureFrameCount:(int*)arg2 reset:(BOOL)arg3;
-(int)frameBecameAvailableCount:(int*)arg1 figBufferQueueEmptyCount:(int*)arg2 figBufferQueueErrorCount:(int*)arg3;
-(BOOL)cameraSupportsFormatWidth:(int)arg1 height:(int)arg2;

@end

