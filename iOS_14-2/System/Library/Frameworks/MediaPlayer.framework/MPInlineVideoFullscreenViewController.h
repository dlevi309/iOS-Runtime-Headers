/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/MPSwipableViewDelegate.h>
#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPVideoOverlayDelegate.h>
#import <libobjc.A.dylib/MPTransportControlsTarget.h>

@class UITapGestureRecognizer, MPWeakTimer, MPAVItem, UIActivityIndicatorView, MPInlineVideoController, MPVideoPlaybackOverlayView, UIPinchGestureRecognizer, MPSwipableView, MPVolumeController, NSString;

@interface MPInlineVideoFullscreenViewController : UIViewController <MPSwipableViewDelegate, MPVolumeControllerDelegate, MPVideoOverlayDelegate, MPTransportControlsTarget> {

	BOOL _disableTaps;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	MPWeakTimer* _idleTimer;
	BOOL _isAnimatingOverlay;
	MPAVItem* _item;
	UIActivityIndicatorView* _loadingIndicator;
	MPInlineVideoController* _masterController;
	MPVideoPlaybackOverlayView* _overlayView;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	BOOL _shouldForwardRotationEvents;
	MPSwipableView* _swipableView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	unsigned long long _activeOverlayUserEvents;
	BOOL _statusBarWasHidden;
	MPVolumeController* _volumeController;

}

@property (assign,nonatomic,__weak) MPInlineVideoController * masterController;              //@synthesize masterController=_masterController - In the implementation block
@property (nonatomic,retain) MPAVItem * item;                                                //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(id)init;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(MPAVItem *)item;
-(BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned long long)arg2 ;
-(void)overlayTappedBackButton:(id)arg1 ;
-(void)overlayTappedFullscreenButton:(id)arg1 ;
-(void)overlay:(id)arg1 didBeginUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didCancelUserEvent:(unsigned long long)arg2 ;
-(void)overlay:(id)arg1 didEndUserEvent:(unsigned long long)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)_hideOverlayAnimated:(BOOL)arg1 ;
-(void)_hideOverlayDidEnd;
-(void)_viewWasTapped:(id)arg1 ;
-(void)_viewWasPinched:(id)arg1 ;
-(void)hideLoadingIndicator;
-(void)cancelOverlayIdleTimer;
-(void)prepareForTransitionFromFullscreen;
-(void)resetOverlayIdleTimer;
-(void)updateOverlayView;
-(void)showLoadingIndicator;
-(void)showOverlayAnimated:(BOOL)arg1 ;
-(void)_overlayIdleTimerFired;
-(void)_showOverlayDidEnd;
-(void)setItem:(MPAVItem *)arg1 ;
-(BOOL)shouldAutorotate;
-(void)swipableViewHadActivity:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)loadView;
-(void)showAlternateTracks;
-(void)setMasterController:(MPInlineVideoController *)arg1 ;
-(MPInlineVideoController *)masterController;
-(void)dealloc;
@end

