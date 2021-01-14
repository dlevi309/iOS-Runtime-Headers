/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <MediaControls/MediaControlsVolumeControllerObserver.h>
#import <libobjc.A.dylib/MPVolumeDisplaying.h>
#import <libobjc.A.dylib/CCUIGroupRendering.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@protocol MediaControlsVolumeViewControllerDelegate;
@class UIWindowScene, NSString, NSArray, CALayer, UIViewPropertyAnimator, MediaControlsVolumeSliderView, MediaControlsVolumeController;

@interface MediaControlsVolumeViewController : UIViewController <MediaControlsVolumeControllerObserver, MPVolumeDisplaying, CCUIGroupRendering, UIGestureRecognizerDelegate, CCUIContentModuleContentViewController> {

	MediaControlsVolumeSliderView* _primarySlider;
	MediaControlsVolumeSliderView* _secondarySlider;
	NSString* _packageName;
	BOOL _isExpanded;
	id<MediaControlsVolumeViewControllerDelegate> _delegate;
	MediaControlsVolumeController* _volumeController;

}

@property (assign,nonatomic,__weak) id<MediaControlsVolumeViewControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) MediaControlsVolumeController * volumeController;                               //@synthesize volumeController=_volumeController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIWindowScene * windowSceneForVolumeDisplay; 
@property (getter=isOnScreenForVolumeDisplay,nonatomic,readonly) BOOL onScreenForVolumeDisplay; 
@property (nonatomic,readonly) NSString * volumeAudioCategory; 
@property (getter=isOnScreen,nonatomic,readonly) BOOL onScreen; 
@property (getter=isGroupRenderingRequired,nonatomic,readonly) BOOL groupRenderingRequired; 
@property (nonatomic,readonly) NSArray * punchOutRootLayers; 
@property (nonatomic,readonly) CALayer * punchOutRootLayer; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) double preferredExpandedContinuousCornerRadius; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
@property (nonatomic,readonly) UIViewPropertyAnimator * customAnimator; 
@property (nonatomic,readonly) BOOL shouldPerformHoverInteraction; 
@property (nonatomic,readonly) BOOL shouldPerformClickInteraction; 
-(void)viewWillLayoutSubviews;
-(BOOL)isOnScreen;
-(NSString *)volumeAudioCategory;
-(BOOL)providesOwnPlatter;
-(MediaControlsVolumeController *)volumeController;
-(void)mediaControlsVolumeController:(id)arg1 didChangeVolumeAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 forRoute:(long long)arg4 ;
-(void)setVolumeController:(MediaControlsVolumeController *)arg1 ;
-(id<MediaControlsVolumeViewControllerDelegate>)delegate;
-(void)didTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)_primarySliderValueDidChange:(id)arg1 ;
-(void)_dismissMediaControlsVolumeViewController;
-(UIWindowScene *)windowSceneForVolumeDisplay;
-(BOOL)isGroupRenderingRequired;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(double)preferredExpandedContentHeight;
-(BOOL)shouldExpandModuleOnTouch:(id)arg1 ;
-(void)setDelegate:(id<MediaControlsVolumeViewControllerDelegate>)arg1 ;
-(NSArray *)punchOutRootLayers;
-(double)preferredExpandedContentWidth;
-(void)mediaControlsVolumeController:(id)arg1 didChangeUserInteractionEnabled:(BOOL)arg2 forRoute:(long long)arg3 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(void)_performWithoutAnimationWhileHidden:(/*^block*/id)arg1 ;
-(void)mediaControlsVolumeController:(id)arg1 didUpdateSplitRoute:(BOOL)arg2 ;
-(void)_updateGlyphPackageDescription;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGRect)primaryFrame;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)_updateVisibility;
-(void)_secondarySliderValueDidChange:(id)arg1 ;
-(void)dealloc;
-(CGRect)secondaryFrame;
@end

