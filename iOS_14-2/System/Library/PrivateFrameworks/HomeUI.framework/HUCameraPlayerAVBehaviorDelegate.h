/*
* Generated on Thursday, January 14, 2021 at 2:24:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUCameraPlayerAVBehaviorDelegate <NSObject>
@optional
-(void)playbackControlsDidChangePlayerVolume:(float)arg1;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1;
-(void)pictureInPictureDidToggleMicrophone;

@required
-(double)currentScrubberResolutionForBehavior:(id)arg1;

@end

