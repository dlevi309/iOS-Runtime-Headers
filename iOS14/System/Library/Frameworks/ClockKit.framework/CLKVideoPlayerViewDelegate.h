/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/


@protocol CLKVideoPlayerViewDelegate <NSObject>
@optional
-(void)videoPlayerViewWillBeginPlaying:(id)arg1;
-(void)videoPlayerView:(id)arg1 didFinishPrerolling:(BOOL)arg2;

@required
-(void)videoPlayerViewDidBeginPlaying:(id)arg1;
-(void)videoPlayerViewDidPauseAfterPlayingVideoToEnd:(id)arg1;
-(void)videoPlayerViewDidBeginPlayingQueuedVideo:(id)arg1;

@end

