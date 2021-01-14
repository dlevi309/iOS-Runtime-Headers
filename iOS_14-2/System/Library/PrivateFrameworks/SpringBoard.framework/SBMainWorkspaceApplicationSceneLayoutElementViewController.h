/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppContainerViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBInlineAppExposeContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutElementViewControlling.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling.h>

@class NSMutableSet, UIDropInteraction, BSCornerRadiusConfiguration, SBSceneViewStatusBarAssertion, SBInlineAppExposeContainerViewController, NSString, SBDeviceApplicationSceneHandle, SBHomeGrabberView, UIView;

@interface SBMainWorkspaceApplicationSceneLayoutElementViewController : SBAppContainerViewController <SBDeviceApplicationSceneHandleObserver, SBInlineAppExposeContainerViewControllerDelegate, SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal, SBMainDisplaySceneLayoutElementViewControlling, SBMedusaDecoratedDeviceApplicationSceneViewControlling> {

	BOOL _nubViewHidden;
	BOOL _nubViewHighlighted;
	NSMutableSet* _maskDisplayCornersReasons;
	BOOL _clipsToBounds;
	double _darkenViewAlpha;
	UIDropInteraction* _dropInteraction;
	BSCornerRadiusConfiguration* _cornerRadiusConfiguration;
	double _shadowOpacity;
	double _shadowOffset;
	SBSceneViewStatusBarAssertion* _inlineAppExposeContainerStatusBarAssertion;
	SBInlineAppExposeContainerViewController* _inlineAppExposeContainerOverlayViewController;

}

@property (nonatomic,retain) BSCornerRadiusConfiguration * cornerRadiusConfiguration;                                                      //@synthesize cornerRadiusConfiguration=_cornerRadiusConfiguration - In the implementation block
@property (assign,nonatomic) double shadowOpacity;                                                                                         //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
@property (assign,nonatomic) double shadowOffset;                                                                                          //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain) SBSceneViewStatusBarAssertion * inlineAppExposeContainerStatusBarAssertion;                                   //@synthesize inlineAppExposeContainerStatusBarAssertion=_inlineAppExposeContainerStatusBarAssertion - In the implementation block
@property (nonatomic,readonly) SBInlineAppExposeContainerViewController * inlineAppExposeContainerOverlayViewController;                   //@synthesize inlineAppExposeContainerOverlayViewController=_inlineAppExposeContainerOverlayViewController - In the implementation block
@property (assign,nonatomic) BOOL clipsToBounds;                                                                                           //@synthesize clipsToBounds=_clipsToBounds - In the implementation block
@property (assign,nonatomic) double darkenViewAlpha;                                                                                       //@synthesize darkenViewAlpha=_darkenViewAlpha - In the implementation block
@property (nonatomic,retain) UIDropInteraction * dropInteraction;                                                                          //@synthesize dropInteraction=_dropInteraction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
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
-(void)setShadowOffset:(double)arg1 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(UIDropInteraction *)dropInteraction;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(id)_medusaDecoratedVC:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(void)setNubViewHidden:(BOOL)arg1 ;
-(SBSceneViewStatusBarAssertion *)inlineAppExposeContainerStatusBarAssertion;
-(double)shadowOpacity;
-(void)setBackgroundView:(UIView*<SBApplicationSceneBackgroundView>)arg1 ;
-(id)_relinquishInlineAppExposeContainerViewController;
-(double)shadowOffset;
-(UIView*<SBApplicationSceneBackgroundView>)backgroundView;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(BOOL)SB_conformsToSceneLayoutMedusaStatusBarAssertionProviding;
-(double)darkenViewAlpha;
-(unsigned long long)supportedContentInterfaceOrientations;
-(BOOL)isNubViewHidden;
-(void)prepareForReuse;
-(BOOL)isBlurred;
-(BOOL)SB_conformsToSceneLayoutStatusBarAssertionProviding;
-(NSString *)description;
-(id)containerViewForBlurContentView;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(BOOL)isNubViewHighlighted;
-(id)_applicationSceneViewControllerForSceneHandle:(id)arg1 ;
-(id)_deviceApplicationSceneViewController:(id)arg1 ;
-(BOOL)clipsToBounds;
-(BOOL)_shouldDisplayLayoutElementBecomeActive;
-(id)_deviceApplicationSceneViewController;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2 ;
-(id)initialCornerRadiusConfiguration;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(SBInlineAppExposeContainerViewController *)inlineAppExposeContainerOverlayViewController;
-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(id)_medusaDecoratedVC;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(SBHomeGrabberView *)homeGrabberView;
-(long long)homeGrabberDisplayMode;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(void)setDarkenViewAlpha:(double)arg1 ;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(id)_applicationSceneViewController;
-(void)setInlineAppExposeContainerStatusBarAssertion:(SBSceneViewStatusBarAssertion *)arg1 ;
-(void)setNubViewHighlighted:(BOOL)arg1 ;
-(void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(void)_configureViewController:(id)arg1 ;
-(void)setInlineAppExposeContainerViewController:(id)arg1 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
@end

