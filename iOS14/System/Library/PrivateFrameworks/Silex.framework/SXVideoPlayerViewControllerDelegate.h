/*
* Generated on Thursday, January 14, 2021 at 2:24:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoPlayerViewControllerDelegate <NSObject>
@optional
-(void)videoPlayerViewController:(id)arg1 initiatedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 pausedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
-(BOOL)videoPlayerViewControllerShouldStartPlayback:(id)arg1;
-(void)videoPlayerViewControllerWillEnterFullscreen:(id)arg1;
-(void)videoPlayerViewControllerWillExitFullscreen:(id)arg1;

@required
-(void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;

@end

