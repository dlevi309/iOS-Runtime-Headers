/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <libobjc.A.dylib/CCUIOverlayPresentationProvider.h>

@protocol CCUIOverlayViewProvider, CCUIOverlayMetricsProvider;
@class NSString;

@interface CCUIOverlayScaleFadePresentationProvider : NSObject <CCUIOverlayPresentationProvider> {

	id<CCUIOverlayViewProvider> _viewProvider;
	id<CCUIOverlayMetricsProvider> _metricsProvider;

}

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
+(id)_baseC2AnimationParametersForTransitionState:(id)arg1 ;
-(void)layoutViews;
-(BOOL)isZoomEnabled;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(void)setViewProvider:(id<CCUIOverlayViewProvider>)arg1 ;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(CGRect)_presentedViewFrame;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3 ;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3 ;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2 ;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1 ;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(BOOL)isPanDismissalAvailable;
-(BOOL)allowHotPocketDuringTransition;
-(void)setMetricsProvider:(id<CCUIOverlayMetricsProvider>)arg1 ;
-(/*^block*/id)customBackdropScaleAdjustment;
-(CGRect)_statusLabelViewFrame;
-(void)_addContainerTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addContainerAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
@end

