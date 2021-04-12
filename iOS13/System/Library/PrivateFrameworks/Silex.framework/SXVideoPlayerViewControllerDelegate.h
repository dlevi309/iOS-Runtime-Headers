/*
* Generated on Monday, March 1, 2021 at 2:33:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoPlayerViewControllerDelegate <NSObject>
@optional
-(void)videoPlayerViewController:(id)arg1 initiatedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 startedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 pausedPlaybackOfVideo:(id)arg2;
-(void)videoPlayerViewController:(id)arg1 resumedPlaybackOfVideo:(id)arg2;
-(BOOL)videoPlayerViewControllerShouldStartPlayback:(id)arg1;

@required
-(void)videoPlayerViewControllerFinishedVideoPlayback:(id)arg1;

@end

