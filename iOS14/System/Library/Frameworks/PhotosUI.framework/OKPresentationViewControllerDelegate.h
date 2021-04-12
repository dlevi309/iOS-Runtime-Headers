/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OKPresentationViewControllerDelegate <NSObject>
@optional
-(void)presentationViewControllerDidPrepare:(id)arg1;
-(void)presentationViewControllerDidAppear:(id)arg1;
-(void)endDuckingForTrackID:(id)arg1;
-(void)couchPotatoPlaybackFinished;
-(void)audioStartedPlayingForTrackID:(id)arg1 withAVAsset:(id)arg2 atVolume:(double)arg3;
-(void)audioFinishedPlayingForTrackID:(id)arg1;
-(void)beginDuckingForTrackID:(id)arg1 toDuckLevel:(double)arg2 fadeDuration:(double)arg3;
-(void)beginFadingForTrackID:(id)arg1 fadeDuration:(double)arg2;
-(void)endFadingForTrackID:(id)arg1;
-(void)presentationViewController:(id)arg1 changedFrameOfMainNavigatorTo:(CGRect)arg2;
-(void)dismissPresentationViewController:(id)arg1;
-(void)presentationViewController:(id)arg1 renderingTimeLogMessage:(id)arg2 withTimestamp:(double)arg3;

@end

