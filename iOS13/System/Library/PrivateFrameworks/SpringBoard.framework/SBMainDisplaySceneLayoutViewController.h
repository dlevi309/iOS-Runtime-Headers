/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutViewController.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutStatusBarViewDataSource.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/TFBetaLaunchHandleActivationDelegate.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver.h>
#import <libobjc.A.dylib/SBSystemCursorInteractionDelegate.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class SBMainDisplaySceneLayoutGestureManager, NSMutableSet, SBOrientationTransformWrapperView, SBMainDisplaySceneLayoutStatusBarView, UIView, SBSeparatorView, SBFHomeGrabberSettings, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, FBScene, SBKeyboardHomeAffordanceAssertion, NSObject, NSLayoutConstraint, SBMedusaSettings, SBHomeGrabberRotationView, NSString, SBMainDisplayLayoutState, NSArray, SBHomeGrabberView;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <SBMainDisplaySceneLayoutStatusBarViewDataSource, PTSettingsKeyObserver, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSystemCursorInteractionDelegate> {

	SBMainDisplaySceneLayoutGestureManager* _gestureManager;
	NSMutableSet* _pushPopTransformReasons;
	NSMutableSet* _pushPopWallpaperReasons;
	BOOL _showsPushInWallpaper;
	SBOrientationTransformWrapperView* _contentWrapperView;
	SBMainDisplaySceneLayoutStatusBarView* _statusBarView;
	UIView* _contentView;
	SBSeparatorView* _separatorView;
	id _keyboardWillChangeFrameObserver;
	double _separatorViewKeyboardMargin;
	SBFHomeGrabberSettings* _homeGrabberSettings;
	SBSceneHandleBlockObserver* _sceneHandleObserver;
	UIApplicationSceneClientSettingsDiffInspector* _clientSettingsInspector;
	BOOL _isKeyboardShowing;
	FBScene* _medusaKeyboardScene;
	SBKeyboardHomeAffordanceAssertion* _keyboardHomeAffordanceAssertion;
	NSMutableSet* _activeBetaLaunchHandles;
	NSObject*<OS_dispatch_queue> _betaLaunchUIActivationQueue;
	NSLayoutConstraint* _homeGrabberTopConstraint;
	NSLayoutConstraint* _homeGrabberBottomConstraint;
	NSLayoutConstraint* _homeGrabberLeftConstraint;
	NSLayoutConstraint* _homeGrabberRightConstraint;
	SBMedusaSettings* _medusaSettings;
	BOOL __preventsCornerRadiusUpdate;
	double _separatorViewAlpha;
	unsigned long long _nubStyle;
	id<BSInvalidatable> _pushPopWallpaperRequireAssertion;
	SBHomeGrabberRotationView* _homeGrabberRotationView;
	NSString* _keyboardFocusSceneID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<BSInvalidatable> pushPopWallpaperRequireAssertion;                                                     //@synthesize pushPopWallpaperRequireAssertion=_pushPopWallpaperRequireAssertion - In the implementation block
