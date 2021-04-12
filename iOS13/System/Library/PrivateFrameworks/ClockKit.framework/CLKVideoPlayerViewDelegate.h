/*
* Generated on Monday, March 1, 2021 at 2:33:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


@protocol CLKVideoPlayerViewDelegate <NSObject>
@optional
-(void)videoPlayerViewWillBeginPlaying:(id)arg1;
-(void)videoPlayerView:(id)arg1 didFinishPrerolling:(BOOL)arg2;

@required
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;
-(void)videoPlayerViewDidBeginPlaying:(id)arg1;

@end

