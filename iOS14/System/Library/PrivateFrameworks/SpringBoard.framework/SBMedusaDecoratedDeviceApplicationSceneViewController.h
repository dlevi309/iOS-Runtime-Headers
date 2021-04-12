/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSceneViewStatusBarAssertionObserver.h>
#import <libobjc.A.dylib/SBInlineAppExposeContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSystemPointerInteractionDelegate.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling.h>

@class SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, UIView, SBInlineAppExposeContainerViewController, SBAsymmetricalCornerRadiusWrapperView, SBNubView, SBApplicationBlurContentView, NSHashTable, SBSceneViewStatusBarAssertion, NSMutableSet, SBMedusaSettings, BSCornerRadiusConfiguration, UIDropInteraction, NSString, MTLumaDodgePillSettings, SBHomeGrabberView;

@interface SBMedusaDecoratedDeviceApplicationSceneViewController : UIViewController <SBSceneViewStatusBarAssertionObserver, SBInlineAppExposeContainerViewControllerDelegate, SBSystemPointerInteractionDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMedusaDecoratedDeviceApplicationSceneViewControlling> {

	SBDeviceApplicationSceneHandle* _deviceApplicationSceneHandle;
	SBDeviceApplicationSceneViewController* _deviceApplicationSceneViewController;
	UIView* _inlineAppExposeContainerView;
	SBInlineAppExposeContainerViewController* _inlineContainerViewController;
	BOOL _nubViewHidden;
	BOOL _nubViewHighlighted;
	UIView* _rimShadowView;
	UIView* _containerView;
	SBAsymmetricalCornerRadiusWrapperView* _asymmetricalCornerRadiusWrapperView;
	UIView* _blurViewContainerView;
	SBNubView* _nubView;
	UIView* _darkenView;
	BOOL _isBlurred;
	SBApplicationBlurContentView* _blurView;
	NSHashTable* _statusBarAssertions;
	SBSceneViewStatusBarAssertion* _inlineAppExposeStatusBarAssertion;
	NSMutableSet* _matchMoveAnimationRequiringReasons;
	SBMedusaSettings* _medusaSettings;
	BOOL _clipsToBounds;
	double _shadowOpacity;
	double _shadowOffset;
	BSCornerRadiusConfiguration* _cornerRadiusConfiguration;
	unsigned long long _maskedCorners;
	double _darkenViewAlpha;
	UIDropInteraction* _dropInteraction;

}

@property (nonatomic,readonly) UIView * _blurViewContainerView; 
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (assign,nonatomic) double shadowOpacity;                                                                                         //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowOffset;                                                                                          //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;                                                      //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) unsigned long long maskedCorners;                                                                             //@synthesize maskedCorners=_maskedCorners - In the implementation block
@property (assign,nonatomic) BOOL clipsToBounds;                                                                                           //@synthesize clipsToBounds=_clipsToBounds - In the implementation block
@property (assign,nonatomic) double darkenViewAlpha;                                                                                       //@synthesize darkenViewAlpha=_darkenViewAlpha - In the implementation block
@property (assign,nonatomic) long long layoutRole; 
@property (assign,nonatomic) BOOL shouldRasterizeSceneHostView; 
@property (nonatomic,copy) NSString * sceneHostViewMinificationFilter; 
@property (nonatomic,retain) MTLumaDodgePillSettings * homeGrabberPillSettings; 
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                                                          //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isNubViewHidden,nonatomic) BOOL nubViewHidden; 
@property (assign,getter=isNubViewHighlighted,nonatomic) BOOL nubViewHighlighted; 
@property (nonatomic,retain) UIView*<SBApplicationSceneBackgroundView> backgroundView; 
@property (nonatomic,readonly) SBDeviceApplicationSceneHandle * sceneHandle; 
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,nonatomic) long long homeGrabberDisplayMode; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(id)newSnapshotView;
-(void)setShadowOffset:(double)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)viewWillLayoutSubviews;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)setNubViewHidden:(BOOL)arg1 ;
-(long long)layoutRole;
-(double)shadowOpacity;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(void)setCustomContentView:(UIView *)arg1 ;
-(double)shadowOffset;
-(UIView*<SBApplicationSceneBackgroundView>)backgroundView;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(MTLumaDodgePillSettings *)homeGrabberPillSettings;
-(void)setShadowOpacity:(double)arg1 ;
-(double)effectiveCornerRadius;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(double)darkenViewAlpha;
-(BOOL)isNubViewHidden;
-(long long)displayMode;
-(unsigned long long)maskedCorners;
-(double)statusBarAlpha;
-(BOOL)isBlurred;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)setShouldRasterizeSceneHostView:(BOOL)arg1 ;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(BOOL)shouldBeginPointerInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(BOOL)shouldRasterizeSceneHostView;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(BOOL)isNubViewHighlighted;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(UIView *)customContentView;
-(void)setSceneHostViewMinificationFilter:(NSString *)arg1 ;
-(NSString *)sceneHostViewMinificationFilter;
-(long long)overrideStatusBarStyle;
-(BOOL)clipsToBounds;
-(id)newSnapshot;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(UIEdgeInsets)pointerInteractionHitTestInsetsForView:(id)arg1 ;
-(void)setHomeGrabberPillSettings:(MTLumaDodgePillSettings *)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(id)initWithCoder:(id)arg1 ;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(void)invalidate;
-(long long)contentInterfaceOrientation;
-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(SBDeviceApplicationSceneHandle *)sceneHandle;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(SBHomeGrabberView *)homeGrabberView;
-(void)loadView;
-(long long)homeGrabberDisplayMode;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(void)setDarkenViewAlpha:(double)arg1 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)setNubViewHighlighted:(BOOL)arg1 ;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(CGSize)contentReferenceSize;
-(void)setLayoutRole:(long long)arg1 ;
-(void)dealloc;
-(void)setInlineAppExposeContainerViewController:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 inlineContainerViewController:(id)arg2 layoutRole:(long long)arg3 ;
-(UIView *)_blurViewContainerView;
-(id)_blurContentView;
-(void)_setBlurContentView:(id)arg1 ;
-(void)_updateNubViewAlpha;
-(BOOL)_sceneViewHasMatchMoveAnimation;
-(void)_handleNubTapGestureRecognizerAction:(id)arg1 ;
-(void)_addSceneViewMatchMoveAnimation;
-(void)_removeSceneViewMatchMoveAnimation;
-(void)_setAbsoluteDiffuseShadowOpacity:(double)arg1 ;
-(void)_setAbsoluteShadowOffset:(CGSize)arg1 ;
-(void)_setAbsoluteShadowRadius:(double)arg1 ;
@end