@property (nonatomic,readonly) SBHomeGrabberRotationView * homeGrabberRotationView;                                                    //@synthesize homeGrabberRotationView=_homeGrabberRotationView - In the implementation block
@property (nonatomic,readonly) SBMainDisplayLayoutState * _transitioningFromLayoutState; 
@property (nonatomic,readonly) SBMainDisplayLayoutState * _transitioningToLayoutState; 
@property (nonatomic,readonly) NSArray * appViewControllers; 
@property (nonatomic,copy,readonly) NSArray * _transitioningAppViewControllers; 
@property (nonatomic,readonly) UIView * _separatorView; 
@property (assign,setter=_setPreventsCornerRadiusUpdate:,nonatomic) BOOL _preventsCornerRadiusUpdate;                                  //@synthesize _preventsCornerRadiusUpdate=__preventsCornerRadiusUpdate - In the implementation block
@property (assign,setter=_setSeparatorViewAlpha:,nonatomic) double _separatorViewAlpha;                                                //@synthesize separatorViewAlpha=_separatorViewAlpha - In the implementation block
@property (nonatomic,readonly) double _separatorViewWidth; 
@property (nonatomic,readonly) CGRect _separatorViewHitTestFrame; 
@property (assign,setter=_setNubStyle:,nonatomic) unsigned long long _nubStyle;                                                        //@synthesize nubStyle=_nubStyle - In the implementation block
@property (nonatomic,readonly) SBHomeGrabberView * _activeHomeGrabberView; 
@property (setter=_setKeyboardFocusSceneID:,getter=_keyboardFocusSceneID,nonatomic,copy) NSString * keyboardFocusSceneID;              //@synthesize keyboardFocusSceneID=_keyboardFocusSceneID - In the implementation block
@property (nonatomic,readonly) SBMainDisplayLayoutState * layoutState; 
-(void)dealloc;
-(UIView *)_separatorView;
-(void)viewDidLoad;
-(BOOL)_shouldReverseLayoutDirection;
-(CGRect)statusBarAvoidanceFrame;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(long long)_overrideInterfaceOrientationMechanics;
-(id)_displayConfiguration;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(long long)statusBarOrientation;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(BOOL)shouldBeginCursorInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(UIEdgeInsets)cursorInteractionHitTestInsetsForView:(id)arg1 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(void)betaLaunchHandle:(id)arg1 activateIfNeededEndedWithResult:(BOOL)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(BOOL)arg4 ;
-(id)initWithSceneManager:(id)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)arg1 ;
-(BOOL)_shouldDrawHomeGrabber;
-(CGRect)_separatorViewReferenceFrameForSpaceConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 frameOptions:(unsigned long long)arg3 ;
-(id)_createStatusBarWithFrame:(CGRect)arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3 ;
-(id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3 ;
-(BOOL)_shouldNubViewBeVisibleForLayoutRole:(long long)arg1 inLayoutState:(id)arg2 ;
-(BOOL)_isCurrentlyRotating;
-(id)_jiggleAppAnimationControllerForTransitionRequest:(id)arg1 ;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg1 ;
-(id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_removeAppAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_replaceSingleAppAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_createSplitAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_createSlideOverAndFadeElementOffscreenWithTransitionRequest:(id)arg1 ;
-(id)_createFadeOutInlineOverlayWithTransitionRequest:(id)arg1 ;
-(id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg1 ;
-(void)_performJiggleHintAnimationForApplicationSceneHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_resizeAppViewsWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_rotateAppViewsWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_removeAppForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_replaceSingleSceneForTransitionRequest:(id)arg1 animationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_addSingleSceneForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_slideOverAndFadeElementOffscreenForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeOutInlineOverlayForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGRect)arg1 ;
-(void)_setSeparatorViewAlpha:(double)arg1 ;
-(SBHomeGrabberView *)_activeHomeGrabberView;
-(void)_beginRequiringPushedInWallpaperForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)_orderFrontLayoutElementViewController:(id)arg1 ;
-(CGRect)_referenceFrameForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4 ;
-(void)_endRequiringPushedInWallpaperForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)_orderFrontLayoutElementViewControllerForLayoutRole:(long long)arg1 ;
-(id)_inlineAppExposeOverlayForLayoutRole:(long long)arg1 ;
-(CGRect)referenceFrameForUniqueIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_orderFrontOverlayViews;
-(void)_updateAuxiliaryViewsWhichWantToAnimateDuringRotation;
-(SBHomeGrabberRotationView *)homeGrabberRotationView;
-(NSArray *)appViewControllers;
-(void)_setKeyboardFocusSceneID:(id)arg1 ;
-(id)statusBarDescribers;
-(id)statusBarDescriberAtPoint:(CGPoint)arg1 inView:(id)arg2 pointInSceneLayoutSpace:(CGPoint*)arg3 ;
-(id)statusBarDescriberForStatusBarPart:(id)arg1 ;
-(BOOL)allowsConfiguringIndividualStatusBarParts;
-(CGRect)frameForSceneIdentifier:(id)arg1 inView:(id)arg2 ;
-(id)statusBarPartsForSceneWithIdentifier:(id)arg1 ;
-(id)currentlyValidStatusBarPartIdentifiers;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(BOOL)_isLayoutElementViewControllerOccluded:(id)arg1 ;
-(void)_updateAuxiliaryViews;
-(BOOL)_shouldConsiderHomeScreenAsActive;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)arg1 ;
-(BOOL)_shouldRepositionViewAfterTransition;
-(void)_beginLayoutStateTransitionWithTransitionContext:(id)arg1 ;
-(NSArray *)_transitioningAppViewControllers;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition;
-(BOOL)_shouldRotateToLayoutOrientation:(long long)arg1 ;
-(void)setUserResizing:(BOOL)arg1 ;
-(BOOL)_isStatusBarHidden;
-(id)_leadingStatusBarStyleRequest;
-(id)_trailingStatusBarStyleRequest;
-(CGRect)_statusBarAvoidanceFrameForLayoutState:(id)arg1 layoutRole:(long long)arg2 ;
-(UIEdgeInsets)_statusBarEdgeInsetsForLayoutState:(id)arg1 ;
-(id)_keyboardFocusSceneID;
-(void)_pushInForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)_popOutForReason:(id)arg1 animationFactory:(id)arg2 ;
-(double)normalizedDismissLeftLocation;
-(double)normalizedNarrowWideLocation;
-(double)normalizedHalfHalfLocation;
-(double)normalizedWideNarrowLocation;
-(double)normalizedDismissRightLocation;
-(double)_layoutWidthForLayoutRole:(long long)arg1 inSpaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(double)_separatorViewWidth;
-(CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 layoutState:(id)arg3 ;
-(CGRect)_layoutFrameForSize:(CGSize)arg1 withRole:(long long)arg2 inInterfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4 ;
-(void)_setNubStyle:(unsigned long long)arg1 ;
-(unsigned)_layoutSpaceAnchorEdgeForLayoutRole:(long long)arg1 ;
-(CGRect)_referenceFrameForLayoutElement:(id)arg1 inLayoutState:(id)arg2 ;
-(void)_setPreventsCornerRadiusUpdate:(BOOL)arg1 ;
-(CGRect)_separatorViewHitTestFrame;
-(void)_noteKeyboardIsForMedusaWithOwningScene:(id)arg1 ;
-(void)_noteKeyboardIsNotForMedusa;
-(CGRect)_separatorViewFrame;
-(double)_separatorViewAlpha;
-(unsigned long long)_nubStyle;
-(void)_createOrDestroyHomeGrabberRotationViewIfNecessary;
-(unsigned)_anchorEdgeForLayoutRole:(long long)arg1 ;
-(unsigned)_convertAnchorEdge:(unsigned)arg1 toLayoutOrientation:(long long)arg2 ;
-(CGRect)_layoutFrameForLayoutRole:(long long)arg1 inLayoutState:(id)arg2 ;
-(id)_sceneHandleForLayoutRole:(long long)arg1 ;
-(id)_medusaKeyboardSceneHandle;
-(void)_updateKeyboardHomeAffordanceAssertion;
-(void)_updateSuppressingHomeAffordanceBounce;
-(BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
-(BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
-(void)_updateViewControllerNubViewHighlightState:(id)arg1 forKeyboardFocusSceneID:(id)arg2 ;
-(unsigned)_anchorEdgeForLayoutRole:(long long)arg1 inInterfaceOrientation:(long long)arg2 ;
-(CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4 ;
-(CGRect)_convertRectFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(CGRect)arg1 ;
-(void)_setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(CGAffineTransform)_pushedInTransform;
-(void)_updateWallpaperStyleAndBackgroundColorWithAnimationFactory:(id)arg1 ;
-(id<BSInvalidatable>)pushPopWallpaperRequireAssertion;
-(void)setPushPopWallpaperRequireAssertion:(id<BSInvalidatable>)arg1 ;
-(CGPoint)_convertPointFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGPoint)arg1 ;
-(CGPoint)_convertPointFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(CGPoint)arg1 ;
-(BOOL)_preventsCornerRadiusUpdate;
-(void)_setUpObservationWithCurrentEntities:(id)arg1 previousEntities:(id)arg2 ;
-(void)_configureHomeGrabberForLayoutStateTransition;
-(BOOL)_isTransitioningNoninteractivelyFromAppToApp;
-(id)_applicationSceneLayoutElementControllerForLayoutRole:(long long)arg1 ;
-(id)_sceneHandleForBottomEdgeLocation:(double)arg1 ;
-(void)_configureHomeGrabberForSettingsChangeWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)_updateHomeGrabberEdgeProtectAndAutoHideWithResetDelay:(double)arg1 unhideDelay:(double)arg2 ;
-(void)_updateHomeGrabberEdgeProtectAndAutoHideForAppRequest;
-(id)_sceneHandlesIntersectingHomeGrabber;
-(CGRect)_statusBarAvoidanceFrameForLayoutState:(id)arg1 ;
-(CGAffineTransform)_convertTransformFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_convertTransformFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(CGAffineTransform)arg1 ;
-(CGPoint)_updatePointInReferenceCoordinateSpace:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGRect)_updateRectInReferenceCoordinateSpace:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(BOOL)_isEdgeProtectedForHomeGestureAtEdgeLocation:(double)arg1 ;
-(long long)_layoutRoleForSceneWithIdentifier:(id)arg1 ;
-(id)_layoutElementForSceneWithIdentifier:(id)arg1 ;
@end

