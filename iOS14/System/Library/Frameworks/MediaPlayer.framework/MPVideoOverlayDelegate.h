/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPVideoOverlayDelegate <NSObject>
@optional
-(void)overlayDidEndScrubbing:(id)arg1;
-(void)overlayTappedBackButton:(id)arg1;
-(void)overlayDidBeginScrubbing:(id)arg1;
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

