/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBTransientOverlayViewController.h>
#import <libobjc.A.dylib/SPUIRemoteSearchViewDelegate.h>

@protocol SBTransientOverlayTransitionContextProviding, SBSpotlightTransientOverlayViewControllerDelegate;
@class UIVisualEffectView, SBSpotlightTransientOverlaySpotlightViewController, SBSpotlightSettings, UIView, SBModalUIFluidDismissGestureManager, UIPanGestureRecognizer, UITapGestureRecognizer, NSString;

@interface SBSpotlightTransientOverlayViewController : SBTransientOverlayViewController <SPUIRemoteSearchViewDelegate> {

	UIVisualEffectView* _blurEffectView;
	SBSpotlightTransientOverlaySpotlightViewController* _spotlightViewController;
	BOOL _presentingInteractively;
	BOOL _performedAlongsideAnimations;
	id<SBTransientOverlayTransitionContextProviding> _interactivePresentationContextProvider;
	id<SBSpotlightTransientOverlayViewControllerDelegate> _delegate;
	unsigned long long _presentationSource;
	unsigned long long _dismissalSource;
	SBSpotlightSettings* _settings;
	UIView* _scalingView;
	unsigned long long _animationCount;
	SBModalUIFluidDismissGestureManager* _modalUIDismissGestureManager;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapToDismissGestureRecognizer;

}

@property (nonatomic,retain) SBSpotlightSettings * settings;                                                     //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIView * scalingView;                                                               //@synthesize scalingView=_scalingView - In the implementation block
@property (assign,nonatomic) unsigned long long animationCount;                                                  //@synthesize animationCount=_animationCount - In the implementation block
@property (nonatomic,retain) SBModalUIFluidDismissGestureManager * modalUIDismissGestureManager;                 //@synthesize modalUIDismissGestureManager=_modalUIDismissGestureManager - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * panGestureRecognizer;                                      //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * tapToDismissGestureRecognizer;                             //@synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<SBSpotlightTransientOverlayViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long presentationSource;                                              //@synthesize presentationSource=_presentationSource - In the implementation block
@property (assign,nonatomic) unsigned long long dismissalSource;                                                 //@synthesize dismissalSource=_dismissalSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)presentationSource;
-(BOOL)handleHomeButtonPress;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(id<SBSpotlightTransientOverlayViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(UITapGestureRecognizer *)tapToDismissGestureRecognizer;
-(void)setTapToDismissGestureRecognizer:(UITapGestureRecognizer *)arg1 ;
-(int)_preferredStatusBarVisibility;
-(void)setPanGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setSettings:(SBSpotlightSettings *)arg1 ;
-(unsigned long long)animationCount;
-(void)setAnimationCount:(unsigned long long)arg1 ;
-(void)setDelegate:(id<SBSpotlightTransientOverlayViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(void)setPresentationSource:(unsigned long long)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(SBSpotlightSettings *)settings;
-(void)dismissSearchView;
-(void)_handlePanGestureRecognizer:(id)arg1 ;
-(void)setScalingView:(UIView *)arg1 ;
-(BOOL)isContentOpaque;
-(void)viewDidLayoutSubviews;
-(UIView *)scalingView;
-(void)dealloc;
-(long long)preferredUnlockedGestureDismissalStyle;
-(BOOL)allowsStackingOverlayContentAbove;
-(id)newTransientOverlayDismissalTransitionCoordinator;
-(id)newTransientOverlayPresentationTransitionCoordinator;
-(void)setDismissalSource:(unsigned long long)arg1 ;
-(id)initWithModalUIFluidDismissGestureManager:(id)arg1 ;
-(BOOL)preservesAppSwitcherDuringPresentationAndDismissal;
-(BOOL)dismissesSiriForPresentation;
-(void)beginInteractivePresentation;
-(void)updateInteractivePresentationWithProgress:(double)arg1 translation:(double)arg2 ;
-(void)endInteractivePresentation:(BOOL)arg1 ;
-(void)handleGestureDismissal;
-(long long)preferredLockedGestureDismissalStyle;
-(id)preferredDisplayLayoutElementIdentifier;
-(/*^block*/id)sceneDeactivationPredicate;
-(BOOL)dismissesForCoverSheetPresentation;
-(BOOL)shouldPreventDragAndDrop;
-(BOOL)prefersWindowHitTestingDisabled;
-(long long)homeAffordanceSuppression;
-(void)_handleTapToDismissGestureRecognizer:(id)arg1 ;
-(void)_setSpotlightPresented:(BOOL)arg1 withAnimationMode:(long long)arg2 alongsideAnimationBlock:(/*^block*/id)arg3 completion:(/*^block*/id)arg4 ;
-(BOOL)_isSpotlightVisible;
-(void)_setSpotlightAlpha:(double)arg1 scale:(double)arg2 blurProgress:(double)arg3 translation:(CGPoint)arg4 withAnimationMode:(long long)arg5 alongsideAnimationBlock:(/*^block*/id)arg6 completion:(/*^block*/id)arg7 ;
-(void)_configureBlurFilterOnView:(id)arg1 ;
-(id)presentationDimmingViewColor;
-(BOOL)preventsClippingToBounds;
-(unsigned long long)dismissalSource;
-(SBModalUIFluidDismissGestureManager *)modalUIDismissGestureManager;
-(void)setModalUIDismissGestureManager:(SBModalUIFluidDismissGestureManager *)arg1 ;
@end

