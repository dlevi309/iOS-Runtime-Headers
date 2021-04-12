/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/SBSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBTouchTemplateGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/BSTransactionObserver.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBGrabberTongueDelegate.h>
#import <libobjc.A.dylib/SBHomeGrabberDelegate.h>
#import <libobjc.A.dylib/SBHomeGestureParticipantDelegate.h>
#import <libobjc.A.dylib/SBPanSystemGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SBLayoutStateTransitionObserver.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate.h>
#import <libobjc.A.dylib/SBFluidSwitcherGestureWorkspaceTransactionDelegate.h>

@protocol SBFluidSwitcherGestureManagerDelegate;
@class SBFluidSwitcherViewController, SBMainDisplaySceneLayoutViewController, SBHomeGrabberView, SBAppSwitcherDefaults, SBAppSwitcherSettings, SBHomeGestureSettings, SBFHomeGrabberSettings, SBReachabilitySettings, SBHomeGestureParticipant, SBFluidSwitcherPanGestureRecognizer, SBIndirectPanGestureRecognizer, SBGrabberTongue, UINotificationFeedbackGenerator, NSTimer, UIView, SBSwitcherForcePressSystemGestureRecognizer, SBFluidScrunchGestureRecognizer, BSMonotonicReferenceTime, UIHoverGestureRecognizer, SBPanSystemGestureRecognizer, SBMainDisplaySceneLayoutDragAndDropInteractionManager, SBFluidSwitcherGestureWorkspaceTransaction, NSString;

@interface SBFluidSwitcherGestureManager : NSObject <SBSystemGestureRecognizerDelegate, SBTouchTemplateGestureRecognizerDelegate, BSTransactionObserver, BSDescriptionProviding, PTSettingsKeyObserver, SBGrabberTongueDelegate, SBHomeGrabberDelegate, SBHomeGestureParticipantDelegate, SBPanSystemGestureRecognizerDelegate, SBLayoutStateTransitionObserver, SBMainDisplaySceneLayoutDragAndDropInteractionManagerDelegate, SBFluidSwitcherGestureWorkspaceTransactionDelegate> {

	BOOL _usesHomeAffordanceRulesForGrabberTongue;
	BOOL _interactivelyPresentingTongue;
	BOOL _playedEdgeProtectHaptic;
	BOOL _shouldRubberbandGrabberViewForReduceMotion;
	SBFluidSwitcherViewController* _mainSwitcherContentController;
	SBFluidSwitcherViewController* _floatingSwitcherContentController;
	SBMainDisplaySceneLayoutViewController* _sceneLayoutViewController;
	id<SBFluidSwitcherGestureManagerDelegate> _delegate;
	SBHomeGrabberView* _currentHomeGrabberView;
	SBAppSwitcherDefaults* _appSwitcherDefaults;
	SBAppSwitcherSettings* _appSwitcherSettings;
	SBHomeGestureSettings* _homeGestureSettings;
	SBFHomeGrabberSettings* _homeGrabberSettings;
	SBReachabilitySettings* _reachabilitySettings;
	SBHomeGestureParticipant* _homeGestureParticipant;
	SBFluidSwitcherPanGestureRecognizer* _deckInSwitcherPanGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectBottomEdgePanGestureRecognizer;
	SBGrabberTongue* _deckGrabberTongue;
	SBFluidSwitcherPanGestureRecognizer* _activateReachabilityGestureRecognizer;
	UINotificationFeedbackGenerator* _edgeProtectFeedbackGenerator;
	NSTimer* _delayedHomeGrabberUpdateTimer;
	UIView* _exclusionTrapezoidDebugView;
	SBSwitcherForcePressSystemGestureRecognizer* _deckSwitcherForcePressRecognizer;
	SBFluidScrunchGestureRecognizer* _fluidScrunchGestureRecognizer;
	SBFluidSwitcherPanGestureRecognizer* _clickAndDragHomeGestureRecognizer;
	BSMonotonicReferenceTime* _lastClickAndDragHomeGestureTimestamp;
	UIHoverGestureRecognizer* _switcherHoverGestureRecognizer;
	SBGrabberTongue* _floatingAppGrabberTongue;
	SBFluidSwitcherPanGestureRecognizer* _swipeUpFloatingAppGestureRecognizer;
	SBFluidSwitcherPanGestureRecognizer* _moveFloatingApplicationGestureRecognizer;
	SBIndirectPanGestureRecognizer* _indirectDismissFloatingApplicationGestureRecognizer;
	SBFluidScrunchGestureRecognizer* _indirectFloatingAppScrunchGestureRecognizer;
	SBPanSystemGestureRecognizer* _pinFloatingApplicationGestureRecognizer;
	SBPanSystemGestureRecognizer* _unpinSplitViewApplicationGestureRecognizer;
	SBMainDisplaySceneLayoutDragAndDropInteractionManager* _dragAndDropInteractionManager;
	SBFluidSwitcherGestureWorkspaceTransaction* _activeGestureTransaction;

}

