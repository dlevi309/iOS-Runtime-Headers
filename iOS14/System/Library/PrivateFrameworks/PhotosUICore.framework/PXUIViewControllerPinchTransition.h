/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXUIViewControllerTransition.h>

@protocol UIViewControllerContextTransitioning;
@class UIPinchGestureRecognizer, UIView, PXRegionOfInterest, PXPinchTracker;

@interface PXUIViewControllerPinchTransition : PXUIViewControllerTransition {

	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	long long __state;
	id<UIViewControllerContextTransitioning> __transitionContext;
	UIView* __fromView;
	UIView* __toView;
	UIView* __fromSnapshotView;
	UIView* __toSnapshotView;
	UIView* __dimmingView;
	PXRegionOfInterest* __regionOfInterest;
	PXPinchTracker* __pinchTracker;

}

@property (assign,setter=_setState:,nonatomic) long long _state;                                                                     //@synthesize _state=__state - In the implementation block
@property (setter=_setTransitionContext:,nonatomic,retain) id<UIViewControllerContextTransitioning> _transitionContext;              //@synthesize _transitionContext=__transitionContext - In the implementation block
@property (setter=_setFromView:,nonatomic,retain) UIView * _fromView;                                                                //@synthesize _fromView=__fromView - In the implementation block
@property (setter=_setToView:,nonatomic,retain) UIView * _toView;                                                                    //@synthesize _toView=__toView - In the implementation block
@property (setter=_setFromSnapshotView:,nonatomic,retain) UIView * _fromSnapshotView;                                                //@synthesize _fromSnapshotView=__fromSnapshotView - In the implementation block
@property (setter=_setToSnapshotView:,nonatomic,retain) UIView * _toSnapshotView;                                                    //@synthesize _toSnapshotView=__toSnapshotView - In the implementation block
@property (setter=_setDimmingView:,nonatomic,retain) UIView * _dimmingView;                                                          //@synthesize _dimmingView=__dimmingView - In the implementation block
@property (setter=_setRegionOfInterest:,nonatomic,retain) PXRegionOfInterest * _regionOfInterest;                                    //@synthesize _regionOfInterest=__regionOfInterest - In the implementation block
@property (setter=_setPinchTracker:,nonatomic,retain) PXPinchTracker * _pinchTracker;                                                //@synthesize _pinchTracker=__pinchTracker - In the implementation block
@property (nonatomic,retain) UIPinchGestureRecognizer * pinchGestureRecognizer;                                                      //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
+(BOOL)isTransitionSupportedWithMasterViewController:(id)arg1 detailViewController:(id)arg2 ;
-(id<UIViewControllerContextTransitioning>)_transitionContext;
-(void)animateTransition:(id)arg1 ;
-(long long)_state;
-(void)_setState:(long long)arg1 ;
-(double)transitionDuration:(id)arg1 ;
-(UIView *)_dimmingView;
-(void)setPinchGestureRecognizer:(UIPinchGestureRecognizer *)arg1 ;
-(BOOL)isInteractive;
-(void)startInteractiveTransition:(id)arg1 ;
-(UIView *)_fromSnapshotView;
-(UIView *)_toSnapshotView;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(void)_setFromView:(id)arg1 ;
-(void)pinchGestureRecognizerDidChange;
-(void)_setTransitionContext:(id)arg1 ;
-(void)_setFromSnapshotView:(id)arg1 ;
-(void)_setToSnapshotView:(id)arg1 ;
-(PXRegionOfInterest *)_regionOfInterest;
-(void)_setRegionOfInterest:(id)arg1 ;
-(void)_update;
-(PXPinchTracker *)_pinchTracker;
-(void)_setToView:(id)arg1 ;
-(UIView *)_fromView;
-(void)_setDimmingView:(id)arg1 ;
-(UIView *)_toView;
-(void)_setPinchTracker:(id)arg1 ;
@end

