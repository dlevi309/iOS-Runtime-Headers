/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/


@protocol TVPMediaItemReportingDelegate <NSObject>
@optional
-(void)mediaItemDidBecomeCurrentItem:(id)arg1 player:(id)arg2 reason:(id)arg3;
-(void)mediaItemWillNoLongerBeCurrentItem:(id)arg1 player:(id)arg2 reason:(id)arg3;
-(void)mediaItem:(id)arg1 willChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;
-(void)mediaItem:(id)arg1 didChangeFromPlaybackState:(id)arg2 toPlaybackState:(id)arg3 updatedRate:(double)arg4 player:(id)arg5;
-(void)mediaItemDidStall:(id)arg1 player:(id)arg2;
-(void)mediaItemWillStartBuffering:(id)arg1 player:(id)arg2;
-(void)mediaItemBufferingDidBecomeLikelyToKeepUp:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItem:(id)arg1 elapsedTimeDidChangeTo:(double)arg2 playbackDateDidChangeTo:(id)arg3 dueToTimeJump:(BOOL)arg4;
-(void)mediaItemDidSwitchVariantStreams:(id)arg1 player:(id)arg2;
-(void)mediaItem:(id)arg1 errorDidOccur:(id)arg2 player:(id)arg3;
-(void)mediaItemDidPrepareForLoading:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemDidLoadAVAssetKeys:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemDidPrepareForPlaybackInitiation:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemPlayerItemStatusDidBecomeReadyToPlay:(id)arg1 timeTakenForOperation:(double)arg2 player:(id)arg3;
-(void)mediaItemAllInitialLoadingComplete:(id)arg1 totalTime:(double)arg2 player:(id)arg3;

@end

