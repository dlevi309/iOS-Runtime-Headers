/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)setPlayer:(id)arg1 ;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(id)init;
-(BOOL)_shouldUseFullScreenLayoutInWindow:(id)arg1 parentViewController:(id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)transportControls:(id)arg1 heldButtonPart:(unsigned long long)arg2 ;
-(BOOL)transportControls:(id)arg1 releasedHeldButtonPart:(unsigned long long)arg2 ;
-(void)overlayDidEndScrubbing:(id)arg1 ;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayDidBeginScrubbing:(id)arg1 ;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)setItem:(id)arg1 ;
-(BOOL)inhibitOverlay;
-(void)showOverlayIfNecessary;
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
-(void)swipableViewHadActivity:(id)arg1 ;
-(void)swipableView:(id)arg1 tappedWithCount:(unsigned long long)arg2 atLocation:(CGPoint)arg3 ;
-(BOOL)canHideOverlay:(BOOL)arg1 ;
-(void)setControlsOverlayVisible:(BOOL)arg1 animate:(BOOL)arg2 force:(BOOL)arg3 ;
-(void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2 ;
-(BOOL)canShowControlsOverlay;
-(BOOL)controlsOverlayVisible;
-(void)setCanShowControlsOverlay:(BOOL)arg1 ;
-(void)setDisableControlsAutohide:(BOOL)arg1 ;
-(void)setDisabledParts:(unsigned long long)arg1 ;
-(void)setOrientation:(long long)arg1 animate:(BOOL)arg2 ;
-(void)videoView_playbackStateChangedNotification:(id)arg1 ;
-(void)loadView;
-(void)videoView_bufferingStateChangedNotification:(id)arg1 ;
-(void)displayVideoViewOnScreen;
-(BOOL)canDisplayItem:(id)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)dealloc;
@end

