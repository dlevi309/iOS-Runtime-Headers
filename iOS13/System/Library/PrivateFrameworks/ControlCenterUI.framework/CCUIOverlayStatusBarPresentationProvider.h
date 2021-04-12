/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIOverlayFlickGestureBehavior.h>
#import <libobjc.A.dylib/CCUIOverlayPresentationProvider.h>

@protocol CCUIOverlayViewProvider, CCUIOverlayMetricsProvider;
@class NSString;

@interface CCUIOverlayStatusBarPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider> {

	id<CCUIOverlayViewProvider> _viewProvider;
	id<CCUIOverlayMetricsProvider> _metricsProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double dismissalFlickMaximumTime; 
@property (nonatomic,readonly) double dismissalFlickMinimumVelocity; 
@property (nonatomic,readonly) unsigned long long dismissalFlickAllowedDirections; 
@property (getter=isPanDismissalAvailable,nonatomic,readonly) BOOL panDismissalAvailable; 
@property (getter=isZoomEnabled,nonatomic,readonly) BOOL zoomEnabled; 
@property (nonatomic,readonly) BOOL allowHotPocketDuringTransition; 
@property (assign,nonatomic,__weak) id<CCUIOverlayViewProvider> viewProvider;                              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIOverlayMetricsProvider> metricsProvider;                        //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long headerMode; 
@property (nonatomic,copy,readonly) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior; 
+(id)_hiddenStatusBarFadeAnimationParameters;
+(id)_baseC2AnimationParametersForTransitionState:(id)arg1 ;
+(id)_leadingStatusBarCAAnimationParametersForTransitionState:(id)arg1 ;
+(id)_trailingStatusBarCAAnimationParametersForTransitionState:(id)arg1 ;
+(id)_compactTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1 ;
+(id)_expandedLeadingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1 ;
+(id)_expandedTrailingStatusBarAlphaCAAnimationParametersForTransitionState:(id)arg1 ;
+(id)_reducedMotionStatusBarStateCAAnimationParameters;
+(id)_moduleC2AnimationParametersForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2 ;
+(id)_moduleScaleCAAnimationParametersForTransitionState:(id)arg1 ;
+(id)_moduleAlphaCAAnimationParametersForTransitionState:(id)arg1 ;
-(void)layoutViews;
-(BOOL)isZoomEnabled;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(void)setViewProvider:(id<CCUIOverlayViewProvider>)arg1 ;
-(id)prepareForPresentation;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(CGRect)_presentedViewFrame;
-(UIEdgeInsets)_edgeInsetsForContentSize:(CGSize)arg1 withinBounds:(CGRect)arg2 contentEdgeInsets:(UIEdgeInsets)arg3 orientation:(long long)arg4 ;
-(CGRect)_headerViewFrameForContentSize:(CGSize)arg1 withinBounds:(CGRect)arg2 contentInset:(UIEdgeInsets)arg3 contentEdgeInsets:(UIEdgeInsets)arg4 orientation:(long long)arg5 ;
-(void)_addLeadingStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addHeaderContentTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addReducedMotionStatusBarStateAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addScrollViewContentOffsetAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addModuleTransformAnimationsToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addModuleScaleAnimationsToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addModuleAlphaAnimationsToBatch:(id)arg1 transitionState:(id)arg2 ;
-(double)_leadingStatusBarAlphaForTransitionState:(id)arg1 ;
-(CGAffineTransform)_headerViewTransformForTransitionState:(id)arg1 ;
-(CGAffineTransform)_compactStatusBar:(id)arg1 transformForTransitionState:(id)arg2 ;
-(CGAffineTransform)_transformForTransitionState:(id)arg1 rubberBandingHeight:(double)arg2 ;
-(CGAffineTransform)_moduleViewTransformForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2 ;
-(double)_delayForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2 ;
-(CGAffineTransform)_moduleViewScaleTransformForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2 ;
-(double)dismissalFlickMaximumTime;
-(double)dismissalFlickMinimumVelocity;
-(unsigned long long)dismissalFlickAllowedDirections;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3 ;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3 ;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2 ;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1 ;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(BOOL)isPanDismissalAvailable;
-(BOOL)allowHotPocketDuringTransition;
-(void)setMetricsProvider:(id<CCUIOverlayMetricsProvider>)arg1 ;
-(id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2 ;
-(id)cleanupForDismissal;
-(unsigned long long)headerMode;
-(id<CCUIOverlayFlickGestureBehavior>)flickGestureBehavior;
@end

