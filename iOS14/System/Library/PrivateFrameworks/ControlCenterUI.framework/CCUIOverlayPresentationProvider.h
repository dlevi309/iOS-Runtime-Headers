/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/


@protocol CCUIOverlayPresentationProvider <NSObject>
@property (getter=isPanDismissalAvailable,nonatomic,readonly) BOOL panDismissalAvailable; 
@property (getter=isZoomEnabled,nonatomic,readonly) BOOL zoomEnabled; 
@property (nonatomic,readonly) BOOL allowHotPocketDuringTransition; 
@property (assign,nonatomic,__weak) id<CCUIOverlayViewProvider> viewProvider; 
@property (assign,nonatomic,__weak) id<CCUIOverlayMetricsProvider> metricsProvider; 
@property (nonatomic,readonly) unsigned long long headerMode; 
@property (nonatomic,copy,readonly) id<CCUIOverlayFlickGestureBehavior> flickGestureBehavior; 
@optional
-(id<CCUIOverlayFlickGestureBehavior>)flickGestureBehavior;
-(id)prepareForPresentation;
-(unsigned long long)headerMode;
-(id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
-(id)cleanupForDismissal;
-(/*^block*/id)customBackdropScaleAdjustment;

@required
-(BOOL)isZoomEnabled;
-(void)setMetricsProvider:(id)arg1;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
-(BOOL)allowHotPocketDuringTransition;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(void)setViewProvider:(id)arg1;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3;
-(BOOL)isPanDismissalAvailable;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(void)layoutViews;

@end

