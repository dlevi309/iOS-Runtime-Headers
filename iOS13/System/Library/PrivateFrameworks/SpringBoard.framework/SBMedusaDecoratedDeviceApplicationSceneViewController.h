/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/SBSceneViewStatusBarAssertionObserver.h>
#import <libobjc.A.dylib/SBInlineAppExposeContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SBSystemCursorInteractionDelegate.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling.h>

@class SBDeviceApplicationSceneHandle, SBDeviceApplicationSceneViewController, UIView, SBInlineAppExposeContainerViewController, SBAsymmetricalCornerRadiusWrapperView, SBNubView, SBApplicationBlurContentView, NSHashTable, SBSceneViewStatusBarAssertion, NSMutableSet, SBMedusaSettings, BSCornerRadiusConfiguration, UIDropInteraction, NSString, MTLumaDodgePillSettings, SBSceneHandle, SBHomeGrabberView;

@interface SBMedusaDecoratedDeviceApplicationSceneViewController : UIViewController <SBSceneViewStatusBarAssertionObserver, SBInlineAppExposeContainerViewControllerDelegate, SBSystemCursorInteractionDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMedusaDecoratedDeviceApplicationSceneViewControlling> {

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
@property (assign,nonatomic) long long homeGrabberDisplayMode; 
@property (assign,nonatomic) BOOL shouldRasterizeSceneHostView; 
@property (nonatomic,copy) NSString * sceneHostViewMinificationFilter; 
@property (nonatomic,retain) MTLumaDodgePillSettings * homeGrabberPillSettings; 
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                                                          //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SBSceneHandle * sceneHandle; 
@property (nonatomic,readonly) long long displayMode; 
@property (nonatomic,retain) id<SBScenePlaceholderContentContext> placeholderContentContext; 
@property (nonatomic,retain) UIView * customContentView; 
@property (nonatomic,readonly) CGSize contentReferenceSize; 
@property (nonatomic,readonly) long long contentInterfaceOrientation; 
@property (nonatomic,readonly) double statusBarAlpha; 
@property (nonatomic,readonly) long long overrideStatusBarStyle; 
@property (assign,nonatomic,__weak) id<SBApplicationSceneViewControllingStatusBarDelegate> applicationSceneStatusBarDelegate; 
@property (nonatomic,readonly) SBHomeGrabberView * homeGrabberView; 
@property (assign,getter=isNubViewHidden,nonatomic) BOOL nubViewHidden; 
@property (assign,getter=isNubViewHighlighted,nonatomic) BOOL nubViewHighlighted; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(long long)layoutRole;
-(double)shadowOffset;
-(void)setShadowOffset:(double)arg1 ;
-(void)loadView;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(UIView *)customContentView;
-(void)setMaskedCorners:(unsigned long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(BOOL)clipsToBounds;
-(double)shadowOpacity;
-(double)statusBarAlpha;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(UIDropInteraction *)dropInteraction;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(long long)displayMode;
-(unsigned long long)maskedCorners;
-(id)newSnapshot;
-(double)effectiveCornerRadius;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)setLayoutRole:(long long)arg1 ;
-(SBSceneHandle *)sceneHandle;
-(void)setCustomContentView:(UIView *)arg1 ;
-(void)setPlaceholderContentContext:(id<SBScenePlaceholderContentContext>)arg1 ;
-(void)setDisplayMode:(long long)arg1 animationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id<SBScenePlaceholderContentContext>)placeholderContentContext;
-(BOOL)shouldBeginCursorInteractionAtLocation:(CGPoint)arg1 forView:(id)arg2 ;
-(UIEdgeInsets)cursorInteractionHitTestInsetsForView:(id)arg1 ;
-(id)styleForRegion:(id)arg1 forView:(id)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(SBHomeGrabberView *)homeGrabberView;
-(void)statusBarAssertionDidUpdate:(id)arg1 ;
-(void)statusBarAssertionDidInvalidate:(id)arg1 ;
-(void)setNubViewHidden:(BOOL)arg1 ;
-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(void)setDarkenViewAlpha:(double)arg1 ;
-(BOOL)shouldRasterizeSceneHostView;
-(NSString *)sceneHostViewMinificationFilter;
-(MTLumaDodgePillSettings *)homeGrabberPillSettings;
-(long long)contentInterfaceOrientation;
-(long long)overrideStatusBarStyle;
-(id)newSnapshotView;
-(void)newSnapshotViewOnQueue:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)containerContentWrapperInterfaceOrientationChangedTo:(long long)arg1 ;
-(CGSize)contentReferenceSize;
-(id<SBApplicationSceneViewControllingStatusBarDelegate>)applicationSceneStatusBarDelegate;
-(void)setApplicationSceneStatusBarDelegate:(id<SBApplicationSceneViewControllingStatusBarDelegate>)arg1 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(void)setShouldRasterizeSceneHostView:(BOOL)arg1 ;
-(void)setSceneHostViewMinificationFilter:(NSString *)arg1 ;
-(long long)homeGrabberDisplayMode;
-(void)setHomeGrabberPillSettings:(MTLumaDodgePillSettings *)arg1 ;
-(void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isBlurred;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(void)setNubViewHighlighted:(BOOL)arg1 ;
-(id)initWithDeviceApplicationSceneHandle:(id)arg1 inlineContainerViewController:(id)arg2 layoutRole:(long long)arg3 ;
-(BOOL)isNubViewHidden;
-(BOOL)isNubViewHighlighted;
-(double)darkenViewAlpha;
-(void)setInlineAppExposeContainerViewController:(id)arg1 ;
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

