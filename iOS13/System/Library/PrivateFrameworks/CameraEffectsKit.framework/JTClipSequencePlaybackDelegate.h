/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol JTClipSequencePlaybackDelegate <NSObject>
@optional
-(void)playbackDidStart:(id)arg1;
-(void)playbackReadyForDisplayChanged:(id)arg1 isReady:(BOOL)arg2;
-(void)playbackDidStop:(id)arg1 currentTime:(int)arg2;
-(void)playbackTimeDidChange:(id)arg1 currentTime:(int)arg2;
-(void)playerWillBeDestroyed:(id)arg1;
-(void)playbackDidReachEnd:(id)arg1;

@required
-(void)mediaserverdCrashed;

@end

