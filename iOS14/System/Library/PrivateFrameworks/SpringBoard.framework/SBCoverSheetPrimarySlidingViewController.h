/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCoverSheetSlidingViewController.h>
#import <libobjc.A.dylib/SBGrabberTongueDelegate.h>
#import <libobjc.A.dylib/SBReachabilityObserver.h>

@protocol SBCoverSheetGrabberDelegate;
@class SBFTouchPassThroughView, SBCoverSheetPanelBackgroundContainerView, SBCoverSheetParallaxContainerView, SBGrabberTongue, SBCoverSheetBlurView, SBWallpaperEffectView, UIGestureRecognizer, NSString;

@interface SBCoverSheetPrimarySlidingViewController : SBCoverSheetSlidingViewController <SBGrabberTongueDelegate, SBReachabilityObserver> {

	id<SBCoverSheetGrabberDelegate> _grabberDelegate;
	SBFTouchPassThroughView* _unlockedContentOverlayView;
	SBCoverSheetPanelBackgroundContainerView* _panelBackgroundContainerView;
	SBFTouchPassThroughView* _parallaxClippingView;
	SBCoverSheetParallaxContainerView* _parallaxContainerView;
	SBGrabberTongue* _grabberTongue;
	SBCoverSheetBlurView* _panelCoverSheetBlurView;
	SBWallpaperEffectView* _panelWallpaperEffectView;
	SBWallpaperEffectView* _panelFadeOutWallpaperEffectView;
	double _defaultPresentGestureEdgeRegionSize;

}

@property (nonatomic,retain) SBFTouchPassThroughView * unlockedContentOverlayView;                                 //@synthesize unlockedContentOverlayView=_unlockedContentOverlayView - In the implementation block
@property (nonatomic,retain) SBCoverSheetPanelBackgroundContainerView * panelBackgroundContainerView;              //@synthesize panelBackgroundContainerView=_panelBackgroundContainerView - In the implementation block
@property (nonatomic,retain) SBFTouchPassThroughView * parallaxClippingView;                                       //@synthesize parallaxClippingView=_parallaxClippingView - In the implementation block
@property (nonatomic,retain) SBCoverSheetParallaxContainerView * parallaxContainerView;                            //@synthesize parallaxContainerView=_parallaxContainerView - In the implementation block
@property (nonatomic,retain) SBGrabberTongue * grabberTongue;                                                      //@synthesize grabberTongue=_grabberTongue - In the implementation block
@property (nonatomic,retain) SBCoverSheetBlurView * panelCoverSheetBlurView;                                       //@synthesize panelCoverSheetBlurView=_panelCoverSheetBlurView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * panelWallpaperEffectView;                                     //@synthesize panelWallpaperEffectView=_panelWallpaperEffectView - In the implementation block
@property (nonatomic,retain) SBWallpaperEffectView * panelFadeOutWallpaperEffectView;                              //@synthesize panelFadeOutWallpaperEffectView=_panelFadeOutWallpaperEffectView - In the implementation block
@property (assign,nonatomic) double defaultPresentGestureEdgeRegionSize;                                           //@synthesize defaultPresentGestureEdgeRegionSize=_defaultPresentGestureEdgeRegionSize - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetGrabberDelegate> grabberDelegate;                               //@synthesize grabberDelegate=_grabberDelegate - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * edgePullGestureRecognizer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueWillPresent:(id)arg1 ;
-(SBCoverSheetParallaxContainerView *)parallaxContainerView;
-(void)handleReachabilityModeActivated;
-(void)grabberTongueDidDismiss:(id)arg1 ;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)setGrabberTongue:(SBGrabberTongue *)arg1 ;
-(void)_updateWindowVisibility;
-(void)_positionSubviewsForContentFrame:(CGRect)arg1 forPresentationValue:(BOOL)arg2 ;
-(BOOL)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)_shouldShowGrabberOnFirstSwipe;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(BOOL)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2 ;
-(id)customGestureRecognizerForGrabberTongue:(id)arg1 ;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(SBGrabberTongue *)grabberTongue;
-(void)handleReachabilityModeDeactivated;
-(void)_endTransitionToAppeared:(BOOL)arg1 ;
-(SBWallpaperEffectView *)panelFadeOutWallpaperEffectView;
-(void)setTransitionSettings:(id)arg1 ;
-(void)setPanelFadeOutWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setParallaxClippingView:(SBFTouchPassThroughView *)arg1 ;
-(void)_beginTransitionFromAppeared:(BOOL)arg1 ;
-(CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(BOOL)arg2 ;
-(void)setParallaxContainerView:(SBCoverSheetParallaxContainerView *)arg1 ;
-(id<SBCoverSheetGrabberDelegate>)grabberDelegate;
-(void)setPanelBackgroundContainerView:(SBCoverSheetPanelBackgroundContainerView *)arg1 ;
-(SBWallpaperEffectView *)panelWallpaperEffectView;
-(SBCoverSheetBlurView *)panelCoverSheetBlurView;
-(UIGestureRecognizer *)edgePullGestureRecognizer;
-(SBFTouchPassThroughView *)parallaxClippingView;
-(BOOL)shouldAutorotate;
-(BOOL)_canShowWhileLocked;
-(double)defaultPresentGestureEdgeRegionSize;
-(void)setGrabberDelegate:(id<SBCoverSheetGrabberDelegate>)arg1 ;
-(void)_setupPanelPartsIfNecessary;
-(void)setUnlockedContentOverlayView:(SBFTouchPassThroughView *)arg1 ;
-(SBFTouchPassThroughView *)unlockedContentOverlayView;
-(SBCoverSheetPanelBackgroundContainerView *)panelBackgroundContainerView;
-(void)loadView;
-(void)_updatePanelWallpaperEffectView;
-(void)setPanelWallpaperEffectView:(SBWallpaperEffectView *)arg1 ;
-(void)setPanelCoverSheetBlurView:(SBCoverSheetBlurView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setDefaultPresentGestureEdgeRegionSize:(double)arg1 ;
-(void)_createFadeOutWallpaperEffectView;
-(void)_createPanelWallpaperEffectViewIfNeeded;
-(void)dealloc;
@end

