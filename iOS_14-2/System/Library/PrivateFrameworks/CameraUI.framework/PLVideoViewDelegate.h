/*
* Generated on Thursday, January 14, 2021 at 2:26:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
*/


@protocol PLVideoViewDelegate <NSObject>
@optional
-(void)videoViewDidCreateAttachments:(id)arg1;
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
-(double)videoViewScrubberWidth:(id)arg1;
-(BOOL)videoViewCanBeginPlayback:(id)arg1;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1;
-(void)videoViewPlaybackDidFail:(id)arg1;
-(void)videoViewDidBeginPlayback:(id)arg1;
-(void)videoViewDidPausePlayback:(id)arg1;
-(void)videoViewDidEndPlayback:(id)arg1 didFinish:(BOOL)arg2;
-(void)videoViewDidBeginScrubbing:(id)arg1;
-(void)videoViewDidEndScrubbing:(id)arg1;
-(void)videoViewDidBeginRemaking:(id)arg1;
-(void)videoViewDidEndRemaking:(id)arg1 didSucceed:(BOOL)arg2;
-(void)videoView:(id)arg1 remakingProgressDidChange:(float)arg2;
-(void)videoViewWillBeginEditing:(id)arg1;
-(void)videoViewDidBeginEditing:(id)arg1;
-(void)videoViewDidCancelEditing:(id)arg1;
-(void)videoView:(id)arg1 displayPlayOverlay:(id)arg2;
-(BOOL)videoViewShouldRespondToPlayOverlayTap:(id)arg1;
-(BOOL)videoViewCanCreateMetadata:(id)arg1;
-(id)videoViewRequestsPickedAirplayRoute:(id)arg1;

@end

