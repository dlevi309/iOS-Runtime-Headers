/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayDidBeginScrubbing:(id)arg1;
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedScaleModeButton:(id)arg1;
-(void)overlayDidDismissAlternateTracksPopover:(id)arg1;
-(void)overlayTappedFullscreenButton:(id)arg1;
-(void)overlayTappedPictureInPictureButton:(id)arg1;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2;
-(double)overlay:(id)arg1 interpretCurrentTime:(double)arg2;
-(double)overlay:(id)arg1 interpretDuration:(double)arg2;
-(BOOL)overlayShouldAcceptSkipForwardEvent:(id)arg1;
-(BOOL)overlayShouldAcceptSkipBackwardEvent:(id)arg1;

@end

