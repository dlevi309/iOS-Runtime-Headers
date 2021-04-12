/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)prepareForPresentation;
-(id)secondaryAnimationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
-(id)cleanupForDismissal;
-(/*^block*/id)customBackdropScaleAdjustment;
-(unsigned long long)headerMode;
-(id<CCUIOverlayFlickGestureBehavior>)flickGestureBehavior;

@required
-(void)layoutViews;
-(BOOL)isZoomEnabled;
-(id<CCUIOverlayViewProvider>)viewProvider;
-(void)setViewProvider:(id)arg1;
-(id<CCUIOverlayMetricsProvider>)metricsProvider;
-(id)transitionStateForType:(unsigned long long)arg1 interactive:(BOOL)arg2 translation:(CGPoint)arg3;
-(unsigned long long)finalTransitionTypeForState:(id)arg1 gestureTranslation:(CGPoint)arg2 gestureVelocity:(CGPoint)arg3;
-(id)animationBatchForTransitionState:(id)arg1 previousTransitionState:(id)arg2;
-(BOOL)tapAllowsDismissalForLocation:(CGPoint)arg1;
-(BOOL)backdropViewShouldUseAlphaTransformer;
-(BOOL)isPanDismissalAvailable;
-(BOOL)allowHotPocketDuringTransition;
-(void)setMetricsProvider:(id)arg1;

@end