@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * mainSwitcherContentController;                               //@synthesize mainSwitcherContentController=_mainSwitcherContentController - In the implementation block
@property (assign,nonatomic,__weak) SBFluidSwitcherViewController * floatingSwitcherContentController;                           //@synthesize floatingSwitcherContentController=_floatingSwitcherContentController - In the implementation block
@property (assign,nonatomic,__weak) SBMainDisplaySceneLayoutViewController * sceneLayoutViewController;                          //@synthesize sceneLayoutViewController=_sceneLayoutViewController - In the implementation block
@property (assign,nonatomic,__weak) id<SBFluidSwitcherGestureManagerDelegate> delegate;                                          //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) SBHomeGrabberView * currentHomeGrabberView;                                                  //@synthesize currentHomeGrabberView=_currentHomeGrabberView - In the implementation block
@property (nonatomic,retain) SBAppSwitcherDefaults * appSwitcherDefaults;                                                        //@synthesize appSwitcherDefaults=_appSwitcherDefaults - In the implementation block
@property (nonatomic,retain) SBAppSwitcherSettings * appSwitcherSettings;                                                        //@synthesize appSwitcherSettings=_appSwitcherSettings - In the implementation block
@property (nonatomic,retain) SBHomeGestureSettings * homeGestureSettings;                                                        //@synthesize homeGestureSettings=_homeGestureSettings - In the implementation block
@property (nonatomic,retain) SBFHomeGrabberSettings * homeGrabberSettings;                                                       //@synthesize homeGrabberSettings=_homeGrabberSettings - In the implementation block
@property (nonatomic,retain) SBReachabilitySettings * reachabilitySettings;                                                      //@synthesize reachabilitySettings=_reachabilitySettings - In the implementation block
@property (nonatomic,retain) SBHomeGestureParticipant * homeGestureParticipant;                                                  //@synthesize homeGestureParticipant=_homeGestureParticipant - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherPanGestureRecognizer * deckInSwitcherPanGestureRecognizer;                           //@synthesize deckInSwitcherPanGestureRecognizer=_deckInSwitcherPanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectBottomEdgePanGestureRecognizer;                            //@synthesize indirectBottomEdgePanGestureRecognizer=_indirectBottomEdgePanGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBGrabberTongue * deckGrabberTongue;                                                                //@synthesize deckGrabberTongue=_deckGrabberTongue - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherPanGestureRecognizer * activateReachabilityGestureRecognizer;                        //@synthesize activateReachabilityGestureRecognizer=_activateReachabilityGestureRecognizer - In the implementation block
@property (assign,nonatomic) BOOL usesHomeAffordanceRulesForGrabberTongue;                                                       //@synthesize usesHomeAffordanceRulesForGrabberTongue=_usesHomeAffordanceRulesForGrabberTongue - In the implementation block
@property (assign,nonatomic) BOOL interactivelyPresentingTongue;                                                                 //@synthesize interactivelyPresentingTongue=_interactivelyPresentingTongue - In the implementation block
@property (assign,nonatomic) BOOL playedEdgeProtectHaptic;                                                                       //@synthesize playedEdgeProtectHaptic=_playedEdgeProtectHaptic - In the implementation block
@property (nonatomic,retain) UINotificationFeedbackGenerator * edgeProtectFeedbackGenerator;                                     //@synthesize edgeProtectFeedbackGenerator=_edgeProtectFeedbackGenerator - In the implementation block
@property (nonatomic,retain) NSTimer * delayedHomeGrabberUpdateTimer;                                                            //@synthesize delayedHomeGrabberUpdateTimer=_delayedHomeGrabberUpdateTimer - In the implementation block
@property (nonatomic,retain) UIView * exclusionTrapezoidDebugView;                                                               //@synthesize exclusionTrapezoidDebugView=_exclusionTrapezoidDebugView - In the implementation block
@property (assign,nonatomic) BOOL shouldRubberbandGrabberViewForReduceMotion;                                                    //@synthesize shouldRubberbandGrabberViewForReduceMotion=_shouldRubberbandGrabberViewForReduceMotion - In the implementation block
@property (nonatomic,retain) SBSwitcherForcePressSystemGestureRecognizer * deckSwitcherForcePressRecognizer;                     //@synthesize deckSwitcherForcePressRecognizer=_deckSwitcherForcePressRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * fluidScrunchGestureRecognizer;                                    //@synthesize fluidScrunchGestureRecognizer=_fluidScrunchGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherPanGestureRecognizer * clickAndDragHomeGestureRecognizer;                            //@synthesize clickAndDragHomeGestureRecognizer=_clickAndDragHomeGestureRecognizer - In the implementation block
@property (nonatomic,retain) BSMonotonicReferenceTime * lastClickAndDragHomeGestureTimestamp;                                    //@synthesize lastClickAndDragHomeGestureTimestamp=_lastClickAndDragHomeGestureTimestamp - In the implementation block
@property (nonatomic,retain) UIHoverGestureRecognizer * switcherHoverGestureRecognizer;                                          //@synthesize switcherHoverGestureRecognizer=_switcherHoverGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBGrabberTongue * floatingAppGrabberTongue;                                                         //@synthesize floatingAppGrabberTongue=_floatingAppGrabberTongue - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherPanGestureRecognizer * swipeUpFloatingAppGestureRecognizer;                          //@synthesize swipeUpFloatingAppGestureRecognizer=_swipeUpFloatingAppGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherPanGestureRecognizer * moveFloatingApplicationGestureRecognizer;                     //@synthesize moveFloatingApplicationGestureRecognizer=_moveFloatingApplicationGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBIndirectPanGestureRecognizer * indirectDismissFloatingApplicationGestureRecognizer;               //@synthesize indirectDismissFloatingApplicationGestureRecognizer=_indirectDismissFloatingApplicationGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBFluidScrunchGestureRecognizer * indirectFloatingAppScrunchGestureRecognizer;                      //@synthesize indirectFloatingAppScrunchGestureRecognizer=_indirectFloatingAppScrunchGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBPanSystemGestureRecognizer * pinFloatingApplicationGestureRecognizer;                             //@synthesize pinFloatingApplicationGestureRecognizer=_pinFloatingApplicationGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBPanSystemGestureRecognizer * unpinSplitViewApplicationGestureRecognizer;                          //@synthesize unpinSplitViewApplicationGestureRecognizer=_unpinSplitViewApplicationGestureRecognizer - In the implementation block
@property (nonatomic,retain) SBMainDisplaySceneLayoutDragAndDropInteractionManager * dragAndDropInteractionManager;              //@synthesize dragAndDropInteractionManager=_dragAndDropInteractionManager - In the implementation block
@property (nonatomic,retain) SBFluidSwitcherGestureWorkspaceTransaction * activeGestureTransaction;                              //@synthesize activeGestureTransaction=_activeGestureTransaction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(void)invalidate;
-(id<SBFluidSwitcherGestureManagerDelegate>)delegate;
-(void)setDelegate:(id<SBFluidSwitcherGestureManagerDelegate>)arg1 ;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(void)transactionDidComplete:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(SBAppSwitcherDefaults *)appSwitcherDefaults;
-(void)homeGestureParticipantOwningHomeGestureDidChange:(id)arg1 ;
-(id)viewForSystemGestureRecognizer:(id)arg1 ;
-(void)failMultitaskingGesturesForReason:(id)arg1 ;
-(SBMainDisplaySceneLayoutViewController *)sceneLayoutViewController;
-(id)_currentLayoutState;
-(SBHomeGestureParticipant *)homeGestureParticipant;
-(void)setHomeGestureParticipant:(SBHomeGestureParticipant *)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(SBHomeGestureSettings *)homeGestureSettings;
-(void)setHomeGestureSettings:(SBHomeGestureSettings *)arg1 ;
-(void)fluidSwitcherGestureTransaction:(id)arg1 didBeginGesture:(id)arg2 ;
-(void)fluidSwitcherGestureTransaction:(id)arg1 didUpdateGesture:(id)arg2 ;
-(void)fluidSwitcherGestureTransaction:(id)arg1 didEndGesture:(id)arg2 ;
-(void)completeGestureWithTransitionRequest:(id)arg1 ;
-(double)additionalEdgeSpacingForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowThinStyleForHomeGrabberView:(id)arg1 ;
-(BOOL)shouldAllowAutoHideForHomeGrabberView:(id)arg1 ;
-(BOOL)grabberTongueOrPullEnabled:(id)arg1 forGestureRecognizer:(id)arg2 ;
-(BOOL)grabberTongue:(id)arg1 shouldShowTongueOnFirstSwipeWithEdgeLocation:(double)arg2 ;
-(BOOL)grabberTongue:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(BOOL)grabberTongue:(id)arg1 shouldAllowSecondSwipeWithEdgeLocation:(double)arg2 ;
-(void)grabberTongueBeganPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueUpdatedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueEndedPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueCanceledPulling:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 andGesture:(id)arg4 ;
-(void)grabberTongueWillPresent:(id)arg1 ;
-(void)grabberTongueWillDismiss:(id)arg1 ;
-(void)grabberTongueWillPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 ;
-(void)grabberTongueDidPresentInteractively:(id)arg1 withDistance:(double)arg2 andVelocity:(double)arg3 ;
-(id)customGestureRecognizerForGrabberTongue:(id)arg1 ;
-(id)indirectPanGestureRecognizerForGrabberTongue:(id)arg1 ;
-(unsigned long long)indirectPanSystemGestureTypeForGrabberTongue:(id)arg1 ;
-(BOOL)shouldSuppressTongueViewForGrabberTongue:(id)arg1 ;
-(long long)_currentUnlockedEnvironmentMode;
-(SBFluidSwitcherGestureWorkspaceTransaction *)activeGestureTransaction;
-(id)initWithMainSwitcherContentController:(id)arg1 floatingSwitcherContentController:(id)arg2 sceneLayoutViewController:(id)arg3 delegate:(id)arg4 ;
-(id)_currentFloatingAppLayout;
-(id)dragAndDropInteractionManager:(id)arg1 sourceViewProviderForDraggingWindowWithGestureRecognizer:(id)arg2 ;
-(id)dragAndDropInteractionManager:(id)arg1 displayItemForDraggingWindowWithGestureRecognizer:(id)arg2 ;
-(void)dragAndDropInteractionManager:(id)arg1 didBeginGesture:(id)arg2 ;
-(void)dragAndDropInteractionManager:(id)arg1 didUpdateGesture:(id)arg2 ;
-(void)dragAndDropInteractionManager:(id)arg1 didEndGesture:(id)arg2 ;
-(void)dragAndDropInteractionManager:(id)arg1 didBeginDraggingWindowWithSceneIdentifier:(id)arg2 ;
-(void)dragAndDropInteractionManager:(id)arg1 willEndDraggingWindowWithSceneIdentifier:(id)arg2 ;
-(SBFluidSwitcherViewController *)mainSwitcherContentController;
-(SBFluidSwitcherViewController *)floatingSwitcherContentController;
-(void)_updateDeckSwitcherForcePressGesturePresence;
-(void)_setUpGestureRecognizers;
-(void)_updateSwitcherBottomEdgeGesturePresence;
-(void)_updateDeckSwitcherInSwitcherAndReachabilityGesturePresence;
-(void)_configureScrunchGesture;
-(void)_configureFloatingApplicationGestureRecognizers;
-(void)configureIndirectBottomEdgePanGestureRecognizer;
-(void)_handleFluidGesture:(id)arg1 ;
-(void)_handleScrunchGesture:(id)arg1 ;
-(void)_handleWindowDragGestureRecognizer:(id)arg1 ;
-(void)_handleDeckSwitcherPanGesture:(id)arg1 ;
-(void)_updateReachabilityGestureSettings;
-(void)_handleClickAndDragHomeGesture:(id)arg1 ;
-(SBAppSwitcherSettings *)appSwitcherSettings;
-(void)_handleDeckSwitcherForcePressGesture:(id)arg1 ;
-(void)setCurrentHomeGrabberView:(SBHomeGrabberView *)arg1 ;
-(void)_updateExclusionTrapezoidDebugView;
-(BOOL)_shouldSuppressEdgeProtectToAllowSwipesImmediatelyAfterTransition;
-(SBHomeGrabberView *)currentHomeGrabberView;
-(void)relinquishHiddenAssertionForHomeGrabber:(id)arg1 ;
-(void)takeHiddenAssertionForHomeGrabber:(id)arg1 ;
-(void)_handleSwitcherPanGestureBegan:(id)arg1 ;
-(void)_handleSwitcherPanGestureChanged:(id)arg1 ;
-(void)_handleSwitcherPanGestureEnded:(id)arg1 ;
-(BOOL)_isTransactionRunningForGestureRecognizer:(id)arg1 ;
-(void)_handleSwitcherGestureBegan:(id)arg1 ;
-(void)_updateHomeGrabberWithAnimationMode:(long long)arg1 ;
-(id)_layoutElementViewControllerAtLocation:(CGPoint)arg1 ;
-(void)_hideGrabberAnimated:(BOOL)arg1 ;
-(void)_startFluidSwitcherTransactionForGestureRecognizer:(id)arg1 ;
-(id)_switcherViewControllerForGestureRecognizer:(id)arg1 ;
-(void)_configureTransitionRequest:(id)arg1 forGestureBegin:(id)arg2 ;
-(long long)_gestureTypeForGestureRecognizer:(id)arg1 ;
-(Class)_fluidSwitcherGestureTransactionClassForGestureType:(long long)arg1 ;
-(void)setActiveGestureTransaction:(SBFluidSwitcherGestureWorkspaceTransaction *)arg1 ;
-(BOOL)_shouldReachabilityGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldDeckInSwitcherPanGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldFloatingApplicationSwipeUpGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldFloatingApplicationMoveGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldFloatingApplicationPinGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldSplitViewApplicationUnpinGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldIndirectFloatingAppScrunchGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(BOOL)_shouldClickAndDragHomeGesture:(id)arg1 receiveTouch:(id)arg2 ;
-(CGRect)_floatingApplicationBounds;
-(BOOL)_shouldBeginReachabilityGesture:(id)arg1 ;
-(BOOL)_shouldBeginBottomEdgePanGesture:(id)arg1 ;
-(BOOL)_shouldBeginDeckInSwitcherPanGesture:(id)arg1 ;
-(BOOL)_shouldBeginFluidScrunchGesture:(id)arg1 ;
-(BOOL)_shouldBeginDeckForcePressGesture:(id)arg1 ;
-(BOOL)_shouldBeginFloatingApplicationSwipeUpGesture:(id)arg1 ;
-(BOOL)_shouldBeginFloatingApplicationMoveGesture:(id)arg1 ;
-(BOOL)_shouldBeginFloatingApplicationPinGesture:(id)arg1 ;
-(BOOL)_shouldBeginSplitViewApplicationUnpinGesture:(id)arg1 ;
-(BOOL)_shouldBeginIndirectHomePanGesture:(id)arg1 ;
-(BOOL)_shouldBeginIndirectFloatingAppScrunchGesture:(id)arg1 ;
-(BOOL)_shouldBeginClickAndDragHomeGesture:(id)arg1 ;
-(BOOL)_shouldAllowDeckBottomEdgeGestureToRecognizeFromEdges:(unsigned long long)arg1 ;
-(BOOL)_shouldAllowFloatingApplicationGesture:(id)arg1 failureReason:(id*)arg2 ;
-(BOOL)_shouldSuppressEdgeProtect;
-(BOOL)_shouldBeginFloatingApplicationPresentGesture:(id)arg1 ;
-(BOOL)_shouldProtectEdgeLocation:(double)arg1 ;
-(id)_deviceApplicationSceneEntityForFloatingApplicationGrabberTongue;
-(BOOL)_edgeLocationIsOutsideFloatingApplicationGrabberFreeRegion:(double)arg1 ;
-(void)_handleFloatingAppPresentGesture:(id)arg1 ;
-(BOOL)_isEdgeLocationInHomeAffordanceRegion:(double)arg1 ;
-(UINotificationFeedbackGenerator *)edgeProtectFeedbackGenerator;
-(void)setMainSwitcherContentController:(SBFluidSwitcherViewController *)arg1 ;
-(void)setFloatingSwitcherContentController:(SBFluidSwitcherViewController *)arg1 ;
-(void)setSceneLayoutViewController:(SBMainDisplaySceneLayoutViewController *)arg1 ;
-(void)setAppSwitcherDefaults:(SBAppSwitcherDefaults *)arg1 ;
-(void)setAppSwitcherSettings:(SBAppSwitcherSettings *)arg1 ;
-(SBFHomeGrabberSettings *)homeGrabberSettings;
-(void)setHomeGrabberSettings:(SBFHomeGrabberSettings *)arg1 ;
-(SBReachabilitySettings *)reachabilitySettings;
-(void)setReachabilitySettings:(SBReachabilitySettings *)arg1 ;
-(SBFluidSwitcherPanGestureRecognizer *)deckInSwitcherPanGestureRecognizer;
-(void)setDeckInSwitcherPanGestureRecognizer:(SBFluidSwitcherPanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectBottomEdgePanGestureRecognizer;
-(void)setIndirectBottomEdgePanGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(SBGrabberTongue *)deckGrabberTongue;
-(void)setDeckGrabberTongue:(SBGrabberTongue *)arg1 ;
-(SBFluidSwitcherPanGestureRecognizer *)activateReachabilityGestureRecognizer;
-(void)setActivateReachabilityGestureRecognizer:(SBFluidSwitcherPanGestureRecognizer *)arg1 ;
-(BOOL)usesHomeAffordanceRulesForGrabberTongue;
-(void)setUsesHomeAffordanceRulesForGrabberTongue:(BOOL)arg1 ;
-(BOOL)interactivelyPresentingTongue;
-(void)setInteractivelyPresentingTongue:(BOOL)arg1 ;
-(BOOL)playedEdgeProtectHaptic;
-(void)setPlayedEdgeProtectHaptic:(BOOL)arg1 ;
-(void)setEdgeProtectFeedbackGenerator:(UINotificationFeedbackGenerator *)arg1 ;
-(NSTimer *)delayedHomeGrabberUpdateTimer;
-(void)setDelayedHomeGrabberUpdateTimer:(NSTimer *)arg1 ;
-(UIView *)exclusionTrapezoidDebugView;
-(void)setExclusionTrapezoidDebugView:(UIView *)arg1 ;
-(BOOL)shouldRubberbandGrabberViewForReduceMotion;
-(void)setShouldRubberbandGrabberViewForReduceMotion:(BOOL)arg1 ;
-(SBSwitcherForcePressSystemGestureRecognizer *)deckSwitcherForcePressRecognizer;
-(void)setDeckSwitcherForcePressRecognizer:(SBSwitcherForcePressSystemGestureRecognizer *)arg1 ;
-(SBFluidScrunchGestureRecognizer *)fluidScrunchGestureRecognizer;
-(void)setFluidScrunchGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
-(SBFluidSwitcherPanGestureRecognizer *)clickAndDragHomeGestureRecognizer;
-(void)setClickAndDragHomeGestureRecognizer:(SBFluidSwitcherPanGestureRecognizer *)arg1 ;
-(BSMonotonicReferenceTime *)lastClickAndDragHomeGestureTimestamp;
-(void)setLastClickAndDragHomeGestureTimestamp:(BSMonotonicReferenceTime *)arg1 ;
-(UIHoverGestureRecognizer *)switcherHoverGestureRecognizer;
-(void)setSwitcherHoverGestureRecognizer:(UIHoverGestureRecognizer *)arg1 ;
-(SBGrabberTongue *)floatingAppGrabberTongue;
-(void)setFloatingAppGrabberTongue:(SBGrabberTongue *)arg1 ;
-(SBFluidSwitcherPanGestureRecognizer *)swipeUpFloatingAppGestureRecognizer;
-(void)setSwipeUpFloatingAppGestureRecognizer:(SBFluidSwitcherPanGestureRecognizer *)arg1 ;
-(SBFluidSwitcherPanGestureRecognizer *)moveFloatingApplicationGestureRecognizer;
-(void)setMoveFloatingApplicationGestureRecognizer:(SBFluidSwitcherPanGestureRecognizer *)arg1 ;
-(SBIndirectPanGestureRecognizer *)indirectDismissFloatingApplicationGestureRecognizer;
-(void)setIndirectDismissFloatingApplicationGestureRecognizer:(SBIndirectPanGestureRecognizer *)arg1 ;
-(SBFluidScrunchGestureRecognizer *)indirectFloatingAppScrunchGestureRecognizer;
-(void)setIndirectFloatingAppScrunchGestureRecognizer:(SBFluidScrunchGestureRecognizer *)arg1 ;
-(SBPanSystemGestureRecognizer *)pinFloatingApplicationGestureRecognizer;
-(void)setPinFloatingApplicationGestureRecognizer:(SBPanSystemGestureRecognizer *)arg1 ;
-(SBPanSystemGestureRecognizer *)unpinSplitViewApplicationGestureRecognizer;
-(void)setUnpinSplitViewApplicationGestureRecognizer:(SBPanSystemGestureRecognizer *)arg1 ;
-(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)dragAndDropInteractionManager;
-(void)setDragAndDropInteractionManager:(SBMainDisplaySceneLayoutDragAndDropInteractionManager *)arg1 ;
@end

