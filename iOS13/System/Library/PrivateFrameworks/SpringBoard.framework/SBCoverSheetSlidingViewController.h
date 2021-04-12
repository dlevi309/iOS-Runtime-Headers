/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBCoverSheetSystemGestureDelegatePositionProviding.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol SBCoverSheetSlidingViewControllerContentViewController, SBCoverSheetSlidingViewControllerDelegate, OS_dispatch_group;
@class UIViewController, SBScreenEdgePanGestureRecognizer, SBIndirectPanGestureRecognizer, SBFluidScrunchGestureRecognizer, SBCoverSheetSystemGesturesDelegate, CSCoverSheetTransitionSettings, SBCoverSheetPositionView, SBHomeGestureSettings, CSLockScreenSettings, UIViewFloatAnimatableProperty, NSObject, NSString;

@interface SBCoverSheetSlidingViewController : UIViewController <SBCoverSheetSystemGestureDelegatePositionProviding, PTSettingsKeyObserver> {

	long long _dismissGestureState;
	BOOL _roundsCorners;
	BOOL _canBePulledDown;
	BOOL _canBePulledUp;
	BOOL _performingCatchUpForPresentation;
	UIViewController*<SBCoverSheetSlidingViewControllerContentViewController> _contentViewController;
	id<SBCoverSheetSlidingViewControllerDelegate> _delegate;
	SBScreenEdgePanGestureRecognizer* _dismissGestureRecognizer;
	SBScreenEdgePanGestureRecognizer* _dismissAddendumGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectPresentGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectDismissGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _scrunchDismissGestureRecognizer;
	long long _dismissalSlidingMode;
	long long _dismissalTransformMode;
	SBCoverSheetSystemGesturesDelegate* _systemGesturesDelegate;
	CSCoverSheetTransitionSettings* _transitionSettings;
	SBCoverSheetPositionView* _positionView;
	SBHomeGestureSettings* _homeGestureSettings;
	CSLockScreenSettings* _lockScreenSettings;
	long long _presentGestureState;
	UIViewFloatAnimatableProperty* _progressProperty;
	UIViewFloatAnimatableProperty* _catchupProperty;
	long long _groupCount;
	/*^block*/id _completionBlock;
	NSObject*<OS_dispatch_group> _completionGroup;
	double _initialTouchOffsetFromScreenEdge;
	CGPoint _lastTouchLocation;

}

