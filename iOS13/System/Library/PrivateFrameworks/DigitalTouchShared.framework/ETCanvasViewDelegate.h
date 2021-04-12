/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
*/


@protocol ETCanvasViewDelegate <NSObject>
@optional
-(BOOL)canvasViewShouldUseFastVerticalWisp:(id)arg1;
-(void)canvasViewDidPause:(id)arg1;
-(void)canvasViewDidUnpause:(id)arg1;
-(BOOL)canvasView:(id)arg1 tapRecognizerShouldBegin:(id)arg2;
-(void)canvasViewDidStartMediaAppearance:(id)arg1;
-(void)canvasViewDidEndMediaAppearance:(id)arg1;
-(void)canvasView:(id)arg1 angerUsesForceTouch:(BOOL)arg2;

@required
-(long long)recentHeartRate;
-(void)canvasView:(id)arg1 didBeginComposingMessageType:(unsigned short)arg2;
-(void)canvasView:(id)arg1 didEndComposingMessageType:(unsigned short)arg2;
-(void)canvasView:(id)arg1 sendMessage:(id)arg2;
-(void)canvasView:(id)arg1 didUpdateComposingMessageType:(unsigned short)arg2;
-(void)canvasViewDidBeginStroke:(id)arg1;
-(void)canvasViewDidEndStroke:(id)arg1;
-(BOOL)canvasViewShouldSendWithTimer:(id)arg1;
-(void)canvasView:(id)arg1 didBeginPlayingMessage:(id)arg2;
-(void)canvasViewWillReachComposingSizeLimit:(id)arg1;
-(void)canvasView:(id)arg1 willEndPlayingMessage:(id)arg2;
-(void)canvasView:(id)arg1 didEndPlayingMessage:(id)arg2;

@end

