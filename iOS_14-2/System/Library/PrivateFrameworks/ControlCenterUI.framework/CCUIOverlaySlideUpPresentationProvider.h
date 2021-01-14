/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIOverlayFlickGestureBehavior.h>
#import <libobjc.A.dylib/CCUIOverlayPresentationProvider.h>

@protocol CCUIOverlayViewProvider, CCUIOverlayMetricsProvider;
@class NSString;

@interface CCUIOverlaySlideUpPresentationProvider : NSObject <CCUIOverlayFlickGestureBehavior, CCUIOverlayPresentationProvider> {

	id<CCUIOverlayViewProvider> _viewProvider;
	id<CCUIOverlayMetricsProvider> _metricsProvider;

}

@property (nonatomic,readonly) double dismissalFlickMaximumTime; 
@property (nonatomic,readonly) double dismissalFlickMinimumVelocity; 
@property (nonatomic,readonly) unsigned long long dismissalFlickAllowedDirections; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isPanDismissalAvailable,nonatomic,readonly) BOOL panDismissalAvailable; 
@property (getter=isZoomEnabled,nonatomic,readonly) BOOL zoomEnabled; 
@property (nonatomic,readonly) BOOL allowHotPocketDuringTransition; 
@property (assign,nonatomic,__weak) id<CCUIOverlayViewProvider> viewProvider;                              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIOverlayMetricsProvider> metricsProvider;                        //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long headerMode; 
@property (nonatomic,copy,readonly) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior; 
+(id)_moduleC2AnimationParametersForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2 ;
+(id)_baseC2AnimationParametersForTransitionState:(id)arg1 ;
-(BOOL)isZoomEnabled;
-(double)dismissalFlickMinimumVelocity;
-(CGRect)_headerViewFrameForContentSize:(CGSize)arg1 withinBounds:(CGRect)arg2 contentInset:(UIEdgeInsets)arg3 contentEdgeInsets:(UIEdgeInsets)arg4 orientation:(long long)arg5 ;
-(unsigned long long)dismissalFlickAllowedDirections;
-(void)setMetricsProvider:(id<CCUIOverlayMetricsProvider>)arg1 ;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2 ;
-(double)dismissalFlickMaximumTime;
-(BOOL)allowHotPocketDuringTransition;
-(id<CCUIOverlayFlickGestureBehavior>)flickGestureBehavior;
-(double)_effectiveHeaderViewHeight;
-(CGAffineTransform)_moduleViewTransformForTransitionState:(id)arg1 layoutRect:(CCUILayoutRect)arg2 ;
-(void)_addModuleTransformAnimationsToBatch:(id)arg1 transitionState:(id)arg2 ;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3 ;
-(CGAffineTransform)_transformForTransitionState:(id)arg1 rubberBandingHeight:(double)arg2 ;
-(void)_addHeaderContentTranslationAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(CGAffineTransform)_headerViewTransformForTransitionState:(id)arg1 ;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(void)setViewProvider:(id<CCUIOverlayViewProvider>)arg1 ;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1 ;
-(double)_pullUpTranslation;
-(void)_addScrollViewContentOffsetAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3 ;
-(BOOL)isPanDismissalAvailable;
-(void)_addHeaderChevronAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addHeaderSensorStatusViewAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(void)_addHeaderStatusBarAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(UIEdgeInsets)_edgeInsetsForContentSize:(CGSize)arg1 withinBounds:(CGRect)arg2 contentEdgeInsets:(UIEdgeInsets)arg3 orientation:(long long)arg4 ;
-(CGAffineTransform)_moduleViewScaleTransformForTransitionState:(id)arg1 ;
-(unsigned long long)headerMode;
-(void)_addHeaderContentTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)layoutViews;
-(double)_additionalHeaderHeight;
@end

