/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (getter=isPanDismissalAvailable,nonatomic,readonly) BOOL panDismissalAvailable; 
@property (getter=isZoomEnabled,nonatomic,readonly) BOOL zoomEnabled; 
@property (nonatomic,readonly) BOOL allowHotPocketDuringTransition; 
@property (assign,nonatomic,__weak) id<CCUIOverlayViewProvider> viewProvider;                              //@synthesize viewProvider=_viewProvider - In the implementation block
@property (assign,nonatomic,__weak) id<CCUIOverlayMetricsProvider> metricsProvider;                        //@synthesize metricsProvider=_metricsProvider - In the implementation block
@property (nonatomic,readonly) unsigned long long headerMode; 
@property (nonatomic,copy,readonly) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_baseC2AnimationParametersForTransitionState:(id)arg1 ;
-(BOOL)isZoomEnabled;
-(void)setMetricsProvider:(id<CCUIOverlayMetricsProvider>)arg1 ;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2 ;
-(BOOL)allowHotPocketDuringTransition;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3 ;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(void)setViewProvider:(id<CCUIOverlayViewProvider>)arg1 ;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1 ;
-(void)_addBackgroundViewWeightingAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3 ;
-(BOOL)isPanDismissalAvailable;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(void)layoutViews;
-(CGRect)_presentedViewFrame;
-(/*^block*/id)customBackdropScaleAdjustment;
-(CGRect)_statusLabelViewFrame;
-(void)_addContainerTransformAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
-(void)_addContainerAlphaAnimationToBatch:(id)arg1 transitionState:(id)arg2 ;
@end

