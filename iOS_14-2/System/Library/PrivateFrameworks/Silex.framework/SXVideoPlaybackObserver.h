/*
* Generated on Thursday, January 14, 2021 at 2:24:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


@protocol SXVideoPlaybackObserver <NSObject>
@optional
-(void)playbackCoordinatorStartedPlayback:(id)arg1;
-(void)playbackCoordinatorResumedPlayback:(id)arg1;
-(void)playbackCoordinatorPausedPlayback:(id)arg1;
-(void)playbackCoordinatorFinishedPlayback:(id)arg1;
-(void)playbackCoordinator:(id)arg1 playbackFailedWithError:(id)arg2;
-(void)playbackCoordinator:(id)arg1 timeElapsed:(double)arg2 duration:(double)arg3;
-(void)playbackCoordinator:(id)arg1 loadingProgressed:(double)arg2;
-(void)playbackCoordinatorPlaybackBufferFullStateChanged:(id)arg1;
-(void)playbackCoordinatorPlaybackLikelyToKeepUpStateChanged:(id)arg1;
-(void)playbackCoordinatorStateChanged:(id)arg1;
-(void)playbackCoordinatorMuteStateChanged:(id)arg1;

@end

