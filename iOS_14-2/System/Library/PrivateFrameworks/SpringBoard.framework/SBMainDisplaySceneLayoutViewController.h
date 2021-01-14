/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSceneLayoutViewController.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutStatusBarViewDataSource.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>
#import <libobjc.A.dylib/SBSceneHandleObserver.h>
#import <libobjc.A.dylib/TFBetaLaunchHandleActivationDelegate.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver.h>
#import <libobjc.A.dylib/SBSystemPointerInteractionDelegate.h>

@protocol OS_dispatch_queue, BSInvalidatable;
@class SBMainDisplaySceneLayoutGestureManager, NSMutableSet, SBOrientationTransformWrapperView, SBMainDisplaySceneLayoutStatusBarView, UIView, SBSeparatorView, SBFHomeGrabberSettings, SBSceneHandleBlockObserver, UIApplicationSceneClientSettingsDiffInspector, FBScene, SBKeyboardHomeAffordanceAssertion, NSObject, NSLayoutConstraint, SBMedusaSettings, SBHomeGrabberRotationView, NSString, SBMainDisplayLayoutState, NSArray, SBHomeGrabberView;

@interface SBMainDisplaySceneLayoutViewController : SBSceneLayoutViewController <SBMainDisplaySceneLayoutStatusBarViewDataSource, PTSettingsKeyObserver, SBSceneHandleObserver, TFBetaLaunchHandleActivationDelegate, SBDeviceApplicationSceneStatusBarBreadcrumbProviderObserver, SBSystemPointerInteractionDelegate> {

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
-(void)_addLayoutElementViewController:(id)arg1 forLayoutElement:(id)arg2 entity:(id)arg3 ;
-(NSArray *)appViewControllers;
-(void)_beginLayoutStateTransitionWithTransitionContext:(id)arg1 ;
-(BOOL)_isLayoutElementViewControllerOccluded:(id)arg1 ;
-(BOOL)_shouldRepositionViewAfterTransition;
-(void)betaLaunchHandle:(id)arg1 activateIfNeededEndedWithResult:(BOOL)arg2 ;
-(id)animationWrapperViewForLayoutState:(id)arg1 roleMask:(unsigned long long)arg2 interfaceOrientation:(long long)arg3 maskDisplayCorners:(BOOL)arg4 ;
-(CGRect)referenceFrameForUniqueIdentifier:(id)arg1 inLayoutState:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)sceneHandle:(id)arg1 didUpdateSettingsWithDiff:(id)arg2 previousSettings:(id)arg3 ;
-(id)initWithSceneManager:(id)arg1 ;
-(BOOL)_shouldRotateToLayoutOrientation:(long long)arg1 ;
-(CGRect)referenceFrameForEntity:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)_isCurrentlyRotating;
-(void)setUserResizing:(BOOL)arg1 ;
-(void)_doCommonCleanupUponEndingLayoutTransitionWithInterruption:(BOOL)arg1 ;
-(NSArray *)_transitioningAppViewControllers;
-(BOOL)_shouldAdjustViewAffordancesAfterTransition;
-(id)_animationWrapperViewForElement:(id)arg1 entity:(id)arg2 layoutState:(id)arg3 ;
-(id)_sceneHandleForBottomEdgeLocation:(double)arg1 ;
-(void)_updateAuxiliaryViews;
-(BOOL)_shouldConsiderHomeScreenAsActive;
-(id)_displayConfiguration;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(long long)_overrideInterfaceOrientationMechanics;
-(id)_rotateAppsAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)currentlyValidStatusBarPartIdentifiers;
-(id)_createSlideOverAndFadeElementOffscreenWithTransitionRequest:(id)arg1 ;
-(void)_updateHomeGrabberEdgeProtectAndAutoHideForAppRequest;
-(unsigned)_anchorEdgeForLayoutRole:(long long)arg1 ;
-(CGRect)_updateRectInReferenceCoordinateSpace:(CGRect)arg1 withBlock:(/*^block*/id)arg2 ;
-(CGRect)frameForSceneIdentifier:(id)arg1 inView:(id)arg2 ;
-(void)_slideOverAndFadeElementOffscreenForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fadeStatusBarStylesBetweenFromAndToViewControllersWithSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_replaceSingleSceneForTransitionRequest:(id)arg1 animationSettings:(id)arg2 completion:(/*^block*/id)arg3 ;
-(CGRect)_separatorViewReferenceFrameForSpaceConfiguration:(long long)arg1 interfaceOrientation:(long long)arg2 frameOptions:(unsigned long long)arg3 ;
-(id)statusBarDescriberAtPoint:(CGPoint)arg1 inView:(id)arg2 pointInSceneLayoutSpace:(CGPoint*)arg3 ;
-(void)_updateKeyboardHomeAffordanceAssertion;
-(CGPoint)_convertPointFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(CGPoint)arg1 ;
-(double)_separatorViewAlpha;
-(void)_endRequiringPushedInWallpaperForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)_noteKeyboardIsNotForMedusa;
-(CGPoint)_updatePointInReferenceCoordinateSpace:(CGPoint)arg1 withBlock:(/*^block*/id)arg2 ;
-(id)_trailingStatusBarStyleRequest;
-(id)_applicationSceneLayoutElementControllerForLayoutRole:(long long)arg1 ;
-(CGRect)_convertRectFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(CGRect)arg1 ;
-(id)_createSplitAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(id)_fadeStatusBarStylesBetweenFromAndToViewControllersWithTransitionRequest:(id)arg1 ;
-(void)_orderFrontLayoutElementViewController:(id)arg1 ;
-(BOOL)_isStatusBarHidden;
-(UIView *)_separatorView;
-(CGAffineTransform)_convertTransformFromContentViewCoordinateSpaceToReferenceCoordinateSpace:(CGAffineTransform)arg1 ;
-(CGAffineTransform)_convertTransformFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGAffineTransform)arg1 ;
-(id)_leadingStatusBarStyleRequest;
-(CGRect)_referenceFrameForLayoutElement:(id)arg1 inLayoutState:(id)arg2 ;
-(BOOL)allowsConfiguringIndividualStatusBarParts;
-(id)_replaceSingleAppAnimationControllerWithTransitionRequest:(id)arg1 ;
-(CGRect)statusBarAvoidanceFrame;
-(id<BSInvalidatable>)pushPopWallpaperRequireAssertion;
-(id)_sceneHandleForLayoutRole:(long long)arg1 ;
-(void)_popOutForReason:(id)arg1 animationFactory:(id)arg2 ;
-(id)statusBarPartsForSceneWithIdentifier:(id)arg1 ;
-(void)_updateViewControllerNubViewHighlightState:(id)arg1 forKeyboardFocusSceneID:(id)arg2 ;
-(void)_addSingleSceneForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_sceneHandlesIntersectingHomeGrabber;
-(CGPoint)_convertPointFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGPoint)arg1 ;
-(void)setPushPopWallpaperRequireAssertion:(id<BSInvalidatable>)arg1 ;
-(void)_removeAppForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGRect)_referenceFrameForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4 ;
-(id)_removeAppAnimationControllerWithTransitionRequest:(id)arg1 ;
-(double)_layoutWidthForLayoutRole:(long long)arg1 inSpaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 ;
-(BOOL)_shouldTakeKeyboardHomeAffordanceAssertion;
-(BOOL)_isEdgeProtectedForHomeGestureAtEdgeLocation:(double)arg1 ;
-(void)statusBarBreadcrumbProviderDidUpdateDisplayProperties:(id)arg1 ;
-(void)_setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_orderFrontOverlayViews;
-(unsigned)_convertAnchorEdge:(unsigned)arg1 toLayoutOrientation:(long long)arg2 ;
-(void)_configureHomeGrabberForSettingsChangeWithDiff:(id)arg1 transitionContext:(id)arg2 ;
-(void)_setUpObservationWithCurrentEntities:(id)arg1 previousEntities:(id)arg2 ;
-(double)normalizedNarrowWideLocation;
-(CGRect)_convertRectFromReferenceCoordinateSpaceToContentViewCoordinateSpace:(CGRect)arg1 ;
-(void)_updateSuppressingHomeAffordanceBounce;
-(void)_pushInForReason:(id)arg1 animationFactory:(id)arg2 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(CGRect)_layoutFrameForLayoutRole:(long long)arg1 inLayoutState:(id)arg2 ;
-(UIEdgeInsets)_statusBarEdgeInsetsForLayoutState:(id)arg1 ;
-(CGRect)_separatorViewFrame;
-(id)animationControllerForRotatingWithTransitionRequest:(id)arg1 ;
-(double)normalizedDismissLeftLocation;
-(void)_resizeAppViewsWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_setSeparatorViewAlpha:(double)arg1 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(void)viewDidLoad;
-(void)_updateHomeGrabberEdgeProtectAndAutoHideWithResetDelay:(double)arg1 unhideDelay:(double)arg2 ;
-(id)statusBarDescribers;
-(double)normalizedHalfHalfLocation;
-(id)_resizeAppsAnimationControllerWithTransitionRequest:(id)arg1 ;
-(id)_keyboardFocusSceneID;
-(void)_setPreventsCornerRadiusUpdate:(BOOL)arg1 ;
-(long long)statusBarOrientation;
-(void)_createOrDestroyHomeGrabberRotationViewIfNecessary;
-(UIEdgeInsets)pointerInteractionHitTestInsetsForView:(id)arg1 ;
-(CGRect)_statusBarAvoidanceFrameForLayoutState:(id)arg1 layoutRole:(long long)arg2 ;
-(BOOL)_preventsCornerRadiusUpdate;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(double)normalizedWideNarrowLocation;
-(void)_orderFrontLayoutElementViewControllerForLayoutRole:(long long)arg1 ;
-(CGRect)_separatorViewHitTestFrame;
-(BOOL)_shouldReverseLayoutDirection;
-(id)_medusaKeyboardSceneHandle;
-(SBHomeGrabberView *)_activeHomeGrabberView;
-(id)_bannerUnfurlAnimationControllerForTransitionRequest:(id)arg1 ;
-(CGAffineTransform)_pushedInTransform;
-(CGRect)_statusBarAvoidanceFrameForLayoutState:(id)arg1 ;
-(void)_noteKeyboardIsForMedusaWithOwningScene:(id)arg1 ;
-(void)_beginRequiringPushedInWallpaperForReason:(id)arg1 animationFactory:(id)arg2 ;
-(BOOL)_isTransitioningNoninteractivelyFromAppToApp;
-(void)_setKeyboardFocusSceneID:(id)arg1 ;
-(id)_createFadeOutInlineOverlayWithTransitionRequest:(id)arg1 ;
-(void)_fadeOutInlineOverlayForTransitionRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_updateAuxiliaryViewsWhichWantToAnimateDuringRotation;
-(SBHomeGrabberRotationView *)homeGrabberRotationView;
-(void)_updateWallpaperStyleAndBackgroundColorWithAnimationFactory:(id)arg1 ;
-(void)_performJiggleHintAnimationForApplicationSceneHandle:(id)arg1 completion:(/*^block*/id)arg2 ;
-(double)_separatorViewWidth;
-(CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 layoutState:(id)arg3 ;
-(id)_createStatusBarWithFrame:(CGRect)arg1 interfaceOrientation:(long long)arg2 reason:(id)arg3 ;
-(id)_jiggleAppAnimationControllerForTransitionRequest:(id)arg1 ;
-(CGRect)_layoutFrameForSize:(CGSize)arg1 withRole:(long long)arg2 inInterfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4 ;
-(void)_rotateAppViewsWithAnimationSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(CGSize)_layoutSizeForLayoutRole:(long long)arg1 spaceConfiguration:(long long)arg2 interfaceOrientation:(long long)arg3 frameOptions:(unsigned long long)arg4 ;
-(id)statusBarDescriberForStatusBarPart:(id)arg1 ;
-(BOOL)_shouldNubViewBeVisibleForLayoutRole:(long long)arg1 inLayoutState:(id)arg2 ;
-(BOOL)_shouldDrawHomeGrabber;
-(id)_layoutElementForSceneWithIdentifier:(id)arg1 ;
-(long long)_layoutRoleForSceneWithIdentifier:(id)arg1 ;
-(unsigned)_layoutSpaceAnchorEdgeForLayoutRole:(long long)arg1 ;
-(BOOL)_keyboardIsSuppressedForMedusaKeyboardScene;
-(unsigned long long)_nubStyle;
-(unsigned)_anchorEdgeForLayoutRole:(long long)arg1 inInterfaceOrientation:(long long)arg2 ;
-(void)dealloc;
-(void)_configureHomeGrabberForLayoutStateTransition;
-(void)_setNubStyle:(unsigned long long)arg1 ;
-(id)_inlineAppExposeOverlayForLayoutRole:(long long)arg1 ;
-(double)normalizedDismissRightLocation;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end

