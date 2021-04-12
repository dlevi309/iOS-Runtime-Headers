/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <MediaPlayer/MPVideoViewController.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>

@class NSString;

@interface MPAbstractFullScreenVideoViewController : MPVideoViewController <MPSwipableViewDelegate> {

	unsigned _requestExitAfterHidingControls : 1;
	unsigned _rotateAfterHidingControls : 1;
	unsigned _showControlsAfterRotate : 1;
	unsigned _autoHidingForItemChange : 1;
	unsigned _scheduledAutoHide : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)setItem:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(CGPoint)arg3 ;
-(void)swipableViewHadActivity:(id)arg1 ;
-(BOOL)canHideOverlay:(BOOL)arg1 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(BOOL)canShowControlsOverlay;
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(BOOL)controlsOverlayVisible;
-(void)setDisableControlsAutohide:(BOOL)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)videoView_playbackStateChangedNotification:(id)arg1 ;
-(void)videoView_bufferingStateChangedNotification:(id)arg1 ;
-(void)displayVideoViewOnScreen;
-(BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2 ;
-(BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayDidBeginScrubbing:(id)arg1 ;
-(void)overlayDidEndScrubbing:(id)arg1 ;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)showOverlayIfNecessary;
-(BOOL)inhibitOverlay;
-(void)setInhibitOverlay:(BOOL)arg1 ;
-(BOOL)forceScaleToFitInPortrait;
-(void)_resumedEventsOnlyNotification:(id)arg1 ;
-(void)transformVideoForInterfaceOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)hideOverlayAnimated:(BOOL)arg1 ;
-(void)cancelControlsOverlayAutohide;
-(void)scheduleControlsOverlayAutohideAfterDelay:(double)arg1 ;
-(void)_autohideControlsOverlay;
-(void)_hideOverlayWithAnimation:(BOOL)arg1 ;
-(void)_hideOverlayWithAnimation:(BOOL)arg1 shouldUpdateAutohideFlag:(BOOL)arg2 ;
-(long long)_validInterfaceOrientation;
@end

