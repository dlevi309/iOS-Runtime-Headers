/*
* Generated on Monday, March 1, 2021 at 2:35:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBAppContainerViewController.h>
#import <libobjc.A.dylib/SBDeviceApplicationSceneHandleObserver.h>
#import <libobjc.A.dylib/SBInlineAppExposeContainerViewControllerDelegate.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling_Internal.h>
#import <libobjc.A.dylib/SBMainDisplaySceneLayoutElementViewControlling.h>
#import <libobjc.A.dylib/SBMedusaDecoratedDeviceApplicationSceneViewControlling.h>

@class NSMutableSet, UIDropInteraction, BSCornerRadiusConfiguration, SBSceneViewStatusBarAssertion, SBInlineAppExposeContainerViewController, NSString, SBSceneHandle, UIView, SBHomeGrabberView;

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
@property (assign,nonatomic) long long homeGrabberDisplayMode; 
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
@property (getter=isBlurred,nonatomic,readonly) BOOL blurred; 
@property (assign,getter=isNubViewHidden,nonatomic) BOOL nubViewHidden; 
@property (assign,getter=isNubViewHighlighted,nonatomic) BOOL nubViewHighlighted; 
-(NSString *)description;
-(void)prepareForReuse;
-(double)shadowOffset;
-(void)setShadowOffset:(double)arg1 ;
-(void)setShadowOpacity:(double)arg1 ;
-(void)setClipsToBounds:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(BOOL)clipsToBounds;
-(double)shadowOpacity;
-(void)setDropInteraction:(UIDropInteraction *)arg1 ;
-(UIDropInteraction *)dropInteraction;
-(BSCornerRadiusConfiguration *)cornerRadiusConfiguration;
-(void)setCornerRadiusConfiguration:(BSCornerRadiusConfiguration *)arg1 ;
-(void)sceneHandle:(id)arg1 didCreateScene:(id)arg2 ;
-(id)animationControllerForTransitionRequest:(id)arg1 ;
-(void)sceneHandle:(id)arg1 didChangeEffectiveForegroundness:(BOOL)arg2 ;
-(void)configureWithWorkspaceEntity:(id)arg1 forLayoutElement:(id)arg2 layoutState:(id)arg3 referenceFrame:(CGRect)arg4 ;
-(void)setContentReferenceSize:(CGSize)arg1 withInterfaceOrientation:(long long)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidBeginWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionWillEndWithTransitionContext:(id)arg2 ;
-(void)layoutStateTransitionCoordinator:(id)arg1 transitionDidEndWithTransitionContext:(id)arg2 ;
-(void)setMaskDisplayCorners:(BOOL)arg1 forReason:(id)arg2 ;
-(BOOL)SB_conformsToMainDisplaySceneLayoutElementViewControlling;
-(SBHomeGrabberView *)homeGrabberView;
-(void)setNubViewHidden:(BOOL)arg1 ;
-(BOOL)SB_conformsToMedusaDecoratedDeviceApplicationSceneViewControlling;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 nubViewHidden:(long long)arg2 atLevel:(unsigned long long)arg3 ;
-(id)mainWorkspaceApplicationSceneLayoutElementViewController;
-(void)setDarkenViewAlpha:(double)arg1 ;
-(id)_applicationSceneViewController;
-(id)statusBarAssertionWithStatusBarHidden:(BOOL)arg1 atLevel:(unsigned long long)arg2 ;
-(void)setHomeGrabberDisplayMode:(long long)arg1 ;
-(long long)homeGrabberDisplayMode;
-(id)initialCornerRadiusConfiguration;
-(id)containerViewForBlurContentView;
-(id)initWithDisplayIdentity:(id)arg1 ;
-(id)_deviceApplicationSceneViewController;
-(BOOL)_shouldDisplayLayoutElementBecomeActive;
-(unsigned long long)supportedContentInterfaceOrientations;
-(void)inlineContainerViewController:(id)arg1 setStatusBarHidden:(BOOL)arg2 ;
-(id)_applicationSceneViewControllerForSceneHandle:(id)arg1 ;
-(void)_configureViewController:(id)arg1 ;
-(long long)_overrideStatusBarOrientationGivenFallbackOrientation:(long long)arg1 ;
-(void)blurApplicationContent:(BOOL)arg1 withAnimationFactory:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)isBlurred;
-(id)_medusaDecoratedVC;
-(void)_beginRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(void)_endRequiringSceneViewMatchMoveAnimationForReason:(id)arg1 ;
-(SBInlineAppExposeContainerViewController *)inlineAppExposeContainerOverlayViewController;
-(void)setNubViewHighlighted:(BOOL)arg1 ;
-(id)_medusaDecoratedVC:(id)arg1 ;
-(BOOL)isNubViewHidden;
-(BOOL)isNubViewHighlighted;
-(double)darkenViewAlpha;
-(void)setInlineAppExposeContainerViewController:(id)arg1 ;
-(id)_deviceApplicationSceneViewController:(id)arg1 ;
-(id)_relinquishInlineAppExposeContainerViewController;
-(SBSceneViewStatusBarAssertion *)inlineAppExposeContainerStatusBarAssertion;
-(void)setInlineAppExposeContainerStatusBarAssertion:(SBSceneViewStatusBarAssertion *)arg1 ;
@end

