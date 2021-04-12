/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
*/


@protocol PLVideoViewDelegate <NSObject>
@optional
-(double)videoViewScrubberYOrigin:(id)arg1 forOrientation:(long long)arg2;
-(BOOL)videoViewCanCreateMetadata:(id)arg1;
-(void)videoViewPlaybackDidFail:(id)arg1;
-(void)videoViewDidCreateAttachments:(id)arg1;
-(double)videoViewScrubberWidth:(id)arg1;
-(BOOL)videoViewCanBeginPlayback:(id)arg1;
-(void)videoViewIsReadyToBeginPlayback:(id)arg1;
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
-(id)videoViewRequestsPickedAirplayRoute:(id)arg1;

@end

