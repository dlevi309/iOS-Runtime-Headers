/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIDynamicBarAnimatorDelegate;
@class CADisplayLink;

@interface SKUIDynamicBarAnimator : NSObject {

	double _topBarHeightForState[2];
	double _bottomBarOffsetForState[2];
	BOOL _dragging;
	CADisplayLink* _displayLink;
	double _targetTopBarHeight;
	double _unroundedTopBarHeight;
	double _lastUnroundedTopBarHeight;
	BOOL _didHideBarsByMoving;
	BOOL _didHideOrShowBarsExplicitly;
	double _lastOffset;
	BOOL _inSteadyState;
	long long _state;
	double _topBarHeight;
	double _bottomBarOffset;
	double _minimumTopBarHeight;
	double _maximumBottomBarOffset;
	id<SKUIDynamicBarAnimatorDelegate> _delegate;

}

@property (nonatomic,readonly) long long state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) long long targetState; 
@property (nonatomic,readonly) double topBarHeight;                                           //@synthesize topBarHeight=_topBarHeight - In the implementation block
@property (nonatomic,readonly) double bottomBarOffset;                                        //@synthesize bottomBarOffset=_bottomBarOffset - In the implementation block
@property (assign,nonatomic) double minimumTopBarHeight;                                      //@synthesize minimumTopBarHeight=_minimumTopBarHeight - In the implementation block
@property (assign,nonatomic) double maximumBottomBarOffset;                                   //@synthesize maximumBottomBarOffset=_maximumBottomBarOffset - In the implementation block
@property (assign,nonatomic,__weak) id<SKUIDynamicBarAnimatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_transitionToSteadyState;
-(id)init;
-(void)endDraggingWithTargetOffset:(double)arg1 velocity:(double)arg2 ;
-(long long)targetState;
-(void)setTopBarHeight:(double)arg1 forState:(long long)arg2 ;
-(id<SKUIDynamicBarAnimatorDelegate>)delegate;
-(void)setMaximumBottomBarOffset:(double)arg1 ;
-(double)maximumBottomBarOffset;
-(void)_moveBarsWithDelta:(double)arg1 ;
-(double)_bottomBarOffsetForTopBarHeight:(double)arg1 ;
-(double)_constrainTopBarHeight:(double)arg1 ;
-(void)_displayLinkFired:(id)arg1 ;
-(void)setDelegate:(id<SKUIDynamicBarAnimatorDelegate>)arg1 ;
-(void)beginDraggingWithOffset:(double)arg1 ;
-(void)setBottomBarOffset:(double)arg1 forState:(long long)arg2 ;
-(double)minimumTopBarHeight;
-(double)bottomBarOffset;
-(void)_updateOutputs;
-(BOOL)canTransitionToState:(long long)arg1 ;
-(void)updateDraggingWithOffset:(double)arg1 ;
-(long long)state;
-(double)topBarHeight;
-(void)setMinimumTopBarHeight:(double)arg1 ;
-(void)_updateDisplayLink;
-(void)_setInSteadyState:(BOOL)arg1 ;
-(void)attemptTransitionToState:(long long)arg1 animated:(BOOL)arg2 ;
-(void)dealloc;
-(double)_topBarHeightForBottomBarOffset:(double)arg1 ;
@end

