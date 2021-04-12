/*
* Generated on Monday, March 1, 2021 at 2:34:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol HUCameraPlayerAVBehaviorDelegate <NSObject>
@optional
-(void)playbackControlsDidChangePlayerVolume:(float)arg1;
-(void)playbackControlsDidToggleMuted:(BOOL)arg1;
-(void)playbackControlsDidUpdateVisibilityOfLoadingIndicator:(BOOL)arg1;

@required
-(double)currentScrubberResolutionForBehavior:(id)arg1;
-(void)pictureInPictureDidToggleMicrophone;

@end