@property (nonatomic,retain) SBCoverSheetPositionView * positionView;                                                                        //@synthesize positionView=_positionView - In the implementation block
@property (nonatomic,retain) SBScreenEdgePanGestureRecognizer * dismissGestureRecognizer;                                                    //@synthesize dismissGestureRecognizer=_dismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBScreenEdgePanGestureRecognizer * dismissAddendumGestureRecognizer;                                            //@synthesize dismissAddendumGestureRecognizer=_dismissAddendumGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectPresentGestureRecognizer;                                              //@synthesize indirectPresentGestureRecognizer=_indirectPresentGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectDismissGestureRecognizer;                                              //@synthesize indirectDismissGestureRecognizer=_indirectDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * scrunchDismissGestureRecognizer;                                              //@synthesize scrunchDismissGestureRecognizer=_scrunchDismissGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                                                    //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) CSLockScreenSettings * lockScreenSettings;                                                                      //@synthesize lockScreenSettings=_lockScreenSettings - In the implementation block
@property (assign,setter=_logPresentGestureState:,nonatomic) long long presentGestureState;                                                  //@synthesize presentGestureState=_presentGestureState - In the implementation block
@property (assign,nonatomic) BOOL canBePulledDown;                                                                                           //@synthesize canBePulledDown=_canBePulledDown - In the implementation block
@property (assign,nonatomic) BOOL canBePulledUp;                                                                                             //@synthesize canBePulledUp=_canBePulledUp - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * progressProperty;                                                               //@synthesize progressProperty=_progressProperty - In the implementation block
@property (nonatomic,retain) UIViewFloatAnimatableProperty * catchupProperty;                                                                //@synthesize catchupProperty=_catchupProperty - In the implementation block
@property (assign,nonatomic) BOOL performingCatchUpForPresentation;                                                                          //@synthesize performingCatchUpForPresentation=_performingCatchUpForPresentation - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchLocation;                                                                                      //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (assign,nonatomic) long long groupCount;                                                                                           //@synthesize groupCount=_groupCount - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                                                               //@synthesize completionBlock=_completionBlock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_group> completionGroup;                                                                   //@synthesize completionGroup=_completionGroup - In the implementation block
@property (assign,nonatomic) double initialTouchOffsetFromScreenEdge;                                                                        //@synthesize initialTouchOffsetFromScreenEdge=_initialTouchOffsetFromScreenEdge - In the implementation block
@property (nonatomic,readonly) UIViewController*<SBCoverSheetSlidingViewControllerContentViewController> contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBCoverSheetSlidingViewControllerDelegate> delegate;                                                  //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long dismissalSlidingMode;                                                                                 //@synthesize dismissalSlidingMode=_dismissalSlidingMode - In the implementation block
@property (assign,nonatomic) long long dismissalTransformMode;                                                                               //@synthesize dismissalTransformMode=_dismissalTransformMode - In the implementation block
@property (nonatomic,retain) SBCoverSheetSystemGesturesDelegate * systemGesturesDelegate;                                                    //@synthesize systemGesturesDelegate=_systemGesturesDelegate - In the implementation block
@property (assign,nonatomic) BOOL roundsCorners;                                                                                             //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic,__weak) CSCoverSheetTransitionSettings * transitionSettings;                                                     //@synthesize transitionSettings=_transitionSettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id<SBCoverSheetSlidingViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SBCoverSheetSlidingViewControllerDelegate>)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(unsigned long long)supportedInterfaceOrientations;
-(UIViewController*<SBCoverSheetSlidingViewControllerContentViewController>)contentViewController;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(BOOL)shouldAutorotate;
-(BOOL)_isTransitioning;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)wantsFullScreenLayout;
-(BOOL)isTransitioning;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setDismissGestureRecognizer:(SBScreenEdgePanGestureRecognizer *)arg1 ;
-(SBScreenEdgePanGestureRecognizer *)dismissGestureRecognizer;
-(long long)groupCount;
-(void)setRoundsCorners:(BOOL)arg1 ;
-(BOOL)roundsCorners;
-(void)_createProperties;
-(void)setCompletionGroup:(NSObject*<OS_dispatch_group>)arg1 ;
-(NSObject*<OS_dispatch_group>)completionGroup;
-(long long)participantState;
-(id)coverSheetIdentifier;
-(CSLockScreenSettings *)lockScreenSettings;
-(void)setLockScreenSettings:(CSLockScreenSettings *)arg1 ;
-(void)_setCornerRounded:(BOOL)arg1 ;
-(void)setGroupCount:(long long)arg1 ;
-(void)setLastTouchLocation:(CGPoint)arg1 ;
-(CGPoint)lastTouchLocation;
-(BOOL)isDismissGestureActive;
-(BOOL)isAnyGestureActivelyRecognized;
-(SBHomeGestureSettings *)homeGestureSettings;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(void)_handleDismissGesture:(id)arg1 ;
-(void)_updateHomeGestureSettings:(id)arg1 ;
-(void)_updateCoverSheetDismissSettings:(id)arg1 ;
-(void)setIndirectDismissGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(void)_handlePresentGesture:(id)arg1 ;
-(void)setIndirectPresentGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(void)setScrunchDismissGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
-(void)setSystemGesturesDelegate:(SBCoverSheetSystemGesturesDelegate *)arg1 ;
-(void)_addSystemGestureRecognizers;
-(void)_removeSystemGestureRecognizers;
-(void)_presentCoverSheetAnimated:(BOOL)arg1 forUserGesture:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_dismissCoverSheetAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(SBCoverSheetSystemGesturesDelegate *)systemGesturesDelegate;
-(BOOL)isPresentGestureActive;
-(void)_transitionToViewControllerAppearState:(int)arg1 ifNeeded:(BOOL)arg2 forUserGesture:(BOOL)arg3 ;
-(void)_startCatchupAnimationWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(SBScreenEdgePanGestureRecognizer *)dismissAddendumGestureRecognizer;
-(BOOL)_mathForGestureRecognizerPointsDown:(id)arg1 position:(double*)arg2 velocity:(double*)arg3 instantVelocity:(double*)arg4 averageVelocity:(double*)arg5 ;
-(void)_updateForLocation:(CGPoint)arg1 interactive:(BOOL)arg2 ;
-(void)_transitionToViewControllerAppearState:(int)arg1 ;
-(SBCoverSheetPositionView *)positionView;
-(void)_transitionToViewControllerAppearState:(int)arg1 forUserGesture:(BOOL)arg2 ;
-(void)_finishTransitionToPresented:(BOOL)arg1 animated:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)_logPresentGestureState:(long long)arg1 ;
-(void)_presentGestureBeganWithGestureRecognizer:(id)arg1 ;
-(void)_presentOrDismissGestureChangedWithGestureRecognizer:(id)arg1 ;
-(void)_presentOrDismissGestureEndedWithGestureRecognizer:(id)arg1 ;
-(void)_cancelTransitionForGesture:(id)arg1 ;
-(id)_grabberRecognizer;
-(void)_logDismissGestureState:(long long)arg1 forAddendumGesture:(BOOL)arg2 ;
-(void)_dismissGestureBeganWithGestureRecognizer:(id)arg1 ;
-(void)_dismissGestureChangedWithGestureRecognizer:(id)arg1 ;
-(CGPoint)_locationForGesture:(id)arg1 ;
-(BOOL)_isPresentingInterstitialForGestureRecognizer:(id)arg1 ;
-(CGPoint)_velocityForGesture:(id)arg1 ;
-(BOOL)_shouldRubberBandForGestureRecognizer:(id)arg1 ;
-(CGPoint)_adjustedTouchLocationForCurrentDismissalMode:(CGPoint)arg1 ;
-(CGPoint)_finalLocationForTransitionToPresented:(BOOL)arg1 ;
-(BOOL)_shouldEndPresentedForEndingGestureRecognizer:(id)arg1 ;
-(CGPoint)_averageVelocityForGesture:(id)arg1 ;
-(id)activeGestureRecognizer;
-(void)_studyLogForCompletionOfTransitionToPresented:(BOOL)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectPresentGestureRecognizer;
-(SBIndirectPanGestureRecognizer *)indirectDismissGestureRecognizer;
-(SBFluidScrunchGestureRecognizer *)scrunchDismissGestureRecognizer;
-(void)_studyLogForGestureRecognizerState:(long long)arg1 bounds:(CGRect)arg2 position:(double)arg3 velocity:(double)arg4 ;
-(UIViewFloatAnimatableProperty *)progressProperty;
-(void)_positionSubviewsForContentFrame:(CGRect)arg1 forPresentationValue:(BOOL)arg2 ;
-(CGRect)_animationTickedWithProgress:(double)arg1 forPresentationValue:(BOOL)arg2 ;
-(CGRect)_updatePositionViewForProgress:(double)arg1 forPresentationValue:(BOOL)arg2 ;
-(void)_animationTickForPresentationValue:(BOOL)arg1 ;
-(void)_endTransitionToAppeared:(BOOL)arg1 ;
-(void)_beginTransitionFromAppeared:(BOOL)arg1 ;
-(BOOL)isBottomMostSlider;
-(id)initWithContentViewController:(id)arg1 canBePulledDown:(BOOL)arg2 canBePulledUp:(BOOL)arg3 dismissalPreemptingGestureRecognizer:(id)arg4 ;
-(void)setPresented:(BOOL)arg1 forUserGesture:(BOOL)arg2 animated:(BOOL)arg3 withCompletion:(/*^block*/id)arg4 ;
-(void)setDismissalSlidingMode:(long long)arg1 ;
-(void)setDismissGesturesEnabled:(BOOL)arg1 ;
-(BOOL)mathForGestureRecognizerPointsDown:(id)arg1 ;
-(void)setDismissAddendumGestureRecognizer:(SBScreenEdgePanGestureRecognizer *)arg1 ;
-(long long)dismissalSlidingMode;
-(long long)dismissalTransformMode;
-(void)setDismissalTransformMode:(long long)arg1 ;
-(CSCoverSheetTransitionSettings *)transitionSettings;
-(void)setTransitionSettings:(CSCoverSheetTransitionSettings *)arg1 ;
-(void)setPositionView:(SBCoverSheetPositionView *)arg1 ;
-(long long)presentGestureState;
-(BOOL)canBePulledDown;
-(void)setCanBePulledDown:(BOOL)arg1 ;
-(BOOL)canBePulledUp;
-(void)setCanBePulledUp:(BOOL)arg1 ;
-(void)setProgressProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(UIViewFloatAnimatableProperty *)catchupProperty;
-(void)setCatchupProperty:(UIViewFloatAnimatableProperty *)arg1 ;
-(BOOL)performingCatchUpForPresentation;
-(void)setPerformingCatchUpForPresentation:(BOOL)arg1 ;
-(double)initialTouchOffsetFromScreenEdge;
-(void)setInitialTouchOffsetFromScreenEdge:(double)arg1 ;
@end

